#pragma once
#pragma once
#include "session.h"

namespace sy
{
class AssignRange : public Session
{
public:
    void BeginStage() override;
    void EndStage() override {}
};
} // namespace sy
