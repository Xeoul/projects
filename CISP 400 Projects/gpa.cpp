// gpa.cpp
// Vincent Lam, CISP 400
// February 21, 2021

#include <iostream>
using namespace std;

// Function Prototypes
void programGreeting();
void menu();

// Specification A1 - Date class
// all of the code inserted here (not sure what this class's purpose is)
class Date {
    // some code here
};

class Grade {
    private:
        // Specification B1 - Dynamic Array
        // Array storing the student's scores into it
        int* dArrayNum = new int[size];
        char* dArrayLet = new char[size];
        char letter;
        int size = 0, gradeInput;
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
                dArrayLet[size] = letter;
                dArrayNum[size] = gradeInput;
                size += 1;
            } else if (gradeInput >= 80 && gradeInput < 90) {
                cout << "You added B to your grade list\n";
                letter = 'B';
                dArrayLet[size] = letter;
                dArrayNum[size] = gradeInput;
                size += 1;
            } else if (gradeInput >= 70 && gradeInput < 80) {
                cout << "You added C to your grade list\n";
                letter = 'C';
                dArrayLet[size] = letter;
                dArrayNum[size] = gradeInput;
                size += 1;
            } else if (gradeInput >= 60 && gradeInput < 70) {
                cout << "You added D to your grade list\n";
                letter = 'D';
                dArrayLet[size] = letter;
                dArrayNum[size] = gradeInput;
                size += 1;
            } else if (gradeInput <= 60) {
                cout << "You added F to your grade list.\n";
                letter = 'F';
                dArrayLet[size] = letter;
                dArrayNum[size] = gradeInput;
                size += 1;
            }
        }

        // Specification C2 - Print Scores
        // After running grade input, 
        // all of the scores will be displayed onto the output
        // Specification C3 - Letter Grades
        // Also add the letters in the grade with the score corresponding to it
        void printScoreAndLetters() {
            for (int i = 0; i < size; i++) {
                cout << dArrayNum[i] << " - " << dArrayLet[i] << '\n';
            }
        }

        // Specification C4 - Compute GPA
        // Grabs the %'age of the user scores and divides to provide the avg
        void processGrades() {
            int gradeTotal = 0;
            for (int i = 0; i < size; i++) {
                gradeTotal += dArrayNum[i];
            }
            int finalTotal = gradeTotal / size;
            cout << "Your GPA is " << finalTotal << "%" << '\n';
            // Specification B4 - Print Letter Grade
            // Printing the GPA's overall grade once all calculated
            if (finalTotal >= 90) {
                cout << "GPA letter: A\n";
            } else if (finalTotal >= 80 && finalTotal < 90) {
                cout << "GPA letter: B\n";
            } else if (finalTotal >= 70 && finalTotal < 80) {
                cout << "GPA letter: C\n";
            } else if (finalTotal >= 60 && finalTotal < 70) {
                cout << "GPA letter: D\n";
            } else {
                cout << "GPA letter: F\n";
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
                // Add grades
                grades.gradeLetter();
                quit = false;
            }
            if (choice == 2) {
                // Display all grades
                grades.printScoreAndLetters();
                quit = false;
            }
            if (choice == 3) {
                // Process all grades
                grades.processGrades();
            }
            if (choice == 4) {
                // Quit the program
                cout << "You chose to quit the program; Goodbye.\n";
                quit = true;
            }
    } while (!quit);
    return 0;
}