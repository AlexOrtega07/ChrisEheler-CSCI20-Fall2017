//Created By : Chris Eheler
//Created On : 10/10/2017
//This program will take user input and determines which plan is best for the person

#include <iostream>
using namespace std;


int main(){
    int num_phones = 0;                                                         // Define and initialize all the of variables needed for the calculations
    int num_dumb = 0;
    int num_smart = 0;
    int num_data = 0;
    int num_tablets = 0;
    int ATT_UCP_total = 0;
    int ATT_FP_total = 0;
    int verizon_unl_total = 0;
    int sprint_unl_total = 0;
    int sprint_two_total = 0;
    
    cout << "Please enter the total number of smart phones in the plan: " << endl; // Gather input to run though the math needed to determine the best plan
    cin >> num_smart;
    cout << "Please enter the total number of dumb phones in the plan: " << endl;
    cin >> num_dumb;
    num_phones = num_smart + num_dumb;                                             // Dumb and smart doesn't matter for our calculations so we combine them
    cout << "Please enter the ammount of data in gigabytes needed: " << endl;
    cin >> num_data;
    cout << "How many tablets are you planning to have on your plan? " << endl;
    cin >> num_tablets;
    
    if (num_phones == 1){                                                          // If else statements determining the cost of the AT&T Unlimited Choice Plan
        ATT_UCP_total = 60 + (num_tablets * 10);
    }
    
    else if (num_phones == 2){
        ATT_UCP_total = 115 + (num_tablets * 10);
    }
    
    else{
        ATT_UCP_total = 115 + ( ( ( num_phones - 2 ) * 20) + ( num_tablets * 10 ) );
    }
    
     if (num_phones > 10) {
        ATT_FP_total = 999999999;                                                  // If the number of phones is greater than 10 this plan will not work so 
    }                                                                              // I made the cost so high it will not view it as the best option without an error
    
    else if (num_data == 1) {
        ATT_FP_total = ( num_phones * 20 ) + ( num_tablets *10 ) + 30;             // If else statements determining the cost of the AT&T Family Plan
    }
    
    else if (num_data <= 3){
        ATT_FP_total = ( num_phones * 20 ) + ( num_tablets *10 ) + 40;
    }
    
    else if (num_data <= 6){
        ATT_FP_total = ( num_phones * 20 ) + ( num_tablets *10 ) + 60;
    }    
    
    else if (num_data <= 10){
        ATT_FP_total = ( num_phones * 20 ) + ( num_tablets *10 ) + 80;
    }
    
    else if (num_data <= 16){
        ATT_FP_total = ( num_phones * 20 ) + ( num_tablets *10 ) + 90;
    }
    
    else if (num_data <= 25) {
        ATT_FP_total = ( num_phones * 20 ) + ( num_tablets *10 ) + 110;
    }
    
    
    else{
        ATT_FP_total = 999999999;                                                   // If over 25 GB of data the plan will not work so I again set the value too high to be considered
    }
    
    if (num_phones == 1){                                                           // If else statements determining the cost of the Verizon Unlimited Plan
        verizon_unl_total = 80 +  ( num_tablets * 10 );
    }
    
     else {
        verizon_unl_total = 110 + ( ( num_phones - 1 ) * 20 ) + ( num_tablets * 10 );
    }
    
    if (num_phones == 1){                                                          // If else statements determining the cost of the Sprint Unlimited Plan
        sprint_unl_total = 60;
    }
    
    else if (num_phones == 2){
        sprint_unl_total = 100;
    }
    
    else {
        sprint_unl_total = 100 + ( (num_phones - 2) * 30 );
    }
    
    if ( num_data <= 2){                                                           // If else statements determining the cost of the Sprint 2GB plan 
    sprint_two_total = 40 * (num_phones + num_tablets);                            // If there is over 2GB of data this plan will not work so values reflect in the else statement
    }
    
    else {
        sprint_two_total = 999999999;
    }
    
    if (ATT_UCP_total < ATT_FP_total && ATT_UCP_total < verizon_unl_total && ATT_UCP_total < sprint_unl_total && ATT_UCP_total < sprint_two_total){               // Usinf boolean to determin and output the best option
        cout << "Your most economical phone plan is the AT&T Unlimited Choice Plan" << endl;
    }
    
    else if (ATT_FP_total < ATT_UCP_total && ATT_FP_total <verizon_unl_total &&  ATT_FP_total < sprint_unl_total && ATT_FP_total < sprint_two_total){
        cout << "Your most economical phone plan is the AT&T Family Plan" << endl;
    }
    
    else if (verizon_unl_total < ATT_UCP_total && verizon_unl_total < ATT_FP_total && verizon_unl_total < sprint_unl_total && verizon_unl_total < sprint_two_total){
        cout << "Your most economical phone plan is the Verizon Unlimited Plan" << endl;
    }
    
    else if (sprint_unl_total < ATT_UCP_total && sprint_unl_total < ATT_FP_total && sprint_unl_total < verizon_unl_total && sprint_unl_total < sprint_two_total){
        cout << "Your most economical phone plan is the Sprint unlimited PLan" << endl;
    }
    
    else {
        cout << "Your most economical phone plan is the Sprint 2GB Plan " << endl;
    }
    
    if (ATT_UCP_total == ATT_FP_total && ATT_FP_total == verizon_unl_total && verizon_unl_total == sprint_unl_total && sprint_unl_total == sprint_two_total){
        cout << "There is no phone coverage that is supperior to another with the information you have provided " << endl;
    }
    
    return(0);
}