enable_testing()

add_executable(
    all_possible_full_binary_trees
    all_possible_full_binary_trees_test.cpp
    all_possible_full_binary_trees.hpp
)

target_link_libraries(
    all_possible_full_binary_trees
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(all_possible_full_binary_trees)