/*
Created by: Chris Eheler
Creaded on: 11/7/2017
This program will emulate a shopping cart tracking inventory and price of items then allowing you to buy them
whenadding items to your cart the stock number goes down with the number that goes in the cart only using classes this time
*/

#include <iostream>                                                             // Including the proper includes for the program
#include <string>
using namespace std;

class Guns {                                                                    // Establishing my class for the store to get and set
    public:
        Guns();                                                                 // Default constructor
        Guns( string item, int num, double price);                              // Overload constructor later used to set my inventory
        void Print();                                                           // Prints the information all pretty like
        void SetName( string name);                                             // Three sets to change my private variables
        void SetInventory( int num);
        void SetPrice( double price);
        string GetName();                                                       // Three Gets to pull and later use the values stored in these private variables
        int GetInventory();
        double GetPrice();
    
    private:
        string guns_;                                                           // Private variables
        int inventory_;
        double price_;
};

Guns::Guns(){                                                                   // Default constructor sets my Gun to a cheap blunderbuss that I dont have
    guns_ = "Blunderbuss";
    inventory_ = 0;
    price_ = 1.00;
}

Guns::Guns(string item, int num, double price){                                 // Overload constructor used a lot later to set my inventory
    guns_ = item;
    inventory_ = num;
    price_ = price;
}

void Guns::Print(){
    cout << guns_ << "        $" << price_ << "     Stock: " << inventory_ << endl;   // Evenly spaces the name price and quantity to be shown to the shopper
}

void Guns::SetName( string name){                                               // takes a string and sets the private guns_ variable to that input
    guns_ = name;
}

void Guns::SetInventory( int num){                                              // takes a int and sets the private inventory_ variable to that input
    inventory_ = num;
}

void Guns::SetPrice( double price){                                             // takes a double and sets the private price_ variable to that input
    price_ = price;
}

string Guns::GetName(){                                                         // No input required and outputs the private stored variable
    return guns_;
}

int Guns::GetInventory(){                                                       // No input required and outputs the private stored variable
    return inventory_;
}

double Guns::GetPrice(){                                                        // No input required and outputs the private stored variable
    return price_;
}

int main(){
    const int num_array = 10;                                                   // Initializing all of the varables for the shopping cart
    char shopping = 'y';
    double total = 0.00;
    int cart_in = 0;
    int cart_num = 0;
    
    Guns cart[num_array * 10];                                                  // Cart with a maximum of total products
    
    Guns storefront[num_array] = {
        Guns("Glock 17        ", 10, 499.99),                                   // Using constructor to populate my array
        Guns("Glock 19        ", 10, 499.99),
        Guns("Glock 20        ", 10, 499.99),
        Guns("Glock 21        ", 10, 546.99),
        Guns("Glock 22        ", 10, 498.99),
        Guns("Glock 23        ", 10, 474.99),
        Guns("Glock 30        ", 10, 546.99),
        Guns("Glock 41        ", 10, 749.99),
        Guns("Glock 42        ", 10, 459.99),
        Guns("Glock 43        ", 10, 449.99)
    };
    
     while ((shopping == 'Y') || (shopping == 'y')){
        for (int i = 0; i < num_array; i++) {                                                                                                        //This loop prints the current invetory of the online store
            cout << i+1 << "-> ";
            storefront[i].Print();
        }
         cout << " " << endl;
         cout << " " << endl;
         
         cout << "Please select an item from our inventory you wish to purchase: " << endl;
         cin >> cart_in;
         if (storefront[cart_in - 1].GetInventory() <= 0){
            cout << "I am sorry we are out of stock please select a different item (Note the stock levels on our menu ): ";                          // If we are olut of that item / not allowing below 0
            cin >> cart_in;
        }
        
        storefront[cart_in - 1].SetInventory(storefront[cart_in - 1].GetInventory() - 1);                                                             // Remove from stock and add the price to the cart total
        total = total + storefront[cart_in - 1].GetPrice();
        cart[cart_num] = storefront[cart_in -1];
        
        
        cout << "Would you like to continue shopping? ( Y / N ) " << endl; 
        cin >> shopping;
        
        if( shopping == 'y' || shopping == 'Y'){                                // Keeps from having one item populate the shopping cart with the default constructor of blunderbuss
            cart_num++;
        }
    }
    
    cout << endl << endl << endl;                                               // aesthetics only
    cout << "Thank you for shopping at youre local Glock Store!" << endl;
    cout << "Your current shopping cart contains: " << endl << endl;
    
    for (int i = 0; i <= cart_num; i++) {                                       // for printing out the cart
        if (cart[i].GetPrice() > 0) {
            cout << cart[i].GetName() << "      $" << cart[i].GetPrice() << endl;
        }
    }
     cout << endl << "Total: $" << total;
    return 0;
}

/*
Running /home/ubuntu/workspace/lab43/lab43.cpp
1-> Glock 17                $499.99     Stock: 10
2-> Glock 19                $499.99     Stock: 10
3-> Glock 20                $499.99     Stock: 10
4-> Glock 21                $546.99     Stock: 10
5-> Glock 22                $498.99     Stock: 10
6-> Glock 23                $474.99     Stock: 10
7-> Glock 30                $546.99     Stock: 10
8-> Glock 41                $749.99     Stock: 10
9-> Glock 42                $459.99     Stock: 10
10-> Glock 43                $449.99     Stock: 10
 
 
Please select an item from our inventory you wish to purchase: 
8
Would you like to continue shopping? ( Y / N ) 
y
1-> Glock 17                $499.99     Stock: 10
2-> Glock 19                $499.99     Stock: 10
3-> Glock 20                $499.99     Stock: 10
4-> Glock 21                $546.99     Stock: 10
5-> Glock 22                $498.99     Stock: 10
6-> Glock 23                $474.99     Stock: 10
7-> Glock 30                $546.99     Stock: 10
8-> Glock 41                $749.99     Stock: 9
9-> Glock 42                $459.99     Stock: 10
10-> Glock 43                $449.99     Stock: 10
 
 
Please select an item from our inventory you wish to purchase: 
10
Would you like to continue shopping? ( Y / N ) 
y
1-> Glock 17                $499.99     Stock: 10
2-> Glock 19                $499.99     Stock: 10
3-> Glock 20                $499.99     Stock: 10
4-> Glock 21                $546.99     Stock: 10
5-> Glock 22                $498.99     Stock: 10
6-> Glock 23                $474.99     Stock: 10
7-> Glock 30                $546.99     Stock: 10
8-> Glock 41                $749.99     Stock: 9
9-> Glock 42                $459.99     Stock: 10
10-> Glock 43                $449.99     Stock: 9
 
 
Please select an item from our inventory you wish to purchase: 
1
Would you like to continue shopping? ( Y / N ) 
n



Thank you for shopping at youre local Glock Store!
Your current shopping cart contains: 

Glock 41              $749.99
Glock 43              $449.99
Glock 17              $499.99

Total: $1699.97
*/