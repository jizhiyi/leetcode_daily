enable_testing()

add_executable(
    verify_preorder_serialization_of_a_binary_tree_test 
    verify_preorder_serialization_of_a_binary_tree_test.cpp
    verify_preorder_serialization_of_a_binary_tree.hpp
)

target_link_libraries(
    verify_preorder_serialization_of_a_binary_tree_test 
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(verify_preorder_serialization_of_a_binary_tree_test)