#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string description;
    bool completed;

    Task(string desc) {
        description = desc;
        completed = false;
    }
};

class ToDoList {
private:
    vector<Task> tasks;

public:
    void addTask(const string& taskDesc) {
        tasks.push_back(Task(taskDesc));
        cout << "Task added successfully!\n";
    }

    void viewTasks() {
        if (tasks.empty()) {
            cout << "No tasks in the list.\n";
            return;
        }

        cout << "\n--- To-Do List ---\n";
        for (int i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". " << tasks[i].description;
            cout << " [" << (tasks[i].completed ? "Completed" : "Pending") << "]\n";
        }
    }

    void markCompleted(int index) {
        if (index >= 1 && index <= tasks.size()) {
            tasks[index - 1].completed = true;
            cout << "Task marked as completed.\n";
        } else {
            cout << "Invalid task number!\n";
        }
    }

    void removeTask(int index) {
        if (index >= 1 && index <= tasks.size()) {
            tasks.erase(tasks.begin() + index - 1);
            cout << "Task removed successfully.\n";
        } else {
            cout << "Invalid task number!\n";
        }
    }
};

int main() {
    ToDoList todo;
    int option;
    string taskDesc;
    int taskNum;

    do {
        cout << "\n=== To-Do List Menu ===\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();  // clear newline

        switch (option) {
            case 1:
                cout << "Enter task description: ";
                getline(cin, taskDesc);
                todo.addTask(taskDesc);
                break;
            case 2:
                todo.viewTasks();
                break;
            case 3:
                cout << "Enter task number to mark completed: ";
                cin >> taskNum;
                todo.markCompleted(taskNum);
                break;
            case 4:
                cout << "Enter task number to remove: ";
                cin >> taskNum;
                todo.removeTask(taskNum);
                break;
            case 0:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }

    } while (option != 0);

    return 0;
}
