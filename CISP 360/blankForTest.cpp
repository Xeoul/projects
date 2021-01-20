#include <iostream>
using namespace std;
#define INPUT_FILE "results.txt"
struct donut {
    string DONUT_NAME[26];
    string DONUT_TYPE[16];
    int quantity;
    float price;
};

donut donutInfo;
int main()
{
    cout << "Enter donut name here: ";
    cin.getline(donut.DONUT_NAME, 26);
    cout << "\n";
    cout << "Enter donut type here: ";
    cin >> donut.DONUT_TYPE;
    cout << "\n";
    cout << "Enter the quantity here: ";
    cin >> donut.quantity;
    cout << "\n";
    cout << "Enter the price of the donut(s)";
    cin >> donut.price;

    if (donut.price < 0) {
        cout << "invalid value; \nPlease re-enter below";
        cin.clear();
    }

    cout << "You entered: ";
    cout << "Donut : " << donut.DONUT_NAME;
    cout << "Type: " << donut.DONUT_TYPE;
    cout << "Quantity: " << donut.quantity;
    cout << "Price: " << donut.price;
}
