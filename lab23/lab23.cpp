// Created By Chris Eheler
// Created on 09/26/2017 Most recently Edited on: 09/29/2017
// Program is going to generate a random number in an overly complex and confusing manner using a swap function switching input values

#include <iostream>
#include <cstdlib>                                                                               //Including the libraries required
#include <ctime>
using namespace std;

/*
This functions will take the minimum value and maximum value and swap them using call by function to change it in memory
doing so by taking the two inputs and switching them and using a place holder variable for the swap process to hold a the min value temporarily
*/

void Swap(int& min_random, int& max_random)                                                     
{
    int place_holder=0;
    place_holder = min_random;
    min_random = max_random;
    max_random = place_holder;
    
}

/*
This function calls a random number between two numbers and seeds in time to make the number less predictable
taking two user inputs and using a math equation using modulo to determine the usable range of numbers
*/

void RandGenerator(int min_random, int max_random)                                               
{
    int generated_number = 0;
    Swap(min_random, max_random);
    srand(time(0));                                                                               //Seed in time
    generated_number = rand() % ( max_random - min_random + 1 ) + max_random ;                //Generating a random number 
    cout << "Your random number is " << generated_number << endl;
    
                                                                                              
}



int main()                                                                                        //Running the main function
{
    int minimum_rand = 0;                                                                         //Initializing values
    int maximum_rand = 0;
                                                                                                 
    cout << "Please input you random number minimum value: " << endl;
    cin >> minimum_rand;
    cout << "Please input your random number maximum value: " << endl;
    cin >> maximum_rand;
    
    RandGenerator(minimum_rand, maximum_rand);                                                    //Call the RandGenerator function to use the user input to now generate a random numbers between the users numbers
    
    return 0;
}