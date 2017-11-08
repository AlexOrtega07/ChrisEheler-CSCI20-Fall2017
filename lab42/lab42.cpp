/*
Created by: Chris Eheler
Creaded on: 11/2/2017
This program will emulate a shopping cart tracking inventory and price of items then allowing you to buy them
whenadding items to your cart the stock number goes down with the number that goes in the cart
*/

#include <iostream>                                                             // Including the proper includes for the program
#include <string>
using namespace std;

int main(){
    double cart_price = 0;                                                      // Initializing the cart as 0 because there arent any items yet
    char shopping = 'y';                                                        // initialize to y so that the loop will start
    
    string stuff[10] = { "Glock 17        ", "Glock 19        ", "Glock 20        ", "Glock 21        "
    , "Glock 22        ", "Gock 23         ", "M&P 9mm Pro     ", "Springfield 1911",
    "X-D Sub-Compact ", "Bulldog .44 Mag"};
    double prices[10] = { 499.99, 549.99, 589.99, 599.99, 559.95, 479.99, 574.99, 899.99, 429.99, 443.99};
    int stock[10] = {5, 5, 5, 5, 5, 5, 6, 3, 8, 4};
                                                                                /*
                                                                                the above are my arrays for the store to include princing inventory levelo as well as the item names themselves
                                                                                They are all indexed in such a way that they correlate, pricing was pulled from the internet and is current
                                                                                */
    
    
    while ( shopping == 'Y' || shopping == 'y'){                                //My while loop that was put in place to run the cart program as long as the user wants to keep shopping
        int temp_item = 0;
        
        for ( int i = 0; i < 10; i++ ){                                         // Shows the storefront with indexes used to add the items to cart
        cout << i + 1 << ". " << stuff[i] << "               $" << prices[i] << endl;
    }
        
        cout << " " << endl;                                                    // Added for aesthetics only
        cout << " " << endl;                                                    // Added for aesthetics only
        
        cout << "Please select an item number that you would like to purchase: "; 
        cin >> temp_item;                                                       // Takes the users input and indexes it with pricing inventory and item name
        if (stock[temp_item - 1] <= 0){
            cout << "I am sorry we are out of stock please select a different item: "; // If we are olut of that item / not allowing below 0
            cin >> temp_item;
        }
        stock [temp_item - 1] = stock[temp_item - 1] - 1;                       // Remove from stock and add the price to the cart total
        cart_price = cart_price + prices[temp_item - 1];
        
        cout << "The following item has been added to your cart: " << stuff[temp_item - 1] << endl; // inform the customer of what is in the cart
        
        cout << "Would you like to continue shopping? (y/n): ";                 // Give the option to continue shopping or to exit the loop
        cin >> shopping;
    }

cout << "Your cart order total is: $" << cart_price;                            // Display the totalof the cart

    return(0);
}