#include <iostream>
#include <iomanip>
using namespace std;
const int MAX = 101;

void append(char first[], char second[])
{
    int length, length2;
    length = 0;
    while (first[length] != '\0')
        length++;
    length2 = 0;
    while (second[length2] != '\0')
        length2++;
    for (int i = 0; i < length2; i++) {
        first[i + length] = second[i];
    }
    first[length + length2] = '\0';
}

int main()
{
    char first[MAX] = "some";
    char second[MAX] = "body";
    append(first, second);
    cout << first;
}
