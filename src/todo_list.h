#ifndef TODO_LIST_H
#define TODO_LIST_H
#include <vector>
#include "task.h"
class todo_list {
public:
    void addTask(const std::string& description);
    void removeTask(int index);
    const std::vector<task>& getTasks() const;
    void saveToFile(const std::string& filename) const;
    void loadFromFile(const std::string& filename);
private:
    std::vector<task> tasks;
};
#endif //TODO_LIST_H
