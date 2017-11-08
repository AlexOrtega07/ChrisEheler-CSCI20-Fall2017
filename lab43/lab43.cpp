/*
Created by: Chris Eheler
Creaded on: 11/7/2017
This program will emulate a shopping cart tracking inventory and price of items then allowing you to buy them
whenadding items to your cart the stock number goes down with the number that goes in the cart only using classes this time
*/

#include <iostream>                                                             // Including the proper includes for the program
#include <string>
using namespace std;

class Guns {
    public:
        Guns();
        Guns( string item, int num, double price);
        void Print();
        void SetName( string name);
        void SetInventory( int num);
        void SetPrice( double price);
        string GetName();
        int GetInventory();
        double GetPrice();
    
    private:
        string guns_;
        int inventory_;
        double price_;
};

Guns::Guns(){
    guns_ = "Blunderbuss";
    inventory_ = 0;
    price_ = 1.00;
}

Guns::Guns(string item, int num, double price){
    guns_ = item;
    inventory_ = num;
    price_ = price;
}

void Guns::Print(){
    cout << guns_ << "        " << price_ << "     Stock: " << inventory_ << endl;
}

void Guns::SetName( string name){
    guns_ = name;
}

void Guns::SetInventory( int num){
    inventory_ = num;
}

void Guns::SetPrice( double price){
    price_ = price;
}

string Guns::GetName(){
    return guns_;
}

int Guns::GetInventory(){
    return inventory_;
}

double Guns::GetPrice(){
    return price_;
}

int main(){
    
    cout << "Yay No Bugs!!";
    
    return 0;
}