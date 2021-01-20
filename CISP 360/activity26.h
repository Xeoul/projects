#ifndef VEHICLE_H
#define VEHICLE_H
const int Max_Vehicles = 20;
const int Max_Model = 25;
const int Max_Manuf = 16;
struct vehicleData {
    char model[Max_Model];
    char manufacturer[Max_Manuf];
    int cylinders;
    float engine;
    double cost;
};
#endif // VEHICLE_H
