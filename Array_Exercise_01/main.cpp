#include <iostream>
/*
 * Simple Array Exersice without sorter
 *Work From Mr_Hmd
 */
using namespace std;
void INPUT_NUM(int x[3][5]);
void OUTPUT_NUM(int x[3][5]);

int main() {
    int x[3][5];
    cout << "__________________________________________________________";
    cout << "\nFunc Fill Input called !!\a" << endl;
    cout << "__________________________________________________________";
    INPUT_NUM(x);
    cout << "__________________________________________________________";
    cout << "\nFunc Print Output called !!\a" << endl;
    cout << "__________________________________________________________";
    OUTPUT_NUM(x);
    cout << "\n__________________________________________________________";
    return 0;
}
void INPUT_NUM(int x[3][5]){


    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            cout<<"\nEnter Number "<<j<<">>\n";
            cin >> x[i][j];
        }
    }
}
void OUTPUT_NUM(int x[3][5]){

    for(int i = 0; i < 3; i++){
        cout<<"\n";
        for(int j = 0; j < 5; j++){
            cout<< x[i][j] <<"\t";
        }
    }

}