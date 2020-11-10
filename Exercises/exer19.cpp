#include<iostream>
#include<cmath>
#include<limits>
#include<iomanip>
#include<stdlib.h>
using namespace std;

int main()
{    
    double a,b,c;
    double Mdn_A,Mdn_B,Mdn_C; 

    bool isValidA;
    bool isValidB;
    bool isValidC;
    bool isValidTriangle;

    
    cout << " Input sides a, b and c of a triangle:\n\n";
    start:
    cout << " Input the value of a: ";
    cin >> a;
    cout << " Input the value of b: ";
    cin >> b;
    cout << " Input the value of c: ";
    cin >> c;

     /* Check if value is a valid side*/

    isValidA = a <= 0 || a <= b + c;
    isValidB = b <= 0 || b <= a + c;
    isValidC = c <= 0 || c <= a + b;
    isValidTriangle = isValidA && isValidB && isValidC;

    if (!isValidTriangle)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << " \033[31mTriangle does not exist!\e[0m\n\n";
        goto start;
    }


    Mdn_A = sqrt((2*pow(b,2))+(2*pow(c,2))-pow(a,2))/2;
    Mdn_B = sqrt((2*pow(a,2))+(2*pow(c,2))-pow(b,2))/2;
    Mdn_C = sqrt((2*pow(a,2))+(2*pow(b,2))-pow(c,2))/2;

    system("cls||clear");
    
    cout << " Input sides a, b and c of a triangle:\n\n";
    cout << " Input the value of a: " << a << "\n";
    cout << " Input the value of a: " << a << "\n";
    cout << " Input the value of a: " << a << "\n";
    cout << setprecision(2) << fixed << "\n";
    cout << " The median from vertex A to side a = " << Mdn_A << "\n";
    cout << " The median from vertex B to side b = " << Mdn_B << "\n";
    cout << " The median from vertex C to side c = " << Mdn_C << "\n";
    return 0;
}
  