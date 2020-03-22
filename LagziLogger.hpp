#pragma once
#include <iostream>

class LagziLogger {
public:
    static void LogError(std::wstring message);
    static void LogDebug(std::wstring message);
    
private:
    static void Log(std::wstring message);
};
