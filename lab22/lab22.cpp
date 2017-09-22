// Created By Chris Eheler
// Created on 09/21/2017
// Program is going to generate a random number and then print it

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rand_generator()                                                    //Defining the function
{
    srand(time(0));
    int generated_number = rand() % 101;                              //Generating a random number 
    cout << "Your random number is " << generated_number << endl;
}


int main()
{
    rand_generator();
    rand_generator();
}