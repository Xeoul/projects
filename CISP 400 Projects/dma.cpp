// dma.cpp
// Vincent Lam

// Note: Issues error on runtime (may require multiple instances to run)
//       Although it does seem to work once you get it to run
//
// Current Errors: bad array new length (resulting in core dumped)
//                 via terminal execution ending basically

// Function Prototypes
void metals();
void welcome();

// Default Libraries needed
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Class and constructors
class chemicals
{
    // Making this private in order to properly secure
    private:
        int *gold= new int[size], *silver= new int[size], *bronze= new int[size];
        int size = 0;
    public:
        // Functions made in order to change values and grab input
        void getChemicals()
        {
            for(int i = 0; i < 3; i++) {
                cout << "\nHow much gold, silver, or bronze coins do you have?\n";
                cout << "Enter here: ";
                while(!(cin >> gold[i] >> silver[i] >> bronze[i])) {
                    cout << "Error; A number must be entered: ";
                    cin.clear();
                    cin.ignore(123, '\n');
                }
                size = size + 1;
                if(size == 1) {
                    cout << "Input for Coin A has been entered.\n";
                }
                if(size == 2) {
                    cout << "Input for Coin B has been entered.\n";
                }
                if(size == 3) {
                    cout << "Input for Coin C has been entered.\n";
                }
            }
        }

        // Calculating the resulting formula given
        void calculation()
        {
            for (int i = 0; i < 3; i++) {
                gold[i] = gold[i] * 128;
                silver[i] = silver[i] * 128;
                bronze[i] = bronze[i] * 128;
            }
            cout << endl;

            cout << "Converted value for gold is: ";
            for(int outG = 0; outG < 3; outG++) {
                cout << gold[outG] << " fl oz." << setw(4);
            }
            cout << endl;
            cout << "Converted value for silver is: ";
            for (int outS = 0; outS < 3; outS++){
                cout << silver[outS] << " fl oz." << setw(4);
            }
            cout << endl;
            cout << "Converted value for bronze is: ";
            for (int outB = 0; outB < 3; outB++) {
                cout << bronze[outB] << " fl oz." << setw(4);
            }
            cout << endl;
        }

        // Storage of which coin associated to Chemical
        void storage()
        {
            cout << "\nCoin " << setw(4) << "A" << setw(4) << "B" << setw(4) << "C" << '\n';
            cout << "Gold " << setw(4);
            for (int i = 0; i < 3; i++) {
                cout << gold[i] << setw(4);
            }
            cout << endl;
            cout << "Silver " << setw(2);
            for (int j = 0; j < 3; j++) {
                cout << silver[j] << setw(4);
            }
            cout << endl;
            cout << "Bronze " << setw(2);
            for (int k = 0; k < 3; k++) {
                cout <<  bronze[k] << setw(4);
            }
            cout << '\n'; // for tidyness inside of terminal output
        }

        // Total cleaning solution
        void solution()
        {
            int A = gold[0] + silver[0] + bronze[0];
            int B = gold[1] + silver[1] + bronze[1];
            int C = gold[2] + silver[2] + bronze[2];
            int total = (pow(A + B, 2) + C);
            cout << "The total amount of cleaning solution you would need is: " << total << " fl oz." << '\n';
        }
};

// Welcome message to provide user information via terminal
void welcome()
{
    cout << "Welcome to Daystrom Museum of Antiquities.\n";
    cout << "We send out explorers to collect chemicals for us.\n";
    cout << "In doing so, you're inputting the data for which\n";
    cout << "chemical they brought.\n";
}

// The guts of the program
int main()
{
    chemicals obj;
    welcome();
    obj.getChemicals();
    obj.storage();
    obj.calculation();
    obj.solution();
    return 0;
}