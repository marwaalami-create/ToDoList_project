cmake_minimum_required(VERSION 3.20)
project(ToDoList_Project)
set(CMAKE_CXX_STANDARD 17)
add_executable(ToDoList_Project
main.cpp
src/task.cpp
src/task.h
src/todo_list.cpp
src/todo_list.h)
include(FetchContent)
FetchContent_Declare(
googletest
URL https://github.com/google/googletest/archive/refs/heads/main.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
enable_testing()
add_executable(run_tests
test/task_test.cpp
src/task.cpp
        test/task_test.cpp
)
target_link_libraries(run_tests GTest::gtest_main)
include(GoogleTest)
gtest_discover_tests(run_tests)