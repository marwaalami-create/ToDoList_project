#ifndef TASK_H
#define TASK_H
#include <string>
class task {
public:
    explicit task(std::string description);
    std::string getDescription() const;
    bool isCompleted() const;
    void setCompleted(bool completed);
private:
    std::string description;
    bool completed;
};
#endif //TASK_H