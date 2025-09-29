cmake_minimum_required(VERSION 4.1.1)
project(cpp_algorithms LANGUAGES CXX)

# GoogleTest requires at least C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# GoogleTest
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/52eb8108c5bdec04579160ae17225d66034bd723.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
# set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Add a library with all algorithm implementations
file(GLOB_RECURSE ALGO_SOURCES CONFIGURE_DEPENDS src/*.cpp)
add_library(algorithms ${ALGO_SOURCES})
target_include_directories(algorithms PUBLIC include)

# Tests
enable_testing()
add_executable(runTests
    tests/test_sorting.cpp
    # tests/test_graphs.cpp
)
target_link_libraries(runTests
    PRIVATE
        algorithms
        GTest::gtest_main
)
include(GoogleTest)
gtest_discover_tests(runTests)

# Example executable
# add_executable(insertion_sort_demo src/sorting/insertion_sort.cpp)
# target_link_libraries(insertion_sort_demo PRIVATE algorithms)

# Compiler warnings
if (MSVC)
    target_compile_options(algorithms PRIVATE /W4 /permissive-)
else()
    target_compile_options(algorithms PRIVATE -Wall -Wextra -pedantic -Werror)
endif()