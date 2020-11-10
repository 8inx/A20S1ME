#include<iostream>
#include<limits>
#include<stdlib.h>
using namespace std;


int main(){
    
    float HP;
    float W;
    float KW;
    float ft_lbs;

    cout << " Input value in Horse Power (HP)\t: ";
    while(!(cin >> HP)){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << " \033[31mBad Format!\e[0m\n\n";
        cout << " Input value in Horse Power (HP)\t: ";
    }

    KW = HP / 1.3414;
    W = KW / 1000;
    ft_lbs = 0.7376 * W;


    system("cls||clear");
    /* Load Template*/
    cout << " Input value in Horse Power (HP)\t: " << HP << "\n\n";
    cout << " The converted value in Watt (W) \t\t\t: " << W << "\n";
    cout << " The converted value in Kilo Watt (KW) \t\t\t: " << KW << "\n";
    cout << " The converted value in Foot-pound per second (ft-lb/s) : " << ft_lbs << "\n";

    return 0;

}