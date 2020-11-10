#include<iostream>
#include<limits>
#include<iomanip>
#include<stdlib.h>
using namespace std;

int main()
{    
    double Area=0;
    double d1, d2;

    cout << " Input the value of d1: ";
    while(!(cin >> d1)|| d1<=0 ){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << " \033[31mIncorrect format!\e[0m\n\n";
        cout << " Input the value of d1: ";
    }

    cout << " Input the value of d2: ";
    while(!(cin >> d2)|| d2<=0 ){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << " \033[31mIncorrect format!\e[0m\n\n";
        cout << " Input the value of d1: "<<d1<<"\n";
        cout << " Input the value of d2: ";
    }

    Area = (1.0/2.0)*d1*d2;
    
    system("cls||clear");
    cout << " Input the value of d1: "<<d1<<"\n";
    cout << " Input the value of d2: "<<d2<<"\n\n";
    cout << " Area = " << setprecision(2) << fixed << Area << "\n";
    return 0;
}
  