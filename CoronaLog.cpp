#include "Common/Common.hpp"
#include "NaorLogger/NaorLogger.hpp"

int main()
{
    std::cout << ("start logging!") << std::endl;

	NaorLogger naor_logger(L"C:\\temp\\log.txt");
	naor_logger.log(L"Hello ");
	naor_logger.log(L"World!");


    std::cout << ("stop logging!") << std::endl;
    return 0;
}