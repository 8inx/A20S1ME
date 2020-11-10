#include<iostream>
#include<cmath>
#include<limits>
#include<iomanip>
#include<stdlib.h>
using namespace std;

int main()
{    
    double S;
    double Area;

    start:
    cout << " Input value of side (S): ";
     /* Check if value is a valid side*/
    while(!(cin>>S) || S < 0){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << " \033[31mIncorrect format!\e[0m\n\n";
        cout << " Input value of side (S): ";
    }

    Area = (sqrt(3)/4)*pow(S,2);
    
    system("cls||clear");
    cout << " Input value of side (S): " << S << "\n\n";
    cout << " Area of equilateral triangle = " << setprecision(2) << fixed << Area << "\n";
    return 0;
    
}
