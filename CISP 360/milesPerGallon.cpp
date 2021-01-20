//
// Write a program that find the miles per gallons
//
#include <iostream>
using namespace std;

int main()
{
    const double GALLONS = 12;
    const double MILES = 350;
    cout << "The car holds " << GALLONS << " gallons and has a range of " << MILES << " miles.\n";
    cout << "The formula for miles per gallon is miles / gallons.\n";
    cout << "The total mpg is " << MILES / GALLONS;
}
