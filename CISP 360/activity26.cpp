#include <iostream>
#include <iomanip>
#include <cstring>
#include "activity26.h"
using namespace std;

int main()
{
    bool finished = false;
    struct vehicleData vehicles[Max_Vehicles];
    int i = 0;

    cout << "This program collects data on vehicles.\n"
        << "when done, enter quit for the model.\n";

    while (i < Max_Vehicles && !finished) {
        cout << "vehicle model: ";
        cin.getline(vehicles[i].model, Max_Model);
        if(strcmp(vehicles[i].model, "quit")== 0)
            finished = true;
        else {
            cout << "vehicle manufacturer: ";
            cin >> setw(Max_Manuf) >> vehicles[i].manufacturer;
            cout << "# cylinders: ";
            cin >> vehicles[i].cylinders;
            cout << "Engine displacement (Liters): ";
            cin >> vehicles[i].engine;
            cout << "Cost: ";
            cin >> vehicles[i].cost;
            cin.ignore(); // ignore the trailing newline character
        }
        i++;
    }
    return 0;
}
