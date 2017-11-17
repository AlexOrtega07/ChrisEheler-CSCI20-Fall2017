// Created by: Chris Eheler
// Created by: 11/16/2017
// This program will input a text file with grades in it and output to a html file

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(){
    ifstream inFS;
    string student = "Robert";
    int classes = 1;
    char grades[classes];
    int hours [classes];
    
    inFS("input.txt");
    cout << "Text file has been imported" << endl;
    if (!inFS.is_open()){
        cout << "Text "
    }
    
    
    return 0;
}