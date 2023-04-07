#pragma once
#include "session.h"
#include <iostream>

namespace sy
{
class AwesomeClass
{
public:
    int& Value() { return value; }

private:
    int value = 0;
};

class Constness : public Session
{
public:
    void BeginStage() override
    {
        std::cout << "Object: " << object.Value() << std::endl;
        BreakConstness(object.Value());
        std::cout << "Constness broken! : " << object.Value() << std::endl;
    }

    void EndStage() override {}

private:
    void BreakConstness(int& nonConstReference) const
    {
        // It has possibility to change the value of class member
        nonConstReference = 30;
    }

private:
	AwesomeClass object;

};
} // namespace sy