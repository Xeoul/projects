#include <iostream>
#include <iomanip>
using namespace std;
int
main()
{
    bool first;
    int second;
    long third;
    float fourth;
    float fifth;
    double sixth;

    cout << "Enter bool, int, long, float, float, and double values: ";
    cin >> first >> second >> third >> fourth >> fifth >> sixth;
    cout << endl;

// ***** Solution starts here ****
    cout << first << ' ' << boolalpha << first << endl;
    cout << second << ' ' << hex << showbase << second << ' ' << oct << second << endl;
    cout.width(16); cout << dec << right << third << endl;
    cout.width(13); cout << setprecision(4) << showpos  << showpoint << right << internal << fourth << endl;
    cout.width(15); cout << scientific << setprecision(4) << noshowpos << right << fourth << endl;
    cout << setprecision(7) << fifth << endl;
    cout.width(17); cout << fixed << setprecision(3) << fifth << endl;
    cout << third << endl;
    cout.width(16); cout << setprecision(2) << fourth << endl;
    cout.width(13); cout << setprecision(0) << noshowpoint << sixth << endl;
    cout << setprecision(8) << fourth << endl;
    cout.width(16); cout << setprecision(1) << sixth << endl;
    // not too sure if the last 2 were meant to be like that but it does work
    // I am not too sure how you got a space for line 11 for the output
    // and for line 12 to have 1 decimal randomly to 2 decimals
// ***** Solution ends here ****

    cin.get();
    return 0;
}
