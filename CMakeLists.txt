cmake_minimum_required(VERSION 3.24)
project(learning)
set(CMAKE_CXX_STANDARD 23)

include(FetchContent)
# Catch2 integration
find_package(Catch2 3 REQUIRED)
# fmt integration
FetchContent_Declare(
  fmt
  GIT_REPOSITORY https://github.com/fmtlib/fmt.git
  GIT_TAG        11.0.2 # or your preferred version
)
FetchContent_MakeAvailable(fmt)

add_executable(learning main.cpp src/math/vec2.h src/math/fibonacci.h src/sort/bubblesort.h)
add_executable(tests tests/test_vec2.cpp tests/test_bubblesort.cpp)
target_link_libraries(learning PRIVATE fmt::fmt)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain fmt::fmt)
