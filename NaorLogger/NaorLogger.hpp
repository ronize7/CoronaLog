#pragma once

#include <Windows.h>
#include <string>

class NaorLogger
{
public:
	explicit NaorLogger(std::wstring file_path);
	~NaorLogger();

	NaorLogger(NaorLogger&) = delete;
	NaorLogger& operator=(NaorLogger& other) = delete;

	NaorLogger(NaorLogger&&) = default;
	NaorLogger& operator=(NaorLogger&& other) = default;

	void log(std::wstring log_message);

private:
	static HANDLE _s_open_log_file(std::wstring file_path);

	HANDLE m_log_file;
};