#include <iostream>
#include <string>
#include "src/todo_list.h"
int main() {
    todo_list myList;
    int choice;
    std::string description;
    do {
        std::cout << "\n--- TO-DO LIST ---\n";
        std::cout << "1. Aggiungi task\n";
        std::cout << "2. Mostra tutti i task\n";
        std::cout << "0. Esci\n";
        std::cout << "Scelta: ";
        std::cin >> choice;
        std::cin.ignore();
        if (choice == 1) {
            std::cout << "Inserisci descrizione: ";
            std::getline(std::cin, description);
            myList.addTask(description);
        } else if (choice == 2) {
            auto tasks = myList.getTasks();
            for (int i = 0; i < tasks.size(); i++) {
                std::cout << i << ". " << tasks[i].getDescription() << std::endl;
            }
        }
    } while (choice != 0);
    return 0;
}