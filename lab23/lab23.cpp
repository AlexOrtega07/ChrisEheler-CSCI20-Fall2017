// Created By Chris Eheler
// Created on 09/26/2017
// Program is going to generate a random number and then print it while accepting values to pick between and allowing swaping of numbers

#include <iostream>
#include <cstdlib>                                                                               //Including the libraries required
#include <ctime>
using namespace std;

void swap(int& min_random, int& max_random)
{
    int place_holder=0;
    place_holder = min_random;
    min_random = max_random;
    max_random = place_holder;
    
}

void rand_generator(int min_random, int max_random)                                               //Defining the function
{
    swap(min_random, max_random);
    srand(time(0));                                                                               //Seed in time
    int generated_number = rand() % ( max_random - min_random + 1 ) + max_random ;                //Generating a random number 
    cout << "Your random number is " << generated_number << endl;
    
                                                                                                  //Printing the generated number
}



int main()
{
    int minimum_rand;
    int maximum_rand;
                                                                                                  //Running the function
    cout << "Please input you random number minimum value: " << endl;
    cin >> minimum_rand;
    cout << "Please input your random number maximum value: " << endl;
    cin >> maximum_rand;
    
    rand_generator(minimum_rand, maximum_rand);
    
    return 0;
}