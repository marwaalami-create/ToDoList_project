#include "gtest/gtest.h"
#include "../src/task.h"
#include "../src/todo_list.h"
TEST(TaskTest, Constructor) {
    task t("Fare la spesa");
    EXPECT_EQ(t.getDescription(), "Fare la spesa");
    EXPECT_FALSE(t.isCompleted());
}
TEST(TaskTest, CompleteTask) {
    task t("Esercizio");
    t.setCompleted(true);
    EXPECT_TRUE(t.isCompleted());
}
TEST(TodoListTest, AddAndRetrieveTasks) {
    todo_list list;
    list.addTask("Comprare latte");
    list.addTask("Studiare C++");
    auto tasks = list.getTasks();
    EXPECT_EQ(tasks.size(), 2);
    EXPECT_EQ(tasks[0].getDescription(), "Comprare latte");
}