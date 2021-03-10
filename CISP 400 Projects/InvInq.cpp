// InvInq.cpp
// Vincent Lam
// March 14, 2021
//

// Function Prototypes
void ProgramGreeting();

// Included libraries needed
#include <iostream>
#include <chrono>
#include <ctime>
using namespace std;

// Specification B1 - Date class
// handle all date related tasks
class Date {
    private:
        string date;
    public:
        void methodDate()
        {
            auto begin = chrono::system_clock::now();
            auto end = chrono::system_clock::now();

        }
        void setDate(string d) {
            date = d;
        }
        string getDate() {
            return date;
        }
};

class Inventory {
    private:
        // Specification C2 - Dynamic Array
        // resize the array whenever used
        int* id = new int[size];
        int size = 0, num = 0;

    public:
        char choice;
        friend ostream &operator << (ostream &output, Inventory &i);
        friend istream &operator >> (istream &input, Inventory &i);

        // Specification C3 - Resize Array - add to end
        // adding to the dynamic array 
        void addInventory()
        {
            bool quit = true;
            int length;
            do {
                cout << "Enter the item id here: ";
                cin >> num;
                length = to_string(num).length();
                // Specification B4 - Inventory Entry Input Validation
                // ensuring the length is not anymore shorter or longer
                // to be added into the dynamic array
                if (length > 5) {
                    cout << "The id is too long.\n";
                    quit = false;
                } else if (length < 5) {
                    cout << "The length is too short.\n";
                    quit = false;
                } else if (length == 5) {
                    cout << "Item is successfully added.\n";
                    id[size] = num;
                    size += 1;
                    quit = true;
                }
            } while (!quit);
        }

        // Specification C4 - Resize Array - subtract from end
        // removing the last element in the array
        void deleteInv()
        {
            size -= 1;
        }

        // Specification A1 - Edit Inventory
        // using the location of the array to edit directly and
        // change the number for whichever the user wants to change
        void edit()
        {
            bool quit = true;
            int editNum, length;
            cout << "Which item would you like to edit: ";
            cin >> editNum;
            cout << "You chose to edit: " << id[editNum] << endl;
            do {
                cout << "What number would you like to put there: ";
                cin >> num;
                length = to_string(num).length();
                if (length > 5) {
                    cout << "The id is too long.\n";
                    quit = false;
                } else if (length < 5) {
                    cout << "The length is too short.\n";
                    quit = false;
                } else if (length == 5) {
                    cout << "Item is successfully added.\n";
                    id[editNum] = num;
                    quit = true;
                }
            } while (!quit);
        }

        void showInventory()
        {
            cout << "The following items are:\n";
            for (int i = 0; i < size; i++) {
                cout << id[i] << '\n';
            }
            cout << "\nEnd of list.\n";
        }
};

// Specification A3 - Overload operator»
// overloading output
ostream &operator << (ostream &output, Inventory &i)
{
    output << "The letter you entered is " << i.choice << endl;
    return output;
}

// Specification A2 - Overload operator«
// overloading input
istream &operator >> (istream &input, Inventory &i)
{
    input >> i.choice;
    return input;
}

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
    // Specification A4 - UnitTest() method in main()
    // test run to see if everything works
    // after multiple runs, can confirm it does
    //void UnitTest();
    // calls all of the classes but can just call the methods

    Inventory obj;
    Date date;
    // Specification B2 - ComponentTest method in Date
    // method to run class
    date.setDate("This assignment is due on March 14, 2021\n");
    cout << date.getDate();
    Inventory items;
    ProgramGreeting();
    char choice;
    bool quit;
    cout << "\nMain menu: \n";
    cout << "\nA for add inventory.\n";
    cout << "D for deleting the inventory.\n";
    cout << "E for editing the inventory.\n";
    cout << "S for displaying inventory.\n";
    cout << "Q to quit the program.\n";
    // Specification C1 - Alpha Menu
    // control the program via user input
    do {
        quit = true;
        cout << "\nEnter your choice here: ";
        cin >> items;
        cout << items;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(256, '\n');
            quit = false;
            cout << "\nError, please enter the following letter to proceed.";
        } else if (items.choice != 'A' && items.choice != 'D' && items.choice != 'S' && items.choice != 'D' && items.choice != 'Q' && items.choice != 'a' && items.choice != 'd' && items.choice != 'e' && items.choice != 's' && items.choice != 'q') {
            quit = false;
            cout << "\nError; Your choice was not A, D, E, S, Q\n";
        }
        // Specification B3 - Menu Input Validation
        // Checking if the user did not put any garbage input
        if (items.choice == 'A' || items.choice == 'a') {
            cout << "You have chosen to add to inventory.\n";
            obj.addInventory();
            quit = false;
        }
        if (items.choice == 'D' || items.choice == 'd') {
            cout << "You have chosen to delete the last entry.\n";
            obj.deleteInv();
            quit = false;
        }
        if (items.choice == 'E' || items.choice == 'e') {
            obj.edit();
            quit = false;
        }
        
        if (items.choice == 'S' || items.choice == 's') {
            cout << "You have chosen to display the inventory.\n";
            obj.showInventory();
            quit = false;        
        }
        
        if (items.choice == 'Q' || items.choice == 'q') {
            cout << "You have chose to quit the program.\n";
            cout << "Goodbye.\n";
            quit = true;
        }
    } while (!quit);
    return 0;
}