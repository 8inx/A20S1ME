#include<iostream>
#include<limits>
#include<iomanip>
#include<stdlib.h>
using namespace std;


int main(){
    
    float gal;
    float L;
    float quarts;

    cout << " Input value in gallons\t\t  : ";
    
    while(!(cin>>gal) || gal<0){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << " \033[31mBad Format!\e[0m\n\n";
        cout << " Input value in gallons\t\t  : ";
    }

    L = 3.785 * gal;
    quarts = 4.0 * gal;

    system("cls||clear");
    /* Load Template*/
    cout << "\n Input value in gallons\t\t  : " << gal << "\n\n";
    cout << setprecision(2) << fixed;
    cout << " The converted value in liters is : " << L << "\n";
    cout << " The converted value in quarts is : " << quarts << "\n";

    return 0;
}