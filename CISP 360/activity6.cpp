// Breakout Room 1
// Vincent Lam , Ian Ichwara , Hannah Pheasant
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  float slope, yIntercept, xCord, yCord, x , b;
  bool status;
  cout << "This program verifies that a selected point is on a given line.\n";
  cout << "All input values may be integer or floating-point.\n";
  cout << "Enter slope: ";
  cin >> slope;
  cout << "\nEnter y-intercept: ";
  cin >> yIntercept;
  cout << "\nEnter coordinates of the point: x y ";
  cin >> xCord >> yCord;
  float result , delta;
  float linearEquation = (slope * x) + yIntercept;
  delta = abs(0.02 * linearEquation);
  result = linearEquation;
  if (linearEquation > yCord) {
    status = 1;
    cout << "\nThe point is on the line.\n";
  } else {
    status = 0;
    cout << "\nThe point is NOT on the line.\n";
  }
  return 0;
}
