#include <iostream>
#include <iomanip>
using namespace std;
const int LIMIT = 25;

int main()
{
    int sum = 0;
    char input[LIMIT];
    cout << "Enter a series of single digit numbers with no whitespace: ";
    cin >> setw(LIMIT) >> input;
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] >= '0' && input[i] <= '9') {
            int number = input[i] - '0';
            sum += number;
        }
    }
    cout << "The sum of the input is: " << sum;
    return 0;
}
