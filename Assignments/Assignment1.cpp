//Created By: Chris Eheler
//Created On: 9/12/2017
//This program is designed to take user input of income and generate a pay stud for that data 
 
 #include <iostream>
 #include <string>
 using namespace std;
 
 struct Employee{                                                                                // Creating my struct for Employee
  string user_name;
  int initial_odometer;
  int final_odometer;
  int total_miles;
  double hours_worked;                                                          
  double insurance_cost;
  double hourly_pay;
  double gross_pay;
  double mileage_reimbursment;
  double taxes;
  double net_pay;
   
 };
  
  int main()
 {
   Employee userA;                                                                              // Initializing all of my values for employee input
   userA.user_name = " ";
   userA.hours_worked = 0.00;
   userA.initial_odometer = 0;
   userA.final_odometer = 0;
   userA.insurance_cost = 0.00;
   userA.hourly_pay = 0.00;
   userA.gross_pay = 0.00;
   userA.total_miles = 0;
   userA.mileage_reimbursment = 0.00;
   userA.taxes = 0.00;
   userA.net_pay = 0.00;
   
   cout << "Please enter your first name followed by your last: " << endl;                     // Gathering all of my input from the user
   getline(cin, userA.user_name);
   cout << "How many hours do you work a week ?" << endl;
   cin >> userA.hours_worked;
   cout << "How much money do you recieve per hour ?" <<endl;
   cin >> userA.hourly_pay;
   cout << "How much is deducted for insurance per week ?" << endl;
   cout << "If you have no insurance enter 0.0 " << endl;
   cin >> userA.insurance_cost;
   cout << "What was the begining odometer reading on your vehicle this pay period ?" << endl;
   cin >> userA.initial_odometer;
   cout << "What is your current odometer reading after deducting personal mileage ?" << endl;
   cin >> userA.final_odometer;
   
   userA.gross_pay = userA.hours_worked * userA.hourly_pay;                                   // Calculating all of the values for the output
   userA.total_miles = userA.final_odometer - userA.initial_odometer;
   userA.mileage_reimbursment = userA.total_miles * .35;
   userA.taxes = (userA.gross_pay - userA.insurance_cost) * .17;
   userA.net_pay = (userA.gross_pay - userA.taxes - userA.insurance_cost) + userA.mileage_reimbursment;
   
   cout << " " << endl;                                                                      // Creating a space for aesthetics
   cout << " " << endl;
   cout << " " << endl;
   
   
   cout << userA.user_name << endl;                                                                                                              // format and print output
   cout << "Income          Rate          Hours         Gross Total         Deductions         Reimbursements          Total Pay" << endl; 
   cout << "Gross Wages     $" << userA.hourly_pay << "          " << userA.hours_worked << "              $" << userA.gross_pay <<
           "              $" << userA.taxes + userA.insurance_cost << "              $" << userA.mileage_reimbursment << "          $" << userA.net_pay;
 }
 
 /*
 Sofia Cameron
Income          Rate          Hours         Gross Total         Deductions         Reimbursements          Total Pay
Gross Wages     $23.57          40              $942.8              $308.556              $310.1          $944.344

Process exited with code: 0

---------------------------------------------------------------------------------------------------------------------

Richard Watson
Income          Rate          Hours         Gross Total         Deductions         Reimbursements          Total Pay
Gross Wages     $11.5          29              $333.5              $342.688              $328.3          $319.112

Process exited with code: 0

---------------------------------------------------------------------------------------------------------------------

Richard Watson
Income          Rate          Hours         Gross Total         Deductions         Reimbursements          Total Pay
Gross Wages     $11.5          29              $333.5              $342.688              $328.3          $319.112

Process exited with code: 0

---------------------------------------------------------------------------------------------------------------------

Eddy Hall
Income          Rate          Hours         Gross Total         Deductions         Reimbursements          Total Pay
Gross Wages     $8.25          40              $330              $205.724              $79.45          $203.726

Process exited with code: 0
*/