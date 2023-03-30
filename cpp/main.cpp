#include "append_range.h"
#include <memory>

int main()
{
    auto session = std::make_unique<sy::AppendRange>();
    session->BeginStage();
    session->EndStage();
    return 0;
}