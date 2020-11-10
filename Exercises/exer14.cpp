#include<iostream>
#include<cmath>
#include<limits>
#include<iomanip>
#include<stdlib.h>

using namespace std;


int main(){
    
    float Number;
    float cos_x;
    float sin_x;
    float tan_x;


    cout << " Enter the Number : ";
    while(!(cin >> Number)){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << " \033[31mBad Format!\e[0m\n\n";
        cout << " Enter the Number : ";
    }

    cos_x = cos(Number);
    sin_x = sin(Number);
    tan_x = tan(Number);


    /*clear console*/
    system("cls||clear");
    streamsize ss = cout.precision();
    /* Load Template*/
    cout << " Enter the Number : " << Number << "\n\n" ;
    cout << " Cosine " << setprecision(ss) << Number << "  = " << setprecision(2) << cos_x <<"\n";
    cout << " Sine " << setprecision(ss) << Number << "    = " << setprecision(2) << sin_x <<"\n";
    cout << " Tangent " << setprecision(ss) << Number << " = " << setprecision(2) << tan_x <<"\n";
   
    return 0;

}