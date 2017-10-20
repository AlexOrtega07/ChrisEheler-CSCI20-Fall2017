// This program reads in a letter and reports whether
// it is an uppercase letter, a lowercase letter, or neither.
// it should continue reading in values until the user enters a -1.

#include <iostream>                                                             // Corrected these to be on the same line
using namespace std; 
int main() {
        // Read a character in
        char ch;
        cout << "Please enter a character: ";
        cin  >> ch;
         
// check -- is it a letter??
        if (ch >= 'a') {                                                        // Switched the lower and upper case letters to match the greater than and less than signs
            if (ch <= 'z') {                                                    // because the ascii Uppers are a higher number
               cout << "Yes, that is a lowercase letter." << endl;
            }
        }
        else if (ch >= 'A') {
            if (ch <= 'Z') {
               cout << "Yes, that is a uppercase letter" << endl;
            }
        }        else {
            cout << "Not a letter" << endl;
        }
          return 0;
    }
    
/*
Running /home/ubuntu/workspace/lab35/lab35.cpp
Please enter a character: F
Yes, that is a uppercase letter
----------------------------------------------
Please enter a character: f
Yes, that is a lowercase letter.
----------------------------------------------
Please enter a character: Z
Yes, that is a uppercase letter
----------------------------------------------
Please enter a character: 3
Not a letter
*/