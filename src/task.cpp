#include "task.h"
#include <utility>
task::task(std::string description) : description(std::move(description)), completed(false) {}
std::string task::getDescription() const {
    return description;
}
bool task::isCompleted() const {
    return completed;
}
void task::setCompleted(bool completed) {
    this->completed = completed;
}
