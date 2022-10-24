#include <iostream>
using namespace std;
int rec_calc(int x ,int y);
/*
 * calculation of 2 number using Sum Recursion ...
 * easier way is using multiply() function but we want have custom function
 */
int main() {

    register int X=1 , Y=1; 
    cout << "_______________________________________________________________\n" ;
    cout <<"\n\aEnter your first number :";
    cin >> X;
    cout <<"\n\aEnter your second number :";
    cin >> Y;
    cout << "\nMultiplication of\t("<<X<<"\t*\t"<< Y<<")\t==\t" << rec_calc(X,Y) <<endl;
    cout << "_______________________________________________________________\n" ;
    return 0;
}
int rec_calc(int x ,int y){                 //rec_calc func using sum operation
    if (x < y)
        return rec_calc(y, x);
    else if (y != 0) {
        cout << "\nFunction call  :\t "<<1+y-1<<endl;
        return (x + rec_calc(x, y - 1));
    }

    else
        return 0;

}
/*
 * Work from MR_HMD
 */