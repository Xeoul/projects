#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    // declared variables needed
    int max = 5;
    srand(time(NULL));
    int user[5];
    int lottery[5];
    int matches;

    // ask for user input and prompt
    for(int x = 0; x < max; x++) {
        cout << "Enter a number in range of 1 to 9\n";
        cout << "following with the enter key: ";
        cin >> user[x];
        cout << '\n';
    }

    // print out the lottery numbers
    cout << "lottery: ";
    for(int i = 0; i<max; i++){
        lottery[i] = (rand()% 10);
        cout << lottery[i] << " ";
    }

    // following with user inputs
    cout << '\n';
    cout << "   user: ";
    for(int i = 0; i<max; i++){
        cout << user[i] << " ";
    }

    // check for matches
    for (int i = 0; i < max; i++) {
        if (lottery[i] == user[i]) {
            matches++;
        }
        if (matches == 5) {
            cout << "You won the lottery!";
        }
    }
    return 0;
}
