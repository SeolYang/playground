#pragma once
#include "session.h"

namespace sy
{
class AppendRange : public Session
{
public:
    void BeginStage() override;
    void EndStage() override {}
};
} // namespace sy
