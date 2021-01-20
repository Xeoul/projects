#include <iostream>
#include <cstring>
#include <iomanip>
#include "pharmacy.h"
using namespace std;

prescriptionInfo::prescriptionInfo()
{

}
void prescriptionInfo::setPatientName(char name[])
{
    strcpy(patientName, name);
}
void prescriptionInfo::setInsurance(bool i)
{
    insuranceCovers = i;
}
void prescriptionInfo::setMedicationName(char name[])
{
    strcpy(medicationName, name);
}
void prescriptionInfo::setDrName(char name[])
{
    strcpy(drName, name);
}
void prescriptionInfo::setRefills(int r)
{
    refills = r;
}
void prescriptionInfo::setQuantity(int q)
{
    quantity = q;
}
void prescriptionInfo::setPrice(double p)
{
    price = p;
}
char* prescriptionInfo::getPatientName()
{
    return patientName;
}
bool prescriptionInfo::checkInsurance()
{
    return insuranceCovers;
}
char* prescriptionInfo::getMedicationName()
{
    return medicationName;
}
char* prescriptionInfo::getDrName()
{
    return drName;
}
int prescriptionInfo::getQuantity()
{
    return quantity;
}
int prescriptionInfo::checkRefills()
{
    return refills;
}
double prescriptionInfo::getPrice()
{
    return price;
}
void prescriptionInfo::printLabel()
{
    cout << "\n\nPrescription Information:\n"
         << "\nPatient Name:       " << setw(32) << patientName
         << "\nPrescribing Doctor: " << setw(32) << drName
         << "\nMedication Name:    " << setw(32) << medicationName
         << "\nDoses per bottle:   " << setw(32) << quantity
         << "\nRefills remaining:  " << setw(32) << refills
         << "\nInsurance:          " << setw(32) << (insuranceCovers?"Y":"N")
         << "\nPrice:              " << setw(27) << "$" << price;
}
