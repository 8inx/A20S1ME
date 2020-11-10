#include<iostream>
#include<cmath>
#include<limits>
#include<iomanip>
#include<stdlib.h>

using namespace std;


int main(){

    float r = 0;
    float C = 0;
    float D = 0;

    cout << " This program computes for the circumference and diameter of a circle\n\n";
    cout << " Input radius \t\t\t  : ";
    /*Check if r is valid*/
    while ( !(cin >> r)|| r<0){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        cout << " \033[31mBad Format!\e[0m\n\n";
        cout << " Input radius \t\t\t  : ";
    }

    C = 2.0 * M_PI * r;
    D = 2.0 * r;

    system("cls||clear");
    cout << " This program computes for the circumference and diameter of a circle\n\n";
    cout << " Input radius \t\t\t  : " << r << "\n";
    cout << setprecision(2) << fixed;
    cout << " The circumference of a circle is : " << C << "\n";
    cout << " The diameter of a circle is \t  : " << D << "\n";


    return 0;
}