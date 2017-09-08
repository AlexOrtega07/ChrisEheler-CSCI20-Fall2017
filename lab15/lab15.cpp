// Created by: Chris Eheler
// Created on: 9/7/2017
// This program will print out a madlib after asking for input from the user


 #include <iostream>                                                                 
 #include <string>                                                                                             // Have to use this to use strings
 using namespace std;                    

 int main()                             
 {      string adjective1;                                                                                      //Initialize all of the input required for the mad lib
        string adjective2;
        string noun1;
        string noun2;
        string noun3;
        string adjective3;
        string verb1;
        
        cout << "We are going to play a mad lib game!" << endl;                                                 //Tell the user what to expect from the program
        cout << "When asked for a word do not use spaces" << endl;                                              //Make sure the user doesnt cause an error
        
        cout << "Please enter an adjective: " << endl;                                                          //Get the user words to input into the existing madlib
        cin >> adjective1;
        cout << "Please enter another adjective: " << endl;
        cin >> adjective2;
        cout << "Please enter a body part: " << endl;
        cin >> noun1;
        cout << "Please enter a plural noun: " << endl;
        cin >> noun2;
        cout << "Please enter another noun: " << endl;
        cin >> noun3;
        cout << "Please enter another adjective" << endl;
        cin >> adjective3;
        cout << "Please enter a verb" << endl;
        cin >> verb1;
        
        cout << " " << endl;
        cout << "Your Frosty the Snowman story." << endl;
        cout << " " << endl;
        
        cout << "Frosty the snowman was a " << adjective1 <<", " << adjective2 << " soul." << endl;             //Input the users words into the existing madlib format and print it
        cout << "With a corncob " << noun1 << " and a button nose two eyes made out of " << noun2 << " ." << endl;
        cout << "Frosty the Snowman is a fairy tale they say." << endl;
        cout << "He was made of " << noun3 << " but the children know how he came to life one day." << endl;
        cout << "There must have been some magic in that " << adjective3 << " hat they found." << endl;
        cout << "For when they placed it on his head he began to " << verb1 << " around." << endl;
        
        return (0);
 }