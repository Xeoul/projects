#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main0() {

  //
  char charVal;
  float increment = 1.0;
  float value, value2, gallons, liters;
  bool quitting;
  const float CONVERSION = 3.78541;

  cout << "This program creates a gallons to liters conversion table.\n" << endl;

  quitting = false;
  do {
    do {
    cout << "Enter the lowest gallon value to display (q to quit): ";
    cin >> value;
    cout << '\n';
    if (cin.fail()){
        cin.clear();
        cin >> charVal;
        if (charVal == 'q') {
            quitting = true;
        }
            else
                cout << "\nYou entered an illegal character: (" << charVal << ")\n" << endl;
        } else {
            if (!cin.fail()) {
                cout << "Enter the highest gallon value to display (q to quit): ";
                cin >> value2;
                cout << '\n';
                if (cin.fail()) {
                    cin.clear();
                    cin >> charVal;
                    if (charVal == 'q') {
                        quitting = true;
                        }
                            else
                                cout << "\nYou entered an illegal character: (" << charVal << ")\n" << endl;
                } else {
                    if (!quitting) {
                            if (value > value2) {
                                cout << "Error: high gallon value must be larger than or equal to the low gallon value.\n";
                                cout << "Please re-enter low and high gallon values correctly.\n";
                                cout << '\n';
                            } else if(value < 0){

                            	cout<<"Error : low gallon value must not be negative."<<endl;
                            	cout<<"Please re-enter low and high gallon values correctly.\n"<<endl;

                            }else if(value2 < 0){

                            	cout<<"Error : high gallon value must not be negative"<<endl;
                              cout << "Please re-enter low and high gallon values correctly.\n";
                              cout << '\n';
                            } else {

                            cout << '\n';
                            cout << "The conversion table will be created for the gallon range\n";
                            cout << "of " << setprecision(1) << fixed << value << " to " << value2 << " in increments of " << increment << endl;
                            cout << '\n';
                            cout << setw(5) << "   GALLONS TO LITERS\n";
                            cout << setw(5) << "   CONVERSION TABLE\n";
                            cout << setw(5) << "   Gallons" << setw(10) << "Liters" << endl;
                            cout << setw(5) << "   =======" << setw(10) << "=======" << endl;
                            gallons = value;
                            while (gallons <= value2) {
                                liters = gallons * CONVERSION;
                                cout << setw(9) << right << setprecision(1) << fixed << gallons << setw(11) << setprecision(3) << right << liters << endl;
                                gallons += increment;
                                }
                                quitting = true;
                            }
                        }
                    }
                }
            }
        } while (!quitting);
    } while (value && value2);
    cout << "Aborting; no conversion performed.\n" << endl;
    return(0);
}

