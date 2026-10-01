#include <fmt/core.h>
#include <fmt/ranges.h>

namespace learn
{
namespace sort
{
template <typename Container> void bubblesort(Container& list)
{
    for (size_t i = 0; i < list.size(); i++) {
        for (size_t j = i + 1; j < list.size(); j++) {
            if (list[i] > list[j]) {
                auto temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }
}
} // namespace sort
} // namespace learn
