// Array দিয়ে To - Do List Task Manager

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string tasks[100];
    int count = 0;
    int choice;

    do
    {
        cout << "\n1. Add Task\n";
        cout << "2. Delete Task\n";
        cout << "3. View Tasks\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            if (count == 100)
            {
                cout << "Task list is full!\n";
            }
            else
            {
                cout << "Enter task: ";
                getline(cin >> ws, tasks[count]);
                count++;
                cout << "Task added successfully!\n";
            }
        }

        else if (choice == 2)
        {
            if (count == 0)
            {
                cout << "No tasks to delete.\n";
            }
            else
            {
                int pos;
                cout << "Enter task number to delete: ";
                cin >> pos;

                if (pos < 1 || pos > count)
                {
                    cout << "Invalid task number!\n";
                }
                else
                {
                    for (int i = pos - 1; i < count - 1; i++)
                    {
                        tasks[i] = tasks[i + 1];
                    }

                    count--;
                    cout << "Task deleted successfully!\n";
                }
            }
        }

        else if (choice == 3)
        {
            if (count == 0)
            {
                cout << "No tasks available.\n";
            }
            else
            {
                cout << "\nYour Tasks:\n";

                for (int i = 0; i < count; i++)
                {
                    cout << i + 1 << ". "
                         << tasks[i] << '\n';
                }
            }
        }

        else if (choice == 4)
        {
            cout << "Exiting Task Manager.\n";
        }

        else
        {
            cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}
