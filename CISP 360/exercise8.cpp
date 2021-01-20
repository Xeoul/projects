// Stub program file to be used with the Archeology exercise
// Common symbolic constants to be used with some functions
#include <iostream>
static const int MaxRows = 20, MaxCols = 20;
static const int OBJ_FOUND = 0x0010;
static const int OBJ_NOT_FOUND = 0x0020;
static const int OBJ_HINT = 0x0040;
static const int OBJ_HORIZ = 0x0080;
static const int OBJ_VERT = 0x00100;
static const int OBJ_TWO_REMAIN = 0x00200;
static const int OBJ_COUNT = 0x00400;

// Exercise function prototypes
bool probeSandBoxZero(int col);
bool probeSandBoxOne(int row, int column);
bool probeSandBoxTwo(char row, int column);
int probeSandBoxThree(char row, int column);
int probeSandBoxFour(char row, int column);
int probeSandBoxFive(char row, int column);
using namespace std;
void
findTheShovel(const int SandBoxRows, const int SandBoxColumns)
{
    //define your variables here
    int row = 0;
    int col = 0;
    bool found = false;
    //Add your solution to part 0 here
    while (!probeSandBoxZero(col))
        col += 4;
    //Add your solution to part 1 here
    found = false;
    for (row = 0; row < 10 && !found; row++) {
        for (col = 0; col < 15 && !found; col++) {
            if (probeSandBoxOne(row, col))
                found = true;
        }
    }
    //Add your solution to part 2 here
    found = false;
        for(int i = 0; i < SandBoxRows && !found; i++) {
            for(int j = 0; j < SandBoxColumns && !found; j++) {
                found = probeSandBoxTwo('A' + i, j + 1);
            }
        }
    //Add your solution to part 3 here
    int remainingSpots = 1;
    for(int i = 0; i < SandBoxRows && remainingSpots > 0; i++) {
        for(int j = 0; j < SandBoxColumns && remainingSpots > 0; j++) {
            remainingSpots = probeSandBoxThree('A' + i , j +1);
            if(remainingSpots > 899) {
                remainingSpots-=900;
            } else {
                remainingSpots-=100;
            }
        }
    }
    //Add your solution to part 4 here
    int foundBit = OBJ_NOT_FOUND;
    bool flag = false;
    int remainder = 10;

    for(int i = 0; i < SandBoxRows && foundBit != OBJ_FOUND && remainder != 0; i++) {
        for(int j = 0; j < SandBoxColumns && foundBit != OBJ_FOUND && remainder != 0; j++) {
            foundBit = probeSandBoxFour('A' + i, j + 1);
            if (!(foundBit & OBJ_NOT_FOUND)) {
                if (foundBit & OBJ_TWO_REMAIN )  {
                    flag = true;
                    remainder = 2;
                } else if (flag == true && (OBJ_FOUND & foundBit)) {
                    remainder = remainder - 1;
                }
            }
        }
    }
    //Add your solution to part 5 here

}
