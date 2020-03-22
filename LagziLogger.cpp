#include "LagziLogger.hpp"

void LagziLogger::Log(std::wstring message)
{
    std::wcout << message << std::endl;
}

void LagziLogger::LogError(std::wstring message)
{
    LagziLogger::Log(std::wstring(L"ERROR: ") + message);
}

void LagziLogger::LogDebug(std::wstring message)
{
    LagziLogger::Log(std::wstring(L"DEBUG: ") + message);
}
