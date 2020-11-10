#include<iostream>
#include<cmath>
#include<iomanip>
#include<limits>
#include<stdlib.h>
using namespace std;


int main(){
    
    float r;
    float surfArea;
    float volume;

    cout << " This program computes for the surface area and volume of a sphere (centimeters)\n\n";
    cout << " Input radius of a sphere \t : ";
    /*Check if valid radius*/
    while(!(cin >> r) || r<0){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << " \033[31mBad Format!\e[0m\n\n";
        cout << " Input radius of a sphere \t : ";
    }

    surfArea = 4.0 * M_PI * pow(r,2);
    volume = (4.0/3.0) * M_PI * pow(r,3);

    /*clear console*/
    
    system("cls||clear");

    /* Load Template*/
    cout << " This program computes for the surface area and volume of a sphere (centimeters)\n\n";
    cout << " Input radius of a sphere \t : " << r << " cm\n\n";
    cout << setprecision(2) << fixed;
    cout << " The surface area of a sphere is : " << surfArea << " sq.cm \n";
    cout << " The volume of a sphere is \t : " << volume << " cm3";
    
    return 0;

}