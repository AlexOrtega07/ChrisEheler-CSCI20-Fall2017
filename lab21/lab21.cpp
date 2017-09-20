// Created by Chris Eheler
// Created on 09/19/2017
// This program uses cmath to do math with numbers and stuff

# include <cmath>                                               // needed to do cmath functions
# include <iostream>
using namespace std;

int main() {
    
    double old_style_wind_chill = 0.0;                          // assigning initial values
    double velocity = 0.0;
    double tempF = 0.0;
    double new_style_wind_chill = 0.0;
    double difference = 0.0;
    
    cout << "Please enter the temperature: " << endl;           // gather input
    cin >> tempF;
    cout << "Please enter the starting wind speed: " << endl;
    cin >> velocity;
    
    old_style_wind_chill = 0.081 * ( 3.71 * sqrt( velocity ) + 5.81 -0.25 * velocity ) * (tempF - 91.4 ) + 91.4;
    new_style_wind_chill = 35.74 + 0.6215 * tempF - 35.75 *  pow(velocity, 0.16) + 0.4275 * tempF * pow(velocity, 0.16);
    difference = abs (old_style_wind_chill - new_style_wind_chill);
    
    cout << " " << endl;                                        // make space after doing some math
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;                                        // Spit out the output
    
    cout << "    Wind Speed     Old Formula     New Formula     Difference" << endl;
    cout << "      " << velocity <<"MPH        " << old_style_wind_chill << "°F        " << new_style_wind_chill << "°F         " << difference<< endl;
    
}

/*
 
    Wind Speed     Old Formula     New Formula     Difference
      4MPH        30.5753°F        25.767°F         4.8083


Process exited with code: 0

-------------------------------------------------------------------

 
    Wind Speed     Old Formula     New Formula     Difference
      10MPH        27.8601°F        32.713°F         4.85286


Process exited with code: 0

-------------------------------------------------------------------

    Wind Speed     Old Formula     New Formula     Difference
      2MPH        98.7538°F        105.711°F         6.95719


Process exited with code: 0


*/