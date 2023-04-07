#include "constness.h"
#include <memory>

#define CATCH_CONFIG_RUNNRR
#include "catch.hpp"

int main(int argc, char** argv)
{
    Catch::Session session;
    const auto cli = session.cli();
    session.cli(cli);

    if (const int returnCode = session.applyCommandLine(argc, argv);
        returnCode != 0)
    {
        return returnCode;
    }

    const auto numFailedTests = session.run();
    return numFailedTests;
}