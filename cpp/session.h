#pragma once

namespace sy
{
class Session
{
public:
    virtual void BeginStage() = 0;
    virtual void EndStage()   = 0;
};
} // namespace sy
