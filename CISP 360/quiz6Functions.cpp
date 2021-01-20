#include <iostream>
using namespace std;

void getRejectedSupplyItemId(int& wrong)
{
    char charVal;
    bool quitting;
    quitting = false;
    do{
        int input;
        cout << "Enter the ID numbers listed on the packages (enter q to quit): ";
        cin >> input;
        if (cin.fail()) {
            cin.clear();
            cin >> charVal;
            if (charVal == 'q')
                quitting = true;
            else
                cout << "You entered an illegal character: (" << charVal << ")" << endl;
        } else {
            if (input >= 100 && input <= 999) {
                cout << "Looks good to me!\n";
                quitting = true;
            } else {
                cout << "Re-enter number values within 100 and 999 below.\n";
                wrong++;
            }
        }
    } while (!quitting);
    cout << "Exiting; With this many errors: " << wrong;
}

int main()
{
    int wrong = 0;
    getRejectedSupplyItemId(wrong);
}

