#include<iostream>
#include<iomanip>
#include<limits>
#include<stdlib.h>

using namespace std;


int main(){
    
    float F=0;
    float C=0;


    cout << " Input temparature in Farenheit \t : ";

    while(!(cin>>F)){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << " \033[31mBad Format!\e[0m\n\n";
        cout << " Input temparature in Farenheit \t : ";
    }

    C= (5.0/9.0)*(F-32);

    /*clear console*/
    system("cls||clear");
    /*Load Template*/
    cout << "\n Input temparature in Farenheit \t : " << F << " \u00b0F \n\n" << setprecision(2) << fixed;
    cout << " The converted temperature in Celsius is : " << C << " \u00b0C \n\n";
    
    return 0;

}