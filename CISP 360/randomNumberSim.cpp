#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    bool quitting, value;
    int range, range2, answer;
    quitting = false;
    srand(time(NULL));
    do {
        range = rand() % 12 + 1;
        range2 = rand() % 12 + 1;
        do {
        cout << "How much is " << range << " times " << range2 << "? ";
        int value;
        cin >> value;
        if (value == -1) {
            quitting = true;
        } else {
            answer = range * range2;
            if (value == answer) {
                cout << "Very good!";
                quitting = true;
            } else {
                cout << "No. Please try again.\n";
                }
            }
        } while (value != answer && quitting == false);
    } while (value == true);
}
