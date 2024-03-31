enable_testing()

add_executable(
    minimum_number_of_coins_to_be_added_test
    minimum_number_of_coins_to_be_added_test.cpp
    minimum_number_of_coins_to_be_added.hpp
)
target_link_libraries(
    minimum_number_of_coins_to_be_added_test
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(minimum_number_of_coins_to_be_added_test)