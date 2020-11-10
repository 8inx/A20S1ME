#include<iostream>
#include<iomanip>
#include<limits>
#include<stdlib.h>

using namespace std;


int main(){

    int militaryHour;
    int h_hand = 0;
    int m_hand = 0;
    string Period;
    
    cout << " This program converts military hour(s)\n\n";

    testInput: 
        cout << " Input time (military) \t: ";
        cin >> militaryHour;

    if(!cin || (militaryHour%100)>=60 || militaryHour>2400 || militaryHour<0)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << " \033[31mBad Format!\e[0m\n\n";
        goto testInput;
    }

    h_hand = militaryHour / 100;
    m_hand = militaryHour % 100;

    if (h_hand>12)
    {
        h_hand = h_hand - 12;
    }

    if (militaryHour>=1200 && militaryHour<2400 )
    {
        Period = "pm";
    }
    else
    {
        Period = "am";
    }


    system("cls || clear");

    cout << "\n This program converts military hour(s)\n\n";
    cout << " Input time (military) \t: " << setw(4) << setfill('0') << militaryHour << " hrs. \n";
    cout << " The standard time is \t: ";
    cout << setw(2) << setfill('0') << h_hand << ":";
    cout << setw(2) << setfill('0') << m_hand << " ";
    cout << Period;
    
    return 0;
}