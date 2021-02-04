// gpa.cpp
// Vincent Lam, CISP 400
// February 21, 2021

// Function Prototypes
void programGreeting();
void menu();

#include <iostream>
using namespace std;
int main()
{
    programGreeting();
    menu();
    return 0;
}

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
    int choice;
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
            cout << "Error; Please enter a value from 1 to 3.\n";
        } else if (choice != 1 && choice != 2 && choice != 3 && choice != 4) {
            quit = false;
            cout << "Your number choice is not 1, 2, or 3.\n";
        }
    } while (!quit);
}


// Specification C2 - Print Scores
// Display the grades on the screen with all the scores on console
