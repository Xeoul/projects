// pig.cpp
// Vincent Lam, CISP 400
// 1/20/21

// Function prototypes
// For main function to use
void programGreeting();
int d6();
void menu(int randomNum);

#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    programGreeting();

    // Specification C1 - Fixed Seed
    // Fixed seed in order to generate random numbers each time the code is ran
    // Guarantee that there is nothing set or locked in place
    int randomNum = d6();

    // Specification C3 - Numeric Menu
    // User's choice for the menu
    // 1 being to roll the dice and add to the score
    // 2 being to hold for their turn and get no points
    // 3 to quit the whole program
    menu(randomNum);


    return 0;
}


void programGreeting()
{
    // Specification B2 - Display Due Date
    // Listing the due date for this assignment
    cout << "      This assignment is due on Jan 31st, 11:59 pm.\n";
    cout << "~~~~~~~~~~~~Welcome to the pig program~~~~~~~~~~~~~~~~~~\n";
    cout << "  | Rules:\n";
    cout << "  | Players will take turn rolling a dice\n";
    cout << "  | You can get pts for each turn you roll (turn points)\n";
    cout << "  | Also have grand points (thru the game)\n";
    cout << "  | The person with 100 grand points wins\n";
    cout << "  | Each turn a person can roll or hold\n";
    cout << "  | If you roll: 1 = you lose your turn and no points\n";
    cout << "  | 2 - 6 = # rolled with be added to turn total\n";
    cout << "  | Holding it will add turn total to grand total \n  | & moves to next player\n";
}

void menu(int randomNum)
{
    // Specification C2 - Student Name
    // Grabbing user's name for the input
    string name;
    cout << "\nEnter your first and last name here: ";
    getline(cin, name);
    cout << "The name you entered is: " << name << '\n';

    int choice, turn = 0, userTotal = 0, compTotal = 0;
    int user = d6();
    int computer = rand() % 6 + 1;
    bool quit;
    do {
        quit = true;
        for (int i = 0; i < 57; i++) {
            cout << "=";
        }
        cout << "\n | Choices available: 1 to roll, 2 to hold, 3 to quit. |\n";
        for (int i = 0; i < 57; i++) {
            cout << "=";
        }
        cout << "\nEnter choice here: ";
        cin >> choice;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(256, '\n');
            quit = false;
            cout << "Error; Please enter a value from 1 to 3.\n";
        } else if (choice != 1 && choice != 2 && choice != 3) {
            quit = false;
            cout << "Your number choice is not 1, 2, or 3.\n";
        }
        // Specification C4 - BulletProof Menu
        // Checks for choices and applies into the right category
        // Following with number validation if computer or user has earned any points
            if (choice == 1) { // choosing to roll
                // Specification B1 - Display Turn Stats
                // a counter used to count how many turns will go by
                // for both players
                turn += 1;
                cout << "\nTurn: " << turn << '\n';
                user = d6();
                cout << name << " rolled: " << user << '\n';
                computer = rand() % 6 + 1;
                cout << "The computer rolled: " << computer << '\n';
                
                // User score check
                // if user got any points added or not
                if (randomNum > 1) {
                    userTotal += user;
                    cout << "\n" << name << " turn total is " << userTotal;
                    quit = false;
                }   else if (randomNum == 1) {
                    userTotal += 0;
                    cout << "\n" << name <<  " rolled too low and your turn is passed.\n";
                    cout << "Your total is " << userTotal << '\n'; 
                    quit = false;
                }

                // Computer score check
                // check if computer got any points or none
                if (computer > 1) {
                    compTotal += computer;
                    cout << "\nComputer turn total is " << compTotal << '\n';         
                }   else if (computer == 1) {
                    compTotal += 0;
                    cout << "\nComputer rolled too low and turn is passed.\n";
                    cout << "Computer total is " << computer << '\n'; 
                }
            } else if (choice == 2) { // choosing to hold
            // Specification B3 - HiScore on Heap
            // Totaling the scores for both the user and the computer
                cout << "\nYou chose to hold.";
                cout << "\nYour grand total is " << userTotal << '\n';

                // AI with code injection for restrictions being 1-3 hold and 4-6 roll again
                computer = rand() % 6 + 1;
                if (computer > 4) {
                    compTotal += computer;
                    cout << "\nCPU takes an additional " << computer << " points!\n";
                    cout << "Computer grand total is " << compTotal << '\n';
                } else if (computer  <= 3) {
                    compTotal += 0;
                    cout << "CPU gets no additional points.\n";
                }
                quit = false;

            
            } else if (choice == 3) {
                // quit
                quit = true;
                // Specification B4 - Display High Score
                // Game ends with user input on 3 and grabs both
                // user and computers scores to total them in the end
                cout << '\n' << name << " has " << userTotal << " points." << '\n';
                cout << "Computer has " << compTotal << " points "<< '\n';
                cout << "\nThank you for playing the game.\nGoodbye.\n";
            }
            // Check whoever wins
            if (userTotal >= 100) {
                cout << "Congrats " << name << " you won! With this much points: " << userTotal << '\n';
                cout << "Better luck next time computer: " << compTotal << " points." << '\n';
                quit = true;
            } else if (compTotal >= 100) {
                cout << "Congrats Computer you won! With this much points: " << compTotal << '\n';
                cout << "Better luck next time "<< name << ": " << userTotal << " points."  << '\n';
                quit = true;
                }
    } while (!quit);
}

// Specification A1 - D6 Function
// Generates a random number
// With the help of cstdlib
int d6()
{
    int randomNum;
    randomNum = rand() % 6 + 1; 
    return randomNum;
}

// Specification A2 - RandomNumber Function
// generates a number between arguments lo and hi

// int randomNumber()
        // how to use function:
        // call function while passing arguments
        // returning it will provide the user with lo and hi numbers
        // have them take place for the user score as passing by value
        // for each time this function is called for
/*{
    int loTotal = 0, hiTotal = 0;
    // Specification A3 - Protect RandomNumber() input
    // ensures that only numbers can get through
    // no other letters 
    int lo = rand() % 6 + 1;
    int hi = rand() % 6 + 1;
    if (lo > hi) {
        return -1;
    } else if (!(lo < 1 || hi > 100)) {
        return -1;
    }
    return lo, hi; // potentially use them instead of d6 function and pass them as arguments to function
}*/

// Specification A4 - Protect RandomNumber Output
// using the function and making a safety net in case
// of any bad inputs from the arguments
// (shouldn't be the case since conditional statements are in place)

// Example of code written below if randomNumber function is in use.
/*randomNumber();
int num;
cout << "Enter a number here: ";
cin >> num;
while (!(cin >> num)) {
    cout << "Error; A number must be inputted: ";
    cin.clear();
    cin.ignore(132,'\n');
    return -2;
}*/
