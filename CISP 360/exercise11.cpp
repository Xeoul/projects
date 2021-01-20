#include <iostream>
#include <fstream>
using namespace std;
#define INPUT_FILE "file.txt"

enum statusCodes {FILE_NOT_EXIST, EMPTY_FILE,
                  LESS_THAN_MAX, EXACTLY_MAX, MORE_THAN_MAX,
                  EOF_INC_TRIPLET, INPUT_FAILED, NOT_IN_RANGE,
                  CODE_COUNT
                 };
struct returnCode
{
    bool status[CODE_COUNT];
    int tripletCount;
};

int main()
{
    ifstream file;
    int first, second, third;
    file.open(INPUT_FILE, ios::in);
    bool flag = false;
    if (file.fail()) {
        return FILE_NOT_EXIST;
    } else {
        do {
            file >> first;
            if (file.eof()) {
                flag = true;
            } else {
                if(file.fail()) {
                    flag = true;
                    file.clear();
                    return INPUT_FAILED;
                } else {
                    if(file.eof()) {
                        flag = true;
                        return FILE_NOT_EXIST;
                    } else {

                    }
                }
            }
        }
        while(false);
    }
}

