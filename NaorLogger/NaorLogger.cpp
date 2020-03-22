#include "NaorLogger.hpp"

NaorLogger::NaorLogger(std::wstring file_path) :
	m_log_file(_s_open_log_file(file_path))
{ }

NaorLogger::~NaorLogger()
{
	try
	{
		if (INVALID_HANDLE_VALUE != m_log_file)
		{
			CloseHandle(m_log_file);
			m_log_file = INVALID_HANDLE_VALUE;
		}
	}
	catch (...)
	{ }
}

void NaorLogger::log(std::wstring log_message)
{
	// Skip a line for every new message
	log_message.append(L"\n");

	DWORD bytes_written = 0;

	if (!WriteFile(
		m_log_file,
		log_message.data(),
		static_cast<DWORD>(log_message.size() * sizeof(wchar_t)),
		&bytes_written,
		nullptr
	))
	{
		throw L"Failed writting to log file";
	}

	if (bytes_written != log_message.size() * sizeof(wchar_t))
	{
		throw L"Partial write to log file occured";
	}
}

HANDLE NaorLogger::_s_open_log_file(std::wstring file_path)
{
	HANDLE log_file = CreateFileW(
		file_path.c_str(), 
		FILE_APPEND_DATA, 
		0, 
		nullptr, 
		OPEN_ALWAYS, 
		FILE_ATTRIBUTE_NORMAL, 
		nullptr
	);
	if (INVALID_HANDLE_VALUE == log_file)
	{
		throw L"Failed openning log file";
	}

	return log_file;
}
