// Tamrin_24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>


#define SIZE 6

using namespace std;




int main()
{
    //*show time
    time_t now = time(0);
    srand(time(0));
    char* dt = ctime(&now);
    cout << dt << "(" << rand() << ")" << "\n\n";
    //
    int x=2, y=3;


    cout << "\nX-";
    for (int i = 0; i < SIZE; i++)
    {
     
        cout << "\t(X" << "^" << x++<< ")\t/" << y;
     
        cout << "    +   ";
       
        y += 2;

    }



        return 0;
    }

   


