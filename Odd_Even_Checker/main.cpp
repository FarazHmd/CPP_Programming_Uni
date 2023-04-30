#include <iostream>
#include <ctime>
using namespace std;

bool isEven(int n)
{
    return (n % 2 == 0);
}

int main() {

    /*print date and time */

/****************************************************************/
    time_t now = time(0);
    srand(time(0));
    char* dt = ctime(&now);
    cout << dt <<"("<<rand()<<")"<<"\n\n";
/****************************************************************/
    int ch, T = 0;
    int num=0;


    do {
        cout << "Start The program : '1'\a\n";
        cout << "Exit: '2'\a\n";
        cin >> ch;
        switch (ch) {
            case 1:

                cout << "Enter a Number plz \a\t" << endl;
                cout << ">>";
                cin >> num;
                if (isEven(num) == true) {
                    cout << "Number \t [" << num << "]\tis EVEN!" << endl;
                } else {
                    cout << "Number \t[ " << num << "]\tis Odd!" << endl;
                }


            case 2:

                T+=1;

            default:
                cout << "\nINVALID INPUT\a\a\a\a\n";

        }
    }while  (T==1);


    return 0;
}
