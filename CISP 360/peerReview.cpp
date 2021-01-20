// Activity 26
#include <iostream>
#include <cstring>
#include "peerReview.h"
using namespace std;

int main() {
    carData userInput[MAX_ARRAY_SIZE];
    bool done = false;
    int index = 0;

    do {
        cout << "Please enter the model of the vehichle, or type 'quit' to end: " << endl;
        cin.getline(userInput[index].model, MAX_MODEL_SIZE);
        if (strcmp(userInput[index].model, "quit") == 0) {
            done = true;
        }
        else {
            cout << "Please enter the manufacturer: " << endl;
            cin >> userInput[index].manu;

            cout << "Please enter the number of cylinders: " << endl;
            cin >> userInput[index].cylinders;

            cout << "Please enter the engine number: " << endl;
            cin >> userInput[index].engine;

            cout << "Please enter the cost of the vehicle: " << endl;
            cin >> userInput[index].cost;
            cin.ignore(); // skip over newline character so that getline works at the top of the loop

            index++;
        }
        if (index >= MAX_ARRAY_SIZE - 1) {
            done = true;
        }
    } while(!done);

    if (index > 1) { // only display data if there is data to display
        cout << endl << "The data you entered was: " << endl << endl;

        for (int i = 0; i < index; i++) {
            cout << "Car number " << i + 1 << ": " << endl;
            cout << "Model: " << userInput[i].model << endl;
            cout << "Manufacturer: " << userInput[i].manu << endl;
            cout << "Cylinders: " << userInput[i].cylinders << endl;
            cout << "Engine: " << userInput[i].engine << endl;
            cout << "Cost: " << userInput[i].cost << endl << endl;
        }
    }
    else {
        cout << "You did not enter any vehicle data." << endl;
    }

    return 0;
}
