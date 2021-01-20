#ifndef PHARMACY_H
#define PHARMACY_H

class prescriptionInfo {
    char patientName[31];
    bool insuranceCovers;
    char medicationName[16];
    char drName[31];
    int quantity; // doses per refill
    int refills;
    double price;
  public:
    prescriptionInfo();
    void setPatientName(char name[]);
    void setInsurance(bool i);
    void setMedicationName(char name[]);
    void setDrName(char name[]);
    void setRefills(int r);
    void setQuantity(int q);
    void setPrice(double p);
    char* getPatientName();
    bool checkInsurance();
    char* getMedicationName();
    char* getDrName();
    int getQuantity();
    int checkRefills();
    double getPrice();
    void printLabel();
};
#endif
