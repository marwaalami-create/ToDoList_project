#include "gtest/gtest.h"
#include "../src/task.h"
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
