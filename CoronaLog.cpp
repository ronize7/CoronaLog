#include "Common/Common.hpp"
#include "LagziLogger.hpp"

int main()
{
    std::cout << ("start logging!") << std::endl;

    LagziLogger::LogDebug(L"This is a debug log");
    LagziLogger::LogError(L"This is an error log");

    std::cout << ("stop logging!") << std::endl;
    return 0;
}
