/*
Created by: Chris Eheler
Creaded on: 11/2/2017
This program will emulate a shopping cart tracking inventory and price of items then allowing you to buy them
whenadding items to your cart the stock number goes down with the number that goes in the cart
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    double cart_price = 0;
    char shopping = 'y';
    
    
    string stuff[10] = { "Glock 17        ", "Glock 19        ", "Glock 20        ", "Glock 21        ", "Glock 22        ", "Gock 23         ", "M&P 9mm Pro     ", "Springfield 1911",
    "X-D Sub-Compact ", "Bulldog .44 Mag"};
    double prices[10] = { 499.99, 549.99, 589.99, 599.99, 559.95, 479.99, 574.00, 899.99, 429.99, 443.00};
    int stock[10] = {5, 5, 5, 5, 5, 5, 6, 3, 8, 4};
    
    for ( int i = 0; i < 10; i++ ){
        cout << i + 1 << ". " << stuff[i] << "               $" << prices[i] << endl;
    }
    
    while ( shopping == 'Y' || shopping == 'y'){
        
        cout << "Would you like to continue shopping? (y/n): ";
        cin >> shopping;
    }

    return(0);
}