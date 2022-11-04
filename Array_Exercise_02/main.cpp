#include <iostream>
/*
 * Array Exercise With Sorter
 * Work From Mr_Hmd
 */

#define SIZE_OF_ARR_N 3
#define SIZE_OF_ARR_M 3


using namespace std;
void Func_Fill_In(int[SIZE_OF_ARR_N][SIZE_OF_ARR_M]);
void Func_Print_sort(int m[SIZE_OF_ARR_N][SIZE_OF_ARR_M],int r, int c);
int main() {
    int m[SIZE_OF_ARR_N][SIZE_OF_ARR_M] , r,c;


    cout << "Func Fill Called!!" <<endl;
    Func_Fill_In(m);
     c = sizeof(m[0]) / sizeof(m[0][0]);
     r = sizeof(m) / sizeof(m[0]);

    cout << "Func Sort and Print Called!!" <<endl;
    Func_Print_sort(m,r,c);

    return 0;
}
void Func_Fill_In(int X[SIZE_OF_ARR_N][SIZE_OF_ARR_M]){
    int counter=0;
    for (int i = 0; i <SIZE_OF_ARR_N ; i++) {
        for (int j = 0; j <SIZE_OF_ARR_M ; j++) {
            counter++;
            cout<<"\nEnter Number "<<counter<<">>\n";
            cin >> X[i][j];
        }
    }

}


void Func_Print_sort(int m[SIZE_OF_ARR_N][SIZE_OF_ARR_M],int r, int c){

    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {

            for (int k = 0; k < c - j - 1; k++)
            {
                if (m[i][k] > m[i][k + 1])
                {

                    swap(m[i][k], m[i][k + 1]);
                }
            }
        }
    }


    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << m[i][j] << " \t";
        cout << "\n________________________________________________\n";

    }
}

