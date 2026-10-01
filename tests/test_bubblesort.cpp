#include "../src/sort/bubblesort.h"
#include <algorithm>
#include <array>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/catch_test_macros.hpp>
#include <random>
#include <vector>

TEST_CASE("Should work with Arrays and Vectors")
{
    SECTION("Vectors")
    {
        std::vector<int> vec{3, 1, 3};
        learn::sort::bubblesort(vec);
        REQUIRE(vec == std::vector<int>{1, 3, 3});
    }
    SECTION("Arrays")
    {
        std::array<int32_t, 3> arr{5, 7, 1};
        learn::sort::bubblesort(arr);
        REQUIRE(arr == std::array<int32_t, 3>{1, 5, 7});
    }
}

TEST_CASE("Random test of about 100 elements")
{
    std::random_device rd;  // a seed source for the random number engine
    std::mt19937 gen(rd()); // initiate ranodm number engine with see
    std::uniform_int_distribution<> distrib(1, 100);

    std::vector<int> bubble_vec;
    std::vector<int> sort_vec;

    for (int i = 0; i < 100; i++)
        bubble_vec.push_back(distrib(gen));
    sort_vec = bubble_vec;
    std::sort(sort_vec.begin(), sort_vec.end());
    learn::sort::bubblesort(bubble_vec);
    REQUIRE(bubble_vec == sort_vec);
}

TEST_CASE("Benchmark Sort")
{
    std::random_device rd;  // a seed source for the random number engine
    std::mt19937 gen(rd()); // initiate ranodm number engine with see
    std::uniform_int_distribution<> distrib(1, 100);

    std::vector<int> bubble_vec;
    std::vector<int> sort_vec;

    // about a million numbers
    for (int i = 0; i < 10000; i++)
        bubble_vec.push_back(distrib(gen));

    sort_vec = bubble_vec;

    BENCHMARK("C++ sort")
    {
        return std::sort(sort_vec.begin(), sort_vec.end());
    };
    BENCHMARK("Bubble sort") { return learn::sort::bubblesort(bubble_vec); };
}
