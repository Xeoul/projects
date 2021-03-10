// InvInq.cpp
// Vincent Lam
// March 14, 2021
//

// Function Prototypes
void ProgramGreeting();

// Included libraries needed
#include <iostream>
using namespace std;

class Inventory {
    private:
        int* id = new int[size];
        int size = 0;
        char choice;
    public:

    // Specification C1 - Alpha Menu
    // Menu driven by user input and prompt to guide program
    void menu()
    {
        bool quit;
        do {
            int num = 0;
            int idArray[size];
            // Prompt and declaration of variables
            quit = true;
            cout << "\nMain menu: \n";
            cout << "\nA for add inventory.\n";
            cout << "D for deleting the inventory.\n";
            cout << "E for editing the inventory.\n";
            cout << "S for displaying inventory.\n";
            cout << "Q to quit the program.\n";
            cout << "\nEnter your choice here: ";

            // User validation
            cin >> choice;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(256, '\n');
                quit = false;
                cout << "\nError, please enter the following letter to proceed.";
            } else if (choice != 'A' && choice != 'D' && choice != 'S' && choice != 'D' && choice != 'Q' && choice != 'a' && choice != 'd' && choice != 'e' && choice != 's' && choice != 'q') {
                quit = false;
                cout << "\nError; Your choice was not A, D, E, S, Q\n";
            }
            if (choice == 'A' || choice == 'a') {
                cout << "Enter the id number here: ";
                cin >> *id;
                idArray[size] = *id;
                size += 1;
                quit = false;
            }
            
            if (choice == 'S' || choice == 's') {
                cout << "The following items are:\n";
                for (int i = 0; i < size; i++) {
                    cout << id[i] << '\n';
                }
                cout << "\nEnd of list.\n";
                quit = false;
            }
            if (choice == 'Q' || choice == 'q') {
                cout << "You have chose to quit the program.\n";
                cout << "Goodbye.\n";
                quit = true;
            }
        } while (!quit);
    }
};

// Program greeting at the beginning of the output to guide user
void ProgramGreeting()
{
    cout << "Welcome to the Inventory Inquisitor.\n";
    cout << "Here you will enter the id number following with the quanitity,\n";
    cout << "wholesale cost, and retail cost, also including the date.\n";
}

// Main function - guts of the program to run everything
int main()
{
    Inventory obj;
    ProgramGreeting();
    obj.menu();
    return 0;
}