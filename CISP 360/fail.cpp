/*Group 1
Vincent Lam
Cody Chacon
Keegan Rhoads
*/
#include <iostream>
using namespace std;

int main(){
    char charValue;
    int value;
    int status = 0; //0 = success, 1 = failure

    cout << "Enter integer to test: ";
    cin >> value;

    if(cin.fail()){
        cin.clear();
        cin >> charValue; //returns first character

        cout << "Oops, you entered: " << charValue << endl;
        status = 1;  //program fails, status changed to 1
    } else {
        switch (value) {
        case 1:
            cout << "good";
            break;
        case 2:
            cout << "better";
            break;
        case 3:
            cout << "best";
            break;
        default:
            cout << "value out of range";
            break;
            //status doesn't change, program succeeds
        }
    }
    return status;
}
