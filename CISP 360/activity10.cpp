#include <iostream>
using namespace std;

const int MAX_WIDTH = 40;
const int MAX_HEIGHT = MAX_WIDTH / 2;

void getWidth(int &width)
{
    bool quit;
    int input;
    do {
        quit = true;
        cout << "Enter the width here: ";
        cin >> input;
        if(cin.fail()) {
            cin.clear();
            cin.ignore(256, '\n');
            quit = false;
            cout << "Error; Enter a valid integer." << endl;
        } else if(input < 1 || input > MAX_WIDTH) {
            quit = false;
            cout << "Error; Enter a value in range of 1 to " << MAX_WIDTH << endl;
        }
    } while(!quit);
    width = input;
}
void checkerboard(int width)
{
    for(int row = 0; row < MAX_HEIGHT; row++) {
        for(int column = 0; column < MAX_WIDTH; column++) {
            if((row / width) % 2) {
                if ((column / width) % 2) {
                    cout << ".";
                } else {
                    cout << "*";
                }
            } else {
                if((column / width) % 2){
                    cout << ".";
                } else {
                    cout << "*";
                }
            }

        }
        cout << endl;
    }
}

int main()
{
    int width;
    getWidth(width);
    checkerboard(width);
}
