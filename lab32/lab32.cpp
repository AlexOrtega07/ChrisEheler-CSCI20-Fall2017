//Created By : Chris Eheler
//Created On : 10/10/2017
//This program will take user input and determines which that

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    
    string user_name = "You didnt enter a users name";
    string user_name_last = "fool!";
    string m = "a";
    double adjusted_income = 0;
    double withheld_tax = 0;
    double tax = 0;
    
    cout << "Please enter your first name: " << endl;
    cin >> user_name;
    cout << "Please enter your last name: " << endl;
    cin >> user_name_last;
    cout << "Please enter m for married and s for single:" << endl;
    cin >> m;
    cout << "Please enter the houshold adjusted gross income:" << endl;
    cin >> adjusted_income;
    cout << "Please enter the amount you have withheld for taxes:" << endl;
    cin >> withheld_tax;
    
     switch ('m') {
        case 'm':
        if (adjusted_income <= 18650){
            tax = adjusted_income * .10;
        }
        
        else if (adjusted_income <= 75900){
            tax = 1865 + ((adjusted_income - 18650) * .15);
        } 
        
        else if (adjusted_income <= 153100){
            tax = 10452.50 + ((adjusted_income - 75900) * .25);
        }
        
        else if (adjusted_income <= 233350){
            tax = 29752.50 + ((adjusted_income - 153100) * .28);
        }
        
        else if (adjusted_income <= 416700){
            tax = 52222.50 + ((adjusted_income - 233350) * .33);
        }
        
        else{
            tax = 112728 + ((adjusted_income - 470700) * .396);
        }
        
        break;
        
        case 's':
        
        if (adjusted_income <= 9325){
            tax = adjusted_income * .10;
        }
        
        else if (adjusted_income <= 39750){
            tax = 932.50 + ((adjusted_income - 9325) * .15);
        } 
        
        else if (adjusted_income <= 91900){
            tax = 5226.25 + ((adjusted_income - 37950) * .25);
        }
        
        else if (adjusted_income <= 191700){
            tax = 18713.75 + ((adjusted_income - 91900) * .28);
        }
        
        else if (adjusted_income <= 416700){
            tax = 466643.75 + ((adjusted_income - 191650) * .33);
        }
        
        else{
            tax = 120910.25 + ((adjusted_income - 416700) * .396);
        }
        
        break;
        
         
        break;
        
        default:
            cout << "You entered a marial status that is not corret";
            break;
    }
    
    double tax_refund = withheld_tax - tax;
    cout << " " << endl << " " << endl;
    cout << "Name: " << user_name << " " << user_name_last << endl;
    cout << "Total Gross Adjusted Income: $" << adjusted_income << endl;
    cout << "Total Tax owed: $" << tax << endl;
    
    if (tax_refund >= 0){
    cout << user_name << " " << user_name_last << " is entitled to a refund of: $" << tax_refund << endl;
    }
    
    else{
        cout << user_name << " " << user_name_last << " owes the IRS: $" << abs(tax_refund) << endl;
    }
    return(0);
}

/*
Name: Joe Vandal
Total Gross Adjusted Income: $12100
Total Tax owed: $1210
Joe Vandal is entitled to a refund of: $-960
----------------------------------------------------
Name: Alfonso Haynes
Total Gross Adjusted Income: $32351
Total Tax owed: $3920.15
Alfonso Haynes is entitled to a refund of: $-728.15
-----------------------------------------------------
Name: Bridget Rowe
Total Gross Adjusted Income: $88229
Total Tax owed: $13534.8
Bridget Rowe is entitled to a refund of: $-1477.75
-----------------------------------------------------
Name: Wendy Joseph
Total Gross Adjusted Income: $73291
Total Tax owed: $10061.1
Wendy Joseph is entitled to a refund of: $-3089.15
-----------------------------------------------------

These people need to get an accountant!

AFTER ADJUSTING TO NOT HAVE NEGATIVE REFUNDS BECAUSE THAT IS MEAN 

Name: Joe Vandal
Total Gross Adjusted Income: $12100
Total Tax owed: $1210
Joe Vandal owes the IRS: $960
------------------------------------------------------
Name: Alfonso Haynes
Total Gross Adjusted Income: $32351
Total Tax owed: $3920.15
Alfonso Haynes owes the IRS: $728.15
------------------------------------------------------
Name: Bridget Rowe
Total Gross Adjusted Income: $88229
Total Tax owed: $13534.8
Bridget Rowe owes the IRS: $1477.75
------------------------------------------------------
Name: Wendy Joseph
Total Gross Adjusted Income: $73291
Total Tax owed: $10061.1
Wendy Joseph owes the IRS: $3089.15

*/