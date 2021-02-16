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
        // Specification B1 - Dynamic Array
        // Array storing the student's scores into it
        int* dArrayNum = new int[size];
        char letter;
        int size = 0, arraySize = 0, gradeInput;
    public:
        void gradeLetter() {
        
        // Specification B2 - Add Elements
        // Starting the array at 0 and increasing the size
        // everytime a grade is entered
        cout << "Enter your grade here: ";
            cin >> gradeInput;
            if (gradeInput >= 90) {
                cout << "You added A to your grade list\n";
                letter = 'A';
                dArrayNum[size] = gradeInput;
                size += 1;
            } else if (gradeInput >= 80 && gradeInput < 90) {
                cout << "You added B to your grade list\n";
                letter = 'B';
                dArrayNum[size] = gradeInput;
                size += 1;
            } else if (gradeInput >= 70 && gradeInput < 80) {
                cout << "You added C to your grade list\n";
                letter = 'C';
                dArrayNum[size] = gradeInput;
                size += 1;
            } else if (gradeInput >= 60 && gradeInput < 70) {
                cout << "You added D to your grade list\n";
                letter = 'D';
                dArrayNum[size] = gradeInput;
                size += 1;
            } else if (gradeInput <= 60) {
                cout << "You added F to your grade list.\n";
                letter = 'F';
                dArrayNum[size] = gradeInput;
                size += 1;
            }
            cout << "Size is " << size << '\n';
        }

        // Specification C2 - Print Scores
        // After running grade input, 
        // all of the scores will be displayed onto the output
        void printScores() {
            for(int i = 0; i < size; i++) {
                cout << dArrayNum[i] << '\n';
            }
        }


};

void programGreeting()
{
    cout << "This assignment is due on February 21, 2021.\n";
    cout << "Created by Vincent Lam.\n";
    cout << "\nWelcome to the GPA analyzer.\n";
    cout << "This program will grab your grades\n";
    cout << "And give you the GPA from what you have entered.\n";
}

int main()
{
    Grade grades; // grades is an 'object'
    programGreeting();
    int choice;
    bool quit = true;
    cout << "\nChoices available: 1 to add a grade, 2 to display them, 3 to process.\n";
    cout << "If you want to quit, please type 4.\n";
    do {
        quit = true;
        cout << "\nEnter choice here: ";
        cin >> choice;
        // Specification B3 - Menu Input Validation
        // Grabs user input to ensure no garbage input
        // and reprompt if necessary
        if (cin.fail()) {
            cin.clear();
            cin.ignore(256, '\n');
            quit = false;
            cout << "Error; Please enter a value from 1 to 4.\n";
        } else if (choice != 1 && choice != 2 && choice != 3 && choice != 4) {
            quit = false;
            cout << "Your number choice is not 1, 2, 3, or 4.\n";
        }
        // Specification C1 - Menu Driven Program
        // Grabs user input to guide the program into which segment is outputed
            if (choice == 1) {
                grades.gradeLetter();
                quit = false;
            }
            if (choice == 2) {
                // print scores
                grades.printScores();
            }
            if (choice == 3) {
                // add letter grades
            }
            if (choice == 4) {
                cout << "You chose to quit the program; Goodbye.\n";
                quit = true;
            }
    } while (!quit);
    return 0;
}