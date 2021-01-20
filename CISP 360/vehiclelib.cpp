#include <iostream>
#include <cstring>
#include "vehicle.h"
using namespace std;
bool validateVehicle(const vehicleData &data)
{
    bool flag;
    if ((data.cylinders < 1 )|| (data.cylinders > 12))
    {
        flag = false;
    }
    else if ((data.engine < 0.0 )|| (data.engine > 20.0))
    {
        flag = false;
    }
    else if ((data.cost < 0.0 )|| (data.cost > 250000.0))
    {
        flag = false;
    }
    else
    {
        flag = true;
    }
    return flag;
}

void displayVehicle(const vehicleData &data)
{
    cout << "Model - " << data.model << endl;
    cout << "Manufacturer - " << data.manufacturer << endl;
    cout << "Cylinders - " << data.cylinders << endl;
    cout << "Engine - " << data.engine << endl;
    cout << "Cost - " << data.cost << endl;
}
