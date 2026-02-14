#include "todo_list.h"
#include <fstream>
void todo_list::addTask(const std::string& description) {
    tasks.emplace_back(description);
}
void todo_list::removeTask(int index) {
    if (index >= 0 && index < tasks.size()) {
        tasks.erase(tasks.begin() + index);
    }
}
const std::vector<task>& todo_list::getTasks() const {
    return tasks;
}
void todo_list::saveToFile(const std::string& filename) const {
    std::ofstream out(filename);
    for (const auto& t : tasks) {
        out << t.getDescription() << "," << t.isCompleted() << "\n";
    }
}
void todo_list::loadFromFile(const std::string& filename) {
    std::ifstream in(filename);
    std::string desc;
    bool comp;
    tasks.clear();
    while (std::getline(in, desc, ',')) {
        in >> comp;
        in.ignore();
        addTask(desc);
        tasks.back().setCompleted(comp);
    }
}