#include "append_range.h"
#include <vector>
#include <iostream>

namespace sy
{
void AppendRange::BeginStage()
{
    std::vector<int> vecA;
    vecA.emplace_back(1);
	vecA.emplace_back(2);
	vecA.emplace_back(3);
    std::vector<int> vecB;
    vecB.emplace_back(4);
	vecB.emplace_back(5);
	vecB.emplace_back(6);

    vecA.append_range(vecB);

	/** Expected: 1 2 3 4 5 6*/
    for (const auto integer : vecA)
    {
        std::cout << integer << " ";
    }
}
} // namespace sy