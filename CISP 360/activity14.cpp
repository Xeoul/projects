  #include <iostream>
using namespace std;
const int ROWS = 5;
const int COLS = 6;

//this is just for visual reference
void printArray(int myArray[][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++)
            cout << " " << myArray[i][j];
        cout << endl;
    }
}

int getTotal(int myarray[][COLS], int rows) {
    int row, col;
    int total = 0;
    for (row = 0; row < ROWS; row++)
        for (col = 0; col < COLS; col++)
            total += myarray[row][col];

    return total;
}

int getAverage(int myarray[][COLS], int rows){
    int total = 0;
    int divisor = 0;
    for (int row = 0; row < ROWS; row++)
        for (int col = 0; col < COLS; col++) {
            total += myarray[row][col];
            divisor++;
        }

    return total / divisor;
}

int getRowTotal(int myarray[][COLS], int rownumber) {
    int total = 0;
    for (int col = 0; col < COLS; col++)
        total += myarray[rownumber][col];

    return total;
}

int getColumnTotal(int myarray[][COLS], int colnumber) {;
    int total = 0;
    for (int row = 0; row < ROWS; row++)
        total += myarray[row][colnumber];

    return total;
}

int getHighestInRow(int myarray[][COLS], int rownumber) {
    int highest = myarray[rownumber][0]; //initialize the value to first element of row
    for (int col = 0; col < COLS; col++)
        if (highest < myarray[rownumber][col])
            highest = myarray[rownumber][col];

    return highest;
}

int getLowestInRow(int myarray[][COLS], int rownumber) {
    int lowest = myarray[rownumber][0]; //initialize to first element of row
    for (int col = 0; col < COLS; col++)
        if (lowest > myarray[rownumber][col])
            lowest = myarray[rownumber][col];

    return lowest;
}

int main() {
    int userRowNumber, userColNumber;
    int myArray[ROWS][COLS] = {
        {23, 45, 56, 34, 23, 56},
        {32, 56, 23, 54, 98, 23},
        {12, 65, 92, 89, 23, 23},
        {34, 56, 89, 34, 23, 56},
        {67, 34, 87, 98, 56, 99} };

    printArray(myArray);
    //the program does not have user validation for input values
    cout << "\nEnter a row number to check (0-4): ";
    cin >> userRowNumber;
    cout << "Enter a column number to check (0-5): ";
    cin >> userColNumber;
    //outputs for functions
    cout << "\ngetTotal result is: " << getTotal(myArray, ROWS);
    cout << "\ngetAverage result is: " << getAverage(myArray, ROWS);
    cout << "\ngetRowTotal result is: " << getRowTotal(myArray,userRowNumber);
    cout << "\ngetColumnTotal result for column " << userColNumber << " is: " << getColumnTotal(myArray,userColNumber);
    cout << "\ngetHighestInRow result for row " << userRowNumber << " is: " << getHighestInRow(myArray,userRowNumber);
    cout << "\ngetLowestInRow result for row " << userRowNumber << " is: " << getLowestInRow(myArray,userRowNumber) << endl;
}
