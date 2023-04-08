#pragma once
#include "session.h"
#include <iostream>

namespace sy::constness
{

class Constness
{
public:
    Constness()
    {
        ptr = new int(0);
    }
    
    ~Constness()
    {
        delete ptr;
    }

    int* ImproperConstPtr() const { return ptr; }
    int& ImproperConstRef() const { return *ptr; }
    
    const int* ProperConstPtr() const { return ptr; }
    const int& ProperConstRef() const { return *ptr; }

private:
    int* ptr;
};

void BreakBitwiseConstness(const Constness& object)
{
    int& ref = object.Ref();
    ref = 1;
}

void PreventBreakBitwiseConstness(const Constness& object)
{
    //int& ref = object.ProperConstRef();
    //int* ptr = &object.ProperConstRef();
    const int& ref = object.ProperConstRef();
    //ref = 1; .. const_cast..... -> ???
}
} // namespace sy::constness
