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
    int ATT_FP_total = 0;
    int verizon_unl_total = 0;
    int sprint_unl_total = 0;
    
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
    
    if (num_data == 1) {
        ATT_FP_total = (num_phones * 20) + (num_tablets *10) + 30;
    }
    
    else if (num_data <= 3){
        ATT_FP_total = (num_phones * 20) + (num_tablets *10) + 40;
    }
    
    else if (num_data <= 6){
        ATT_FP_total = (num_phones * 20) + (num_tablets *10) + 60;
    }    
    
    else if (num_data <= 10){
        ATT_FP_total = (num_phones * 20) + (num_tablets *10) + 80;
    }
    
    else if (num_data <= 16){
        ATT_FP_total = (num_phones * 20) + (num_tablets *10) + 90;
    }
    
    else {
        ATT_FP_total = (num_phones * 20) + (num_tablets *10) + 110;
    }
    
    if (num_phones == 1){
        verizon_unl_total = 80 + (num_tablets * 10);
    }
    
     else {
        verizon_unl_total = 110 + ( (num_phones - 1) * 20 ) + (num_tablets * 10);
    }
    
    
    
    cout << ATT_UCP_total << "  " << ATT_FP_total;
    
    return(0);
}