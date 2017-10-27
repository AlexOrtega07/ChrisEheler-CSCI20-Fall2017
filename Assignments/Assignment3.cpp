//Created By : Chris Eheler
//Created On : 10/24/2017
//This program will crate a game that emulates Hi Ho! Cherry-O

#include <iostream>                                                             //istream for input and output and ctime for seeding random
#include <ctime>
using namespace std;

class Computer{                                                                 // Computer class to hold the data for the computer
    public:
    void setCherries(int cher_in);
    void setBasket(int bask_in);
    int getCherries();
    int getBasket();
    
    private:                                                                    // Private variable for the cherries on the tree and 
    int comp_cherries;
    int comp_basket;
    
};

/*
Takes input and assigns it to the private value of comp_cherries
*/
void Computer::setCherries(int cher_in){
    comp_cherries = cher_in;
}

/*
Takes input and assigns it to the private value of comp_basket
*/
void Computer::setBasket(int bask_in){
    comp_basket = bask_in;
}

/*
Takes private value for cherries inserts them into the code
*/

int Computer::getCherries(){
    return comp_cherries;
}

/*
Takes private value for basket inserts them into the code
*/

int Computer::getBasket(){
    return comp_basket;
}


int main(){
    Computer comp;                                                              // Creating the object that is the oponent
    int starting_cherries;
    int tree_cherries;
    int basket = 0;
    int spin = 7;
    int turns = 0; 
    starting_cherries = rand() % 10 +1;                                         // Seeding in random for the spinner
    tree_cherries = starting_cherries;
    comp.setCherries(starting_cherries);
    
    while (tree_cherries >= 1 && comp.getCherries() >=1){                       // loop that controls turns and the spinner
        if ( turns % 2 == 0 ){
            cout << "It is the players turn." << endl;
            srand(time(0));
            spin = rand() % 7 + 1;
            if (spin == 1){
            tree_cherries = tree_cherries - 1;
            basket = basket +1;
            } 
    
            else if (spin == 2){
                tree_cherries = tree_cherries - 2;
                basket = basket + 2;
            } 
    
            else if (spin == 3){
                tree_cherries = tree_cherries - 3;
                basket = basket + 3 ;
            } 
    
            else if (spin == 4){
                tree_cherries = tree_cherries - 4;
                basket = basket + 4 ;
            } 
    
            else if (spin == 5){
                if (tree_cherries >= 2){
                basket = basket - 2;
                tree_cherries = tree_cherries + 2;
                }
                else if ( tree_cherries == 1){
                    basket = basket - 1;
                    tree_cherries = tree_cherries + 1;
                    }
                } 
    
            else if (spin == 6){
                if (tree_cherries >= 2){
                    basket = basket - 2;
                    tree_cherries = tree_cherries + 2;
                    }
                else if ( tree_cherries == 1){
                    basket = basket - 1;
                    tree_cherries = tree_cherries + 1;
                    }
            } 
            else {
                tree_cherries = starting_cherries;
                basket = 0;
            } 
            turns++;
        } 
        else if (turns % 2 == 1){                                               // Computer turn 
            cout << "It is the computers turn." << endl;
            srand(time(0));
            spin = rand() % 7 + 1;
            if (spin == 1){
            comp.setCherries( comp.getCherries() - 1);
            comp.setBasket( comp.getBasket() + 1 );
            } 
    
            else if (spin == 2){
                comp.setCherries( comp.getCherries() - 2);
                comp.setBasket( comp.getBasket() + 2 );
            } 
    
            else if (spin == 3){
                comp.setCherries( comp.getCherries() - 3);
                comp.setBasket( comp.getBasket() + 3 );
            } 
    
            else if (spin == 4){
                comp.setCherries( comp.getCherries() - 4);
                comp.setBasket( comp.getBasket() + 4 ) ;
            } 
    
            else if (spin == 5){
                if (comp.getCherries() >= 2){
                comp.setBasket (comp.getBasket() - 2);
                comp.setCherries(comp.getCherries() + 2) ;
                }
                else if ( tree_cherries == 1){
                    comp.setBasket (comp.getBasket() - 1);
                    comp.setCherries(comp.getCherries() + 1) ;
                }
                } 
    
            else if (spin == 6){
                if (comp.getCherries() >= 2){
                comp.setBasket (comp.getBasket() - 2);
                comp.setCherries(comp.getCherries() + 2) ;
                }
                else if ( tree_cherries == 1){
                    comp.setBasket (comp.getBasket() - 1);
                    comp.setCherries(comp.getCherries() + 1) ;
                }
                }
             
            else {
                comp.setCherries(starting_cherries);
                comp.setBasket(0);
            } 
            turns++;
        } 
        
    } 
    
    
    if (tree_cherries <=0){                                                     // Announce the winner
        cout << "Hi Ho Cherry-O! You Won!";
    }
    if (comp.getCherries() <= 0){
        cout << "Better luck next time you lost!";
    }
    return(0); 
}
/*
Running /home/ubuntu/workspace/Assignments/Assignment3.cpp
It is the players turn.
It is the computers turn.
It is the players turn.
Hi Ho Cherry-O! You Won!
--------------------------------------------------------------------------------
Running /home/ubuntu/workspace/Assignments/Assignment3.cpp
It is the players turn.
It is the computers turn.
It is the players turn.
Hi Ho Cherry-O! You Won!
--------------------------------------------------------------------------------
Running /home/ubuntu/workspace/Assignments/Assignment3.cpp
It is the players turn.
Hi Ho Cherry-O! You Won!

Process exited with code: 0
--------------------------------------------------------------------------------
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
It is the players turn.
It is the computers turn.
Better luck next time you lost!
--------------------------------------------------------------------------------
*/