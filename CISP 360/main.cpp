#include <iostream>
#include "pharmacy.h"
using namespace std;


int main() {
  prescriptionInfo patient1, patient2;
  patient1.setPatientName("Joe Smith");
  patient1.setInsurance(true);
  patient1.setMedicationName("Tylenol 100mg");
  patient1.setDrName("Dr. CPlusplus");
  patient1.setQuantity(30);
  patient1.setRefills(1);
  patient1.setPrice(9.99);
  patient1.printLabel();

  patient2.setPatientName("Dan Jones");
  patient2.setInsurance(false);
  patient2.setMedicationName("Miralax 50mg");
  patient2.setDrName("Dr. Java");
  patient2.setQuantity(7);
  patient2.setRefills(0);
  patient2.setPrice(99.99); //what a steal
  patient2.printLabel();
// I'm maybe employing some satire here lol
// note that both medications are available over the counter too

  return 0;
}
