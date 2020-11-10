#include<iostream>
#include<cmath>
#include<limits>
#include<iomanip>
#include<stdlib.h>
using namespace std;

int main()
{    
    double a,b,c;
    double S = 0;
    double Area;

    bool isValidA;
    bool isValidB;
    bool isValidC;
    bool isValidTriangle;

    
    cout << " Input sides of a triangle\n\n";

    start:
    cout << " Input the value of side a: ";
    cin >> a;
    cout << " Input the value of side b: ";
    cin >> b;
    cout << " Input the value of side c: ";
    cin >> c;


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

    S = (1.0/2.0)*(a+b+c);
    Area = sqrt(S*(S*a)*(S*b)*(S*c));

    system("cls||clear");
    /*Load Template*/

    cout << " Input sides of a triangle\n\n";
    cout << " Input the value of side a: " << a << "\n";
    cout << " Input the value of side b: " << b << "\n";
    cout << " Input the value of side c: " << c << "\n\n";
    cout << " Area of a triangle with sides a, b, and c = " << setprecision(2) << fixed << Area << "\n";
    return 0;
    
    return 0;
}