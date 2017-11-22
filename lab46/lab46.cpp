// Created by: Chris Eheler
// Created by: 11/16/2017
// This program will input a text file with grades in it and output to a html file

#include <iostream>
#include <ios>
#include <cstring>
#include <iomanip>
#include <fstream>
using namespace std;

int main(){
    ifstream inFS;
    ofstream outFS;
    string student = "";
    int classes = 10;
    char grades [classes];
    int hours [classes];
    double grade_points = 0;
    double GPA = 0.0;
    
    inFS.open("input.txt");
    
    if (inFS.is_open()){
       cout << "Text file has been imported" << endl;
    }
    else if (!inFS.is_open()){
       cout << "Could not access input.txt" << endl;
       return 1;
    }
    
    outFS << "<!DOCTYPE html>" << endl;
    outFS << "<html>" << endl;
    outFS << "<title> Student Transcript </title>" << endl;
    outFS << "</head>" << endl;
    outFS << "<body>" << endl;
    
    getline(inFS, student);
    inFS >> classes;
    outFS << "<h1> " << student << "'s Transcript </h1>" << endl;
        
    for (int i = 0; i <= (classes) ; i++){
        inFS >> hours[i];
        inFS >> grades[i];
        if (grades[i] == 'f' || grades[i] == 'F'){
                grade_points = grade_points + 0;
            }
            else if (grades[i] == 'd' || grades[i] == 'D'){
                grade_points = grade_points + 1;
            }
            else if (grades[i] == 'c' || grades[i] == 'C'){
                grade_points = grade_points + 2;
            }
            else if (grades[i] == 'b' || grades[i] == 'B'){
                   grade_points = grade_points + 3;
            }
            else if (grades[i] == 'a' || grades[i] == 'A'){
                grade_points = grade_points + 4;
            }
            
    }
    
    GPA = grade_points / classes;
    
    outFS << "<h2> " << student << " has taken " << classes << " classes this semester </h2>" << endl;
    outFS << "<p1> your total GPA for this semster was " << GPA << endl;
    outFS << "</body>" << endl;
    outFS << "</html>" << endl;
    
    inFS.close();
    if (!inFS.is_open()){
        cout << "Input file closed";
    }
    
    return 0;
}