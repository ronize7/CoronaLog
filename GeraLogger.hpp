#pragma once
#include <iostream>

class GeraLogger {
public:
    static void LogError(std::wstring message);
    static void LogDebug(std::wstring message);
    
private:
    static void Log(std::wstring message);
};
