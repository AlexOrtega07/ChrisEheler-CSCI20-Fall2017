/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//******************************************************************* Created by: Chris Eheler ****************************************************************// 
//******************************************************************* Created by: 11/20/2017 ******************************************************************// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////  This program will input a text file and read in the information that contains the answers to a test and names of the students  ////////////////
///////////////          It will then output the score as well as the incorrect answer count to both the console and a stored text file          ////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>                                                             // necessary libraries
#include <ios>
#include <string>
#include <cstring>
#include <fstream>
#include <thread>                                                               // Used only for the aesthetic of sleep to make the text easier to read
#include <chrono>
using namespace std;

int main(){
    string student_name;                                                        // Declare and define necessary variables arrays and streams
    string student_last_name;
    int total_possible = 25;
    char studentAnswers[total_possible];
    char correctAnswers[total_possible];
    int correct_answers = 0;
    int incorrect_answers = 0;
    int ommited_answers = 0;
    double points_scored = 0.0;
    double points_possible = 0.0;
    double overall_points = 0.0;
    ifstream input;                                                             // input and output file systems 
    ofstream output;
    string ans1 = " ";                                                          // Needed bacuse you cant have a string in a char array and 3 answers are strings
    string ans2 = " ";
    string ans3 = " ";
    string sans1 = " ";
    string sans2 = " ";
    string sans3 = " ";
    
    cout << "What is the total count of questions on the test that are answered with a single character (18 in this exaple)? ";
    cin >> total_possible;                                                      // Determine the number of single char answers to loop through to read in
    cout << "Opening answer key input file" << endl;                            // Open the answer key file and read it in to store correct answers
    std::this_thread::sleep_for (std::chrono::seconds(1));                      // It looks nice and makes the program output less overwhelming
    input.open("answerkey.txt");
    if (!input.is_open()){
        cout << "Could not open the answer key please check your directory!";   // Give warining for lack of input file
        std::this_thread::sleep_for (std::chrono::seconds(1));                  // It looks nice and makes the program output less overwhelming
    }
    
    for(int i = 0; i < total_possible; i++){                                    // reading in answers
        input >> correctAnswers[i];
    }
    input >> ans1;                                                              // Strings for the last three
    input >> ans2;
    input >> ans3;
    input.close();                                                              // Closing the answer key so that the students information can be opened
    
    if (!input.is_open()){
        cout << "Input file has been closed" << endl;
        std::this_thread::sleep_for (std::chrono::seconds(1));
    }
    cout << "Opening student input file" << endl;                               // inform the user and open the students information as well as the output document
    std::this_thread::sleep_for (std::chrono::seconds(1));
    input.open("studentanswers.txt");
    output.open("Results.txt");
    if (!input.is_open()){
        cout << "Could not open the student answers please check your directory!";
        std::this_thread::sleep_for (std::chrono::seconds(1));
    }
    while (!input.eof()){                                                       // Input the students information into the console from the input file untill the end is reached
    input >> student_name;
    input >> student_last_name;
    
    
    for(int i = 0; i < total_possible; i++){                                    // Loop through the student answers array and assign the informatino found in studentanswers.txt
        input >> studentAnswers[i];
    }
    input >> sans1;                                                             // Do the same through the three strings at the end
    input >> sans2;
    input >> sans3;
    
   ///////////////////////////////////////////////////////////////////////////// The following lines are a decision tree that determines what answers the student has by comparing
   ///////////////////////////////////////////////////////////////////////////// the stuent answer to the answer key and incrementing the appropriate variable
    for (int i = 0; i < total_possible; i++){
        if (studentAnswers[i] == correctAnswers[i]){
            correct_answers++;
        }
        else if (studentAnswers[i] == '?'){
            ommited_answers++;
        }
        else {
            incorrect_answers++;
        }
    }
    ////////////////////////////////////////////////////////////////////////////
    if (sans1 == ans1){
        correct_answers++;
    }
    else if (sans1 == "?"){
        ommited_answers++;
    }
    else{
        incorrect_answers++;
    }
    ////////////////////////////////////////////////////////////////////////////
    if (sans2 == ans2){
        correct_answers++;
    }
    else if (sans2 == "?"){
        ommited_answers++;
    }
    else{
        incorrect_answers++;
    }
    ////////////////////////////////////////////////////////////////////////////
    if (sans3 == ans3){
        correct_answers++;
    }
    else if (sans3 == "?"){
        ommited_answers++;
    }
    else{
        incorrect_answers++;
    }
    //////////////////////////////////////////////////////////////////////////// Math for determining grades
    points_scored = (correct_answers * 1) + (ommited_answers * 0) + (incorrect_answers * .75);
    points_possible = total_possible * 1;
    overall_points = (points_scored / points_possible) * 100;
    //////////////////////////////////////////////////////////////////////////// Outputting to both the output file and to the BASH command line
    cout << student_name << " " << student_last_name << endl;
    cout << "Incorrect answers: " << incorrect_answers << endl;
    cout << "Resulting in a grade of " << points_scored << " out of " << points_possible << " or a " << overall_points << "%" << endl << endl;
    output << student_name << " " << student_last_name << endl;
    output << "Incorrect answers: " << incorrect_answers << endl; 
    output << "Resulting in a grade of " << points_scored << " out of " << points_possible <<" or a " << overall_points << "%" << endl << endl;
    //////////////////////////////////////////////////////////////////////////// Resetting the variables for the next student
    incorrect_answers = 0;
    correct_answers = 0;
    ommited_answers = 0;
    }
    input.close();                                                              // Close the files
    if (!input.is_open()){
        cout << "Input file has been closed" << endl;
    }
    output.close();
    if (!output.is_open()){
        cout << "System has outputed a file into the directory" << endl;
    }
    
    
    return 0;
}