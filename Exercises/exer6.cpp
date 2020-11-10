#include<iostream>
#include<iomanip>

using namespace std;


int main(){

    string code;
    int quantity;
    double vat;
    double itemPrice,
        totalItemCost,
        totalCost,
        amtTendered,
        amtChange;

    cout << " Item Code \t : ";
    getline(cin,code);
    cout << " Quantity \t : ";
    cin >> quantity;
    cout << " Item Price \t : P ";
    cin >> itemPrice;
    
    cout << setprecision(2) << fixed;
    /* Compute Total Item Cost*/
    totalItemCost = itemPrice * quantity;
    cout << " Total Item Cost : P ";
    cout << totalItemCost << "\n\n";

    /* Compute added vat*/
    vat = 0.6 * totalItemCost;
    cout << " VAT 6% \t : P " << vat << "\n";
    totalCost = totalItemCost + vat;
    cout << " Total Cost \t : P " << totalCost << "\n\n";

    cout << " Amount Tendered \t: P ";
    cin >> amtTendered;
    amtChange = amtTendered - totalCost;
    cout << " Amount Change \t\t: P " << amtChange;
    

    
}