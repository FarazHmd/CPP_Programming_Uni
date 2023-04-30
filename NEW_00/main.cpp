#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;
struct names {
    string naem;
    string lastname;
    int age;
};
int main() {
    /*print date and time */

/****************************************************************/
time_t now = time(0);
srand(time(0));
char* dt = ctime(&now);
cout << dt <<"("<<rand()<<")"<<"\n\n";
/****************************************************************/
   names t1,t2;
   cout << "enter firstname 1" << endl;
   cin>>t1.naem;

    cout << "enter lastname 1" << endl;
    cin>>t1.lastname;
    cout << "enter age 1" << endl;
    cin>>t1.age;

    cout << "enter firstname 2" << endl;
    cin>>t2.naem;
    cout << "enter lastname 2" << endl;
    cin>>t2.lastname;

    cout << "enter age 2" << endl;
    cin>>t2.age;

    cout<<"\n______________________<<<__LIST__>>>_________________________________\n";
    cout<<"\t<NAME>\t<LASTNAME>\t<AGE>\n";
    cout<<"\t"<<t1.naem<<"\t"<<t1.lastname<<"\t\t"<<t1.age<<endl;
    cout<<"\t"<<t2.naem<<"\t"<<t2.lastname<<"\t"<<t2.age;
    cout<<"\n_____________________________________________________________________\n";


    return 0;
}
