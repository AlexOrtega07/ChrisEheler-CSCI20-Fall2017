//Created By : Chris Eheler
//Created On : 10/24/2017
//This program will crate a game that emulates Hi Ho! Cherry-O

#include <iostream>                                                             //istream for input and output and ctime for seeding random
#include <ctime>
using namespace std;

class Computer{
    public:
    void setCherries(int cher_in);
    void setBasket(int bask_in);
    int getCherries();
    int getBasket();
    
    private:
    int comp_cherries;
    int comp_basket;
    
};

void Computer::setCherries(int cher_in){
    comp_cherries = cher_in;
}

void Computer::setBasket(int bask_in){
    comp_basket = bask_in;
}


int Computer::getCherries(){
    return comp_cherries;
}

int Computer::getBasket(){
    return comp_basket;
}


int main(){
    Computer comp;
    int starting_cherries;
    int tree_cherries;
    int basket = 0;
    int spin = 7;
    int turns = 0;
    comp.setBasket(0);
    
    
    starting_cherries = rand() % 10 +1;
    tree_cherries = starting_cherries;
    comp.setCherries(starting_cherries);
    cout << tree_cherries << endl;
    
    while (tree_cherries >= 1 && comp.getCherries() >=1){
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
        } 
        else if (turns % 2 == 1){
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
        } 
        
    } 
    turns++;
    
    if (tree_cherries <=0){
        cout << "Hi Ho Cherry-O! You Won!";
    }
    else{
        cout << "Better lueck next time you lost!";
    }
    return(0);
}

/*Each player starts the game with an empty basket and 10 cherries on his/her tree. Players take turns spinning the spinner and performing the indicated action. The spinner is divided into seven sections:

Take one cherry from tree
Take two cherries from tree
Take three cherries from tree
Take four cherries from tree
Dog: Replace cherries on tree: two if the player has at least that many in his/her basket, one if he/she has only one (no effect if player's basket is empty)
Bird: Same as dog
Spilled basket: Replace all cherries on tree
The first player to collect all the cherries from his/her tree and call "Hi Ho! Cherry-O" wins the game.

Analysis[edit]
The game length can be determined using a Markov chain, yielding the following results:[3]

Minimum game length: 3
Average game length: 15.8
Maximum game length: Unbounded
25th percentile: 7 moves
50th percentile (median): 12 moves
75th percentile: 21 moves
95th percentile: 40 moves
*/