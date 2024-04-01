enable_testing()

add_executable(
    faulty_keyboard_test
    faulty_keyboard_test.cpp
    faulty_keyboard.hpp
)
target_link_libraries(
    faulty_keyboard_test
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(faulty_keyboard_test)