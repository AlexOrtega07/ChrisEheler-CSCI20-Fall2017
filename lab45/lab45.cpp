//Created by: Chris Eheler
//Created on: 10/10/2017
//This Program takes in a users first and last names and generates suggested user names for them to use

#include <iostream>
#include <string>                                                               // needed for string operations
using namespace std;

int main(){
    
    string first_name = " ";                                                    // Establishing first and last names of the user 
    string last_name = " ";
    
    cout << "Please enter your first name (Up to 10 Letters): ";                // gathering user input for first name
    cin >> first_name;
    
    while (first_name.size() > 10){                                             // Makes sure the name is within the specified amount of chars ( 10 chars)
        cout << "Your first name is too long try a nickname: ";
        cin >> first_name;
    }
    
    cout << "Please enter your last name (Up to 20 Letters): ";                 // Gets last name input
    cin >> last_name ;
    while (last_name.size() > 20){
        cout << "Your last name is too long try a shortened version: ";         // makes sure the length is correct (20 chars)
        cin >> last_name;
    }
    
    if (first_name.compare( last_name ) == 0) {                                 // If the two names are the same it wans the user and gives another chance in case their names are actually the same
        cout << "Your last name and first name are the same, please restart the program if this is an error." << endl;
        cout << "Please enter your first name (Up to 10 Letters): ";
        cin >> first_name;
        cout<< "Please enter your last name (Up to 20 Letters): ";
        cin >> last_name ;
    }
    
    cout << endl << endl;
    cout << "Which of the followuing user names do you like?" << endl;  // Offers choices of first then last then using initials as well as the last name
    cout << first_name << last_name << endl;
    cout << first_name[0] << last_name << endl;
    cout << last_name << first_name[0];
    
    return(0);
}

/*

Running /home/ubuntu/workspace/lab45/lab45.cpp
Please enter your first name (Up to 10 Letters): Christopher
Your first name is too long try a nickname: Chris
Please enter your last name (Up to 20 Letters): Eheler
Which of the followuing user names do you like?


ChrisEheler
CEheler
EhelerC

--------------------------------------------------------------------------------

--------------------------------------------------------------------------------

Please enter your first name (Up to 10 Letters): April
Please enter your last name (Up to 20 Letters): Browne
Which of the followuing user names do you like?


AprilBrowne
ABrowne
BrowneA

--------------------------------------------------------------------------------

Please enter your first name (Up to 10 Letters): AnaElizabeth
Your first name is too long try a nickname: Ana
Please enter your last name (Up to 20 Letters): Hazeltine-Smith
Which of the followuing user names do you like?


AnaHazeltine-Smith
AHazeltine-Smith
Hazeltine-SmithA

--------------------------------------------------------------------------------

Please enter your first name (Up to 10 Letters): James
Please enter your last name (Up to 20 Letters): James
Your last name and first name are the same, please restart the program if this is an error.
Please enter your first name (Up to 10 Letters): James
Please enter your last name (Up to 20 Letters): James
Which of the followuing user names do you like?


JamesJames
JJames
JamesJ


*/