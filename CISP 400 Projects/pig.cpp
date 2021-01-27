// pig.cpp
// Vincent Lam, CISP 400
// 1/20/21

// Function prototypes
void programGreeting();
void menu(int randomNum);

#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    programGreeting();

    // Specification C1
    srand(time(NULL));
    int randomNum = rand() % 6 + 1;

    // Specification C2
    string name;
    cout << "\nEnter your first and last name here: ";
    getline(cin, name);
    cout << "The name you entered is: " << name << '\n';

    //Specification C3
    menu(randomNum);


    return 0;
}

void programGreeting()
{

    cout << "Welcome to the pig program\n";
    cout << "Rules: \n";
    cout << "Players will take turn rolling a dice\n";
    cout << "You can get pts for each turn you roll (turn points)\n";
    cout << "Also have grand points (thru the game)\n";
    cout << "The person with 100 grand points wins\n";
    cout << "Each turn a person can roll or hold\n";
    cout << "If you roll: 1 = you lose your turn and no points\n";
    cout << "2 - 6 = # rolled with be added to turn total\n";
    cout << "Holding it will add turn total to grand total & moves to next player\n";
}

void menu(int randomNum)
{
    int choice, total = 0, grandTotal = 0;
    cout << "Choices available: 1 to roll, 2 to hold, 3 to quit.\n";
    cout << "\nEnter choice here: ";
    cin >> choice;
    if (choice == 1) {
        // roll
        cout << "You rolled: " << randomNum << '\n';
        if (randomNum > 1) {
            total += randomNum;
            cout << "Your total is " << total << '\n';            
        }   else if (randomNum == 1) {
            total += 0;
            cout << "You rolled too low and your turn is passed.\n";
            cout << "Your total is " << total << '\n'; 
        }
    } else if (choice == 2) {
        // hold
        grandTotal = total;
        cout << "Your grand total is " << grandTotal << '\n';
    } else {
        // quit
        cout << "Thank you for playing the game.\nGoodbye.\n";
    }
}