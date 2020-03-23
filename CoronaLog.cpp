#include "Common/Common.hpp"
#include "GeraLogger.hpp"

int main()
{
    std::cout << ("start logging!") << std::endl;

    GeraLogger::LogDebug(L"This is a debug log");
    GeraLogger::LogError(L"This is an error log");

    std::cout << ("stop logging!") << std::endl;
    return 0;
}
