#pragma once
#include "../Common/Common.hpp"

class ZLogger
{
public:
	ZLogger() = delete;
	virtual ~ZLogger() = default;

	static void log(const std::wstring& log)
	{
		std::wcout << log << std::endl;
	}
};
