#include <iostream>
using namespace std;

void arrayOne(int twod[][10], int rows, int columns)
{
    int r;
    int c;

    for (c = 0; c < rows; c++) {
        for (r = 0; r < columns; r++)
            cout << " " << twod[r][c];
        cout << endl;
    }
}

void arrayTwo(int twod[][10], int rows, int columns)
{
    int r;
    int c;

    for (r = 0; r < rows; r++) {
        for (c = columns - 1; c >= 0; c--)
            cout << " " << twod[r][c];
        cout << endl;
    }
}

void arrayThree(int twod[][10], int rows, int columns)
{
    int r;
    int c;

    for (r =  rows - 1; r >= 0; r--) {
        for (c = 0; c < columns; c++)
            cout << " " << twod[r][c];
        cout << endl;
    }
}

void arrayFour(int twod[][10], int rows, int columns)
{
    int r;
    int c;

    for (c = 0; c < rows; c++) {
        for (r = 0; r < columns; r++)
            cout << " " << twod[r][c];
        cout << endl;
    }
}

int main()
{
    int myArray[][10] = {{8, 0, 3, 6, 3}, {1, 3, 1, 0, 7}, {2, 7, 9, 4, 5}};
    arrayOne(myArray, 5, 3);
    cout << '\n';
    arrayTwo(myArray, 3, 5);
    cout << '\n';
    arrayThree(myArray, 3, 5);
    cout << '\n';
    arrayFour(myArray, 5, 3);
}
