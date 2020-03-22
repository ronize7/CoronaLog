#include "Common/Common.hpp"
#include "ZLogger/ZLogger.hpp"

int main()
{
    std::cout << ("start logging!") << std::endl;

    ZLogger::log(L"Ani");

    ZLogger::log(L"Hoev");
    
    ZLogger::log(L"Loggim");

    std::cout << ("stop logging!") << std::endl;
    return 0;
}