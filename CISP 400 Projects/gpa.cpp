// gpa.cpp
// Vincent Lam, CISP 400
// February 21, 2021

#include <iostream>
using namespace std;

// Function Prototypes
void programGreeting();
void menu();

class Grade {
    private:
        int* grades = new int[size];
        int size = 0;
    public:

    void programGreeting()
    {
        cout << "This assignment is due on February 21, 2021.\n";
        cout << "Created by Vincent Lam.\n";
        cout << "\nWelcome to the GPA analyzer.\n";
        cout << "This program will grab your grades\n";
        cout << "And give you the GPA from what you have entered.\n";
    }

    // Specification C1 - Menu Driven Program
    // Menu to control what portion of the program is in use
    void menu()
    {
        bool quit;
        int choice, gradeInput;
        char gradeLetter;
        do {
            quit = true;
            for (int i = 0; i < 69; i++) {
                cout << "=";
            }
            cout << "\nChoices available: 1 to add a grade, 2 to display them, 3 to process.\n";
            cout << "If you want to quit, please type 4.\n";
            for (int i = 0; i < 69; i++) {
                cout << "=";
            }
            cout << "\nEnter choice here: ";
            cin >> choice;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(256, '\n');
                quit = false;
                cout << "Error; Please enter a value from 1 to 4.\n";
            } else if (choice != 1 && choice != 2 && choice != 3 && choice != 4) {
                quit = false;
                cout << "Your number choice is not 1, 2, 3, or 4.\n";
            }
                if (choice == 1) {
                    cout << "Enter your grade here: ";
                    cin >> gradeInput;
                    if (gradeInput >= 90) {
                        cout << "You added A to your grade list\n";
                        gradeLetter = 'A';
                        quit = false;
                    } else if (gradeInput >= 80 && gradeInput < 90) {
                        cout << "You added B to your grade list\n";
                        gradeLetter = 'B';
                        quit = false;
                    } else if (gradeInput >= 70 && gradeInput < 80) {
                        cout << "You added C to your grade list\n";
                        gradeLetter = 'C';
                        quit = false;
                    } else if (gradeInput >= 60 && gradeInput < 70) {
                        cout << "You added D to your grade list\n";
                        gradeLetter = 'D';
                        quit = false;
                    } else if (gradeInput <= 60) {
                        cout << "You added F to your grade list.\n";
                        gradeLetter = 'F';
                        quit = false;
                    }
                }
        } while (!quit);
    }
};

int main()
{
    programGreeting();
    menu();
    return 0;
}