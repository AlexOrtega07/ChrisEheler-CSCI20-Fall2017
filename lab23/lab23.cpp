// Created By Chris Eheler
// Created on 09/26/2017
// Program is going to generate a random number in an overly complex and confusing manner

#include <iostream>
#include <cstdlib>                                                                               //Including the libraries required
#include <ctime>
using namespace std;

/*
This functions will take the minimum value and maximum value and swap them using call by function to change it in memory
*/

void swap(int& min_random, int& max_random)                                                     
{
    int place_holder=0;
    place_holder = min_random;
    min_random = max_random;
    max_random = place_holder;
    
}

/*
This function calls a random number between two numbers later inputed by the user
*/

void rand_generator(int min_random, int max_random)                                               
{
    swap(min_random, max_random);
    srand(time(0));                                                                               //Seed in time
    int generated_number = rand() % ( max_random - min_random + 1 ) + max_random ;                //Generating a random number 
    cout << "Your random number is " << generated_number << endl;
    
                                                                                              
}



int main()                                                                                        //Running the function
{
    int minimum_rand;
    int maximum_rand;
                                                                                                 
    cout << "Please input you random number minimum value: " << endl;
    cin >> minimum_rand;
    cout << "Please input your random number maximum value: " << endl;
    cin >> maximum_rand;
    
    rand_generator(minimum_rand, maximum_rand);
    
    return 0;
}