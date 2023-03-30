#include "assign_range.h"
#include <vector>
#include <iostream>
#include <span>

namespace sy
{
void AssignRange::BeginStage()
{
    std::vector<int> vecA;
    std::vector<int> vecB;
    vecB.emplace_back(4);
    vecB.emplace_back(5);
    vecB.emplace_back(6);

	const std::span vecBSpan = std::span{vecB};
    vecA.assign_range(vecBSpan);

    /** Expected: 4 5 6*/
    for (const auto integer : vecA)
    {
        std::cout << integer << " ";
    }
}
} // namespace sy