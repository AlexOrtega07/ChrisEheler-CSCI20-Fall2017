// Created By Chris Eheler
// Created on 09/28/2017
// This program generates a random number and assigns to to a weight in pounds where it then converts it to kilograms and back to lbs

#include <iostream>
#include <cstdlib>                                                                               //Including the libraries required
#include <ctime>
using namespace std;

/*
The purpose of this function is to take a inputed pound value and converting it into kilograms
*/
double PoundsToKilos (double lbs_in)
{
    double kilo_out = lbs_in * 2.2046226218;
    return kilo_out;
}

// This function grabs a kilo value and converts it into a lb value

double KilosToPounds (double kilos_in)
{
    double lbs_out = kilos_in / 2.2046226218;
    return lbs_out;
}

/*
This functions will take the minimum value and maximum value and swap them using call by function to change it in memory
*/

int Swap(int& min_random, int& max_random)                                                     
{
    int place_holder=0;
    place_holder = min_random;
    min_random = max_random;
    max_random = place_holder;
    
}

/*
This function calls a random number between two numbers later inputed by the user
*/

int RandGenerator(int min_random, int max_random)                                               
{
    Swap(min_random, max_random);
    srand(time(0));                                                                               //Seed in time
    int generated_number = rand() % ( max_random - min_random + 1 ) + max_random ;                //Generating a random number for lbs later
    cout << "Your random number is "<< generated_number << endl;
    return generated_number;                                                                      //Assign the value to the generated nuumber variable
                                                                                              
}


int main()                                                                                        //Running the main function refering back to my user defined function
{
    int minimum_rand;                                                                             //Initiate values
    int maximum_rand;
                                                                                                 
    cout << "Please input you random number minimum value: " << endl;
    cin >> minimum_rand;
    cout << "Please input your random number maximum value: " << endl;
    cin >> maximum_rand;
    
    double initial_lbs = RandGenerator(minimum_rand, maximum_rand);
    double initial_kilos = PoundsToKilos(initial_lbs);
    double lbs_again = KilosToPounds(initial_kilos);
    
    cout << "Your initial random weight in lbs is: " << initial_lbs << endl;
    cout << "Converted to Kilos is: " << initial_kilos << endl;
    cout << "Converted back to lbs: " << lbs_again;                                             //output
    
    return 0;
}