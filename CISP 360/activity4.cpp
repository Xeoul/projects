#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double maxRPM, minSpeed, fifthRoot;
    cout << "Enter the max RPM with the minimum speed.\n";
    cin >> maxRPM >> minSpeed;
    fifthRoot = pow(maxRPM / minSpeed, 1.0/5);
    cout << "The max RPM is " << maxRPM << " and the minimum speed is " << minSpeed << endl;
    cout << "The equation is equal to " << fifthRoot;
    return 0;

}
