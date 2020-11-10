#include<iostream>
#include<cmath>
#include<limits>
#include<iomanip>
#include<stdlib.h>

using namespace std;

int main()
{    
    double a,b,c,d;
    double A, S;

    start:
        cout << " Input the value of side a: ";
        cin >> a;
        cout << " Input the value of side b: ";
        cin >> b;
        cout << " Input the value of side c: ";
        cin >> c;
        cout << " Input the value of side d: ";
        cin >> d;

    /* Check if value is a valid side*/
    if(!cin || a < 0 || b < 0 || c < 0 || d < 0)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << " \033[31m An error occured. Bad format!\e[0m\n\n";
        goto start;
    }

    S = (a+b+c+d)/2;
    A = sqrt((S-a)*(S-b)*(S-c)*(S-d));

    if (isnan(A))
    {
        cout << " \033[31mCyclic Quadrilateral does not exist!\e[0m\n\n";
        goto start;
    }
    
    system("cls || clear");
    /* Load Template*/

    cout << " Input the value of side a: "<< a << "\n";
    cout << " Input the value of side b: "<< b << "\n";
    cout << " Input the value of side c: "<< c << "\n";
    cout << " Input the value of side d: "<< d << "\n\n";
    cout << setprecision(2) << fixed;
    cout << " Area is: " << A << "\n";
    
    return 0;
}