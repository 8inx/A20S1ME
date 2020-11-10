#include<iostream>
#include<cmath>
#include<limits>
#include<stdlib.h>
using namespace std;


int main(){

    float A,B;
    float C = 0;

    cout << " This program computes the hypotenuse of a right triangle\n\n";

    cout << " Enter length of side A : ";
    while(!(cin >> A))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << " \033[31mBad Format!\e[0m\n\n";
        cout << " Enter length of side A : ";
    }

    cout << " Enter length of side B : ";
    while(!(cin >> B))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << " \033[31mBad Format!\e[0m\n\n";
        cout << " Enter length of side B : ";
    }
    
    
    /* Compute C*/
    C = sqrt(pow(A,2)+pow(B,2));

    system("cls || clear");
    /*loadTemplate*/
    cout << " This program computes the hypotenuse of a right triangle\n\n";
    cout << " Enter length of side A : " << A << "\n";
    cout << " Enter length of side B : " << B << "\n\n";
    cout << "\n The length of hypotenuse is " << C << "\n";

    return 0;
}