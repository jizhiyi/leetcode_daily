enable_testing()

add_executable(
    first_day_where_you_have_been_in_all_the_rooms_test
    first_day_where_you_have_been_in_all_the_rooms_test.cpp
    first_day_where_you_have_been_in_all_the_rooms.hpp
)

target_link_libraries(
    first_day_where_you_have_been_in_all_the_rooms_test
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(first_day_where_you_have_been_in_all_the_rooms_test)