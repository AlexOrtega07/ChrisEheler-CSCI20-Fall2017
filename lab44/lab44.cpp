//
//
//

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main(){
    
    char first_name [10] = "";
    char last_name [20] = "";
    char second_suggestion [30] = "";
    char third_suggestion [30] = "";
    
    cout << "Please enter your first name (Up to 10 Letters): ";
    cin >> first_name;
    
    while (strlen(first_name) > 10){
        cout << "Your first name is too long try a nickname: ";
        cin >> first_name;
    }
    cout << "Please enter your last name (Up to 20 Letters): ";
    cin >> last_name ;
    while (strlen(last_name) > 20){
        cout << "Your last name is too long try a shortened version: ";
        cin >> last_name;
    }
    
    if (strcmp(first_name, last_name) == 0) {  
        cout << "Your last name and first name are the same, please restart the program if this is an error." << endl;
        cout << "Please enter your first name (Up to 10 Letters): ";
        cin >> first_name;
        cout<< endl << "Please enter your last name (Up to 20 Letters): ";
        cin >> last_name ;
        
    }
    cout << endl;
    cout << "Which of the followuing user names do you like?" << endl << endl;
    cout << first_name << " " << last_name << endl;
    cout << first_name[0] << last_name << endl;
    cout << last_name << first_name[0];
    return(0);
}
/*
Running /home/ubuntu/workspace/lab44/lab44.cpp
Please enter your first name (Up to 10 Letters): Chris
Please enter your last name (Up to 20 Letters): Eheler

Which of the followuing user names do you like?

Chris Eheler
CEheler
EhelerC

--------------------------------------------------------------------------------

Please enter your first name (Up to 10 Letters): April
Please enter your last name (Up to 20 Letters): Browne

Which of the followuing user names do you like?

April Browne
ABrowne
BrowneA

--------------------------------------------------------------------------------

Please enter your first name (Up to 10 Letters): AnaElizabeth
Your first name is too long try a nickname: Ana
Please enter your last name (Up to 20 Letters): Hazeltine-Smith

Which of the followuing user names do you like?

Ana Hazeltine-Smith
AHazeltine-Smith
Hazeltine-SmithA

--------------------------------------------------------------------------------


*/