#include <fstream>
#include <cstdlib>
#include <iostream>
const char *inputFile = "sacramentoRain.dat";
using namespace std;
int
main()
{
    double sum = 0.0, low, high;
    int day, month;
    fstream fin;
    fin.open(inputFile, ios::in);
    if (!fin) exit(1);
        fin >> low;
        fin >> day;
        while (!fin.eof()){
            fin >> high;
            fin >> day;
            cout << "Month: " << month << " ";
            cout << "Day: " << day << " ";
            cout << "Low Temp: " << low << " ";
            cout << "High Temp: " << high << " ";
            cout << '\n';
            fin >> low;
            fin >> month;
        }
        fin.close();
        return(0);
}
