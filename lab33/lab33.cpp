//Created By : Chris Eheler
//Created On : 10/17/2017
//This program will crate a number guessing game

#include <iostream>                                                             //istream for input and output and ctime for seeding random
#include <ctime>
using namespace std;


int main() {
    int winning_num = 0;                                                        // Initialize and define necessary variables
    int numb_guess = 0;
    
    srand(time(0));
    winning_num = rand() % 50 + 1;                                              // Make the random number seeded in time
    
    for (int i = 1; i <=5; i++){
        cout << i << endl;
    }
    
    cout << "Please enter a number between 1 and 50: " << endl;
    cin >> numb_guess;
    
    while (numb_guess > 50 || numb_guess < 1){
        cout << "That number was not within the range try again ! " << endl;
        cout << "Please enter a number between 1 and 50: " << endl;
    cin >> numb_guess;                                                          // Making sure the guess is within the range
    }                       
    
    while(winning_num != numb_guess){                                           // Using if and else to determine where the guess falls in relation
         if (numb_guess > winning_num){
        cout << "Your number is too big, try again" << endl << "Enter another guess: ";
        cin >> numb_guess;
    }
    
    else {
        cout << "Your number is too small, try again" << endl << "Enter another guess: ";
         cin >> numb_guess;
    }
    
    
    if (winning_num == numb_guess) {
        cout << "Congratualtions you got it right!" << endl;                    // Congratulate the victor
        break;
    }
    }

    
    return(0);
}
/*
1
2
3
4
5
Please enter a number between 1 and 50: 
30
Your number is too small, try again
Enter another guess: 40
Your number is too big, try again
Enter another guess: 35
Your number is too small, try again
Enter another guess: 36
Your number is too small, try again
Enter another guess: 37
Your number is too small, try again
Enter another guess: 38
Your number is too small, try again
Enter another guess: 39
Congratualtions you got it right!
*/