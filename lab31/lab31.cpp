//Created By : Chris Eheler
//Created On : 10/10/2017
//This program will take user input and determines which plan is best for the person

#include <iostream>
using namespace std;


int main(){
    int num_phones = 0;
    int num_data = 0;
    int num_tablets = 0;
    int ATT_UCP_total = 0;
    
    cout << "Please enter the total number of phones in the plan: " << endl;
    cin >> num_phones;
    cout << "Please enter the ammount of data in gigabytes needed: " << endl;
    cin >> num_data;
    cout << "How many tablets are you planning to have on your plan? " << endl;
    cin >> num_tablets;
    
    if (num_phones == 1){
        ATT_UCP_total = 60 + (num_tablets * 10);
    }
    
    else if (num_phones == 2){
        ATT_UCP_total = 115 + (num_tablets * 10);
    }
    
    else{
        ATT_UCP_total = 115 + (((num_phones - 2) * 20) + (num_tablets * 10));
    }
    
    return(0);
}