#include "GeraLogger.hpp"

void GeraLogger::Log(std::wstring message)
{
    std::wcout << message << std::endl;
}

void GeraLogger::LogError(std::wstring message)
{
    GeraLogger::Log(std::wstring(L"ERROR: ") + message);
}

void GeraLogger::LogDebug(std::wstring message)
{
    GeraLogger::Log(std::wstring(L"DEBUG: ") + message);
}
