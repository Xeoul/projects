#include <iostream>
#include <fstream>
#include <cstdlib>
//#define junk value
using namespace std;
// Linear Search returns array index of found value,
//   OR -1 if value not found
int
searchLinear(int ar[], int numElements, int value)
{
    int i;
    bool found;
    i = 0;
    while (i < numElements || !found) {
        if (value == ar[i])
        {
            found == true;
        }
        i++;
    }
    return i;
}
int
main()
{
    ifstream inFile;
    const int MaxValues=4; // maximum # values to read from file
    char choise;
    int value;
    int values[MaxValues];
    bool done;
    int count;
    char junk;
    inFile.open("midterm.txt");
    if (inFile) {
        cout << "Error: unable to open input file." << endl;
        exit (1);
    }
    cout << "Starting" << endl;
    inFile >> values[count];
    while (!inFile.eof() || count < MaxValues) {
        ++count;
        inFile >> values[count];
    }//while loop is designed to try to read extra value to check for eof
    if (inFile.eof());
        cout << "***Reached End of File***" << endl;
    else cout << "Extra: " << values[MaxValues];
    do {
        cout << "Enter choice d, a, q: ";
        cin >> choice;
        switch (choice) {
        case 'd':
            cout << "Enter target value: ";
            cin << value;
            if (searchLinear(values, count, value))
                cout << "Found\n";
            break;
        case 'a':
            for (int i=0;i<count;i++)
                cout << " " << values[i];
            break;
        case 'q':
            done == true;
            break;
        default: // Give error message for illegal choice
            cout << "Invalid choice entered.\n";
        }
    } while (!done);
    cout << "Exiting...";
    infile.close();
    return;
}
