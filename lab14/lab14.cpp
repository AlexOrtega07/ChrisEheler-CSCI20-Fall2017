// Created by: Chris Eheler
// Created on: 9/5/2017
// This program will convert change into dollars and take a service charge


 #include <iostream>                       
 using namespace std;                    

 int main()                             
 {          
            int change_input = 0;                                                   //Establishing placeholders for output ands input variables
            int currency_out = 0;
            int quarters_out = 0;
            int dimes_out = 0;
            int nickles_out = 0;
            int pennies_out = 0;
            int quarter = 25;                                                        //Establishing currency value relative to input
            int dime = 10;
            int nickle = 5;
            int penny = 1;
            int total_without_quarters = 0;                                          //Establish calcuation variables 
            int total_without_quarters_and_dimes = 0;
            int total_with_only_pennys = 0;
            float total_payout = 0.0;
            
            cout << "Please input the currency amount deposited in cents:";          //How much change was put in the machine
            cin >> change_input;
            cout << "You have entered " << change_input << " cents." << endl;        //Tells the user how much change they put in
            
            quarters_out = change_input / quarter;
            total_without_quarters = change_input - (quarters_out * quarter);
            dimes_out = total_without_quarters / dime;
            total_without_quarters_and_dimes = change_input - (quarters_out * quarter) - (dimes_out * dime);
            nickles_out = total_without_quarters_and_dimes / nickle;
            total_with_only_pennys = total_without_quarters_and_dimes % nickle;      //Establish how many of each coin type was put in
            
            cout << "You have entered " << quarters_out << " quarters, " << dimes_out << " dimes " << nickles_out << " nickles, " << total_with_only_pennys << " pennies" << endl;
            
            total_payout = (change_input - (change_input * .109)) * .01 ;            //Take your fee
             
            cout <<"The total is $" << change_input / 100.0 << " After the fee you get $" << total_payout << endl;
            
            
 }