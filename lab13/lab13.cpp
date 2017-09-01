// Created by: Chris Eheler
// Created on: 8/31/2017
// Population prediction program


 #include <iostream>                       
 using namespace std;                    

 int main()                             
 {      
     int curent_population = 325778982;                                                                                             // as of 1814 PST
     int seconds = 1;
     int minutes = 60 * seconds;
     int hours = 60 * minutes;
     int day = 24 * hours;
     int year = 365 * day;
     int prediction_year = 0;                                                                                                       // place holder
     int predicted_population = 0;                                                                                                  // place holder
     
     cout << "The current poplation of the United States is " << curent_population << endl;
     cout << "In how many years would you like me to predict the population?" << endl;
     cin >> prediction_year;
     
     predicted_population = prediction_year * (year / 12) + curent_population;
     
     cout <<"In " << prediction_year << " years, the population in the United States will be " << predicted_population << endl;
 }