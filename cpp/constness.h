#pragma once
#include "session.h"
#include <iostream>

namespace sy::constness
{
class AwesomeClass
{
public:
    int& Value() { return value; }

	void BreakConstness()
	{
        ProcessNonConstRefValue(Value());
	}

	void ProcessNonConstRefValue(int& nonConstRefValue)
	{
        nonConstRefValue = 1;
	}

private:
    int value = 0;
};
} // namespace sy::constness