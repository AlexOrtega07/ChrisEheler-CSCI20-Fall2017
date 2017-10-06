// Created By Chris Eheler
// Created on : 10/04/2017
// Last updated on : 10/05/2017
// This program will recive input from the user for run time in the form of minutes and seconds it will then convert the runners
// time and convert it into a speed of fps and mps and then compare the runners time with the winner and display 1/4 miles splits

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Runner {                                                                  // Class type of runner so that multiple runners can be used to include the winner and the user
public:
	void setTime( double runners_time);                                         // Public functions to access the private variables, A lot were used for expansion abilities 
	void setSecs( double runners_secs);
	void setDist( double miles_in);
	void setWin( double winners_time);
	void setSplit(double runner_split);
	void setSplitSec(double runner_split_sec);
	void setFps( double runners_fps);
	void setMps(double runners_mps);
	void setDiffMin(double runner_diff_min);
	void setDiffSec(double runner_diff_min);
	void printFunc();
	double getTime();
	double getSecs();
	double getDist();
	double getWin();
	double getSplit();
	double getSplitSec();
	double getFps();
	double getMps();
	double getDiffMin();
	double getDiffSec();

private:
	double user_time;                                                           // Private data where all the user information is stored 
	double user_secs;
	double race_miles;
	double fastest_time;
	double split;
	double split_sec;
	double user_fps;
	double user_mps;
	double user_diff_min;
	double user_diff_sec;
};

void Runner::setTime( double runners_time){                                     // This is where I initialized all the of the functions ie setters and getters for my class
	user_time = runners_time;
}

void Runner::setSecs( double runners_secs){
	user_secs = runners_secs;
}

void Runner::setDist( double miles_in){
	race_miles = miles_in;
}

void Runner::setWin( double winners_time){
	fastest_time = winners_time;
}

void Runner::setSplit( double runner_split){
	split = runner_split;
}

void Runner::setFps( double runner_fps){
	user_fps = runner_fps;
}

void Runner::setMps( double runner_mps){
	user_mps = runner_mps;
}

void Runner::setSplitSec( double runner_split_sec){
	split_sec = runner_split_sec;
}

void Runner::setDiffMin( double runner_diff_min){
	user_diff_min = runner_diff_min;
}

void Runner::setDiffSec( double runner_diff_sec){
	user_diff_sec = runner_diff_sec;
}

double Runner::getTime(){
	return user_time;
}

double Runner::getSecs(){
	return user_secs;
}

double Runner::getDist(){
	return race_miles;
}

double Runner::getWin(){
	return fastest_time;
}

double Runner::getSplit(){
	return split;
}

double Runner::getSplitSec(){
	return split_sec;
}

double Runner::getFps(){
	return user_fps;
}

double Runner::getMps(){
	return user_mps;
}

double Runner::getDiffMin(){
	return user_diff_min;
}

double Runner::getDiffSec(){
	return user_diff_sec;
}

void Runner::printFunc(){
	cout << " " << endl;
	cout <<  "Your run time was an : " << getTime() << " minutes and " << getSecs() << " seconds, you ran a total of " << getDist() << " mile's." <<endl;
	cout << "Which equates to a speed of " << getFps() << " feet per second, or " << getMps() << " meters per second." << endl;                             												    //output the speed break downs
	cout << "Your 1/4 miles split time was: " << getSplit() << " minutes and " << getSplitSec() << " seconds" <<endl; 																							//output runner splits
	cout << "The difference between your time and the fastest was: " << getDiffMin() << " minutes and " <<getDiffSec() << " seconds." << endl;																	//output the difference between the runner and the winner
	cout << "Keep up the hard work and you will be winning in no time!" << endl;
}

int main (){
	Runner user;                                                                // Initializing objects runner ansd winner
	Runner winner;
    int plchldr_time = 0;                                                       // Initializing variables to be inserted into calculations and called by setter and getter functions
    int plchldr_secs = 0;
    double plchldr_miles = 0;
    int plchldr_win = 0;
    int plchldr_win_sec = 0;
    double user_speed = 0;
    double user_fps = 0;
    double user_mps = 0;
    double mile_time = 0;
    int mile_time_min = 0;
    int mile_time_sec = 0;
    double min_split = 0;
    int sec_split = 0;
    int place_mins = 0;
    int diff_mins = 0;
    double diff_secs = 0;
    int mile_min = 0;
    
    cout << "Please enter your run time minutes: " << endl;                     //Gather user input of total run time, distance ran, and first place runners time
    cin >> plchldr_time;
    cout << "Please enter the seconds of your run time: " << endl;
    cin >> plchldr_secs;
    user.setTime(plchldr_time);
    user.setSecs(plchldr_secs);
    cout << "How many miles did you run? " << endl;
    cin >> plchldr_miles;
    user.setDist(plchldr_miles);
    winner.setDist(plchldr_miles);
    cout << "How many minutes was the fist place runner run time? " << endl;
    cin >> plchldr_win;
    cout << "How many seconds was the fist place runner run time? " << endl;
    cin >> plchldr_win_sec;
    winner.setTime(plchldr_win);
    winner.setTime(plchldr_win_sec);
	
	user_fps = (plchldr_miles / plchldr_time) * 88;                             // 1 mile per min = 88 feet per second
	user_mps = (plchldr_miles / plchldr_time) * 26.8224;                        // 1 mile per min = 26.8224 meters per second
	mile_time = ( (plchldr_time * 60) + plchldr_secs );
	
	min_split = ((( mile_time / plchldr_miles) / 60 ) / 4);                     //mile time / 4 = 1/4 mile splits
	place_mins = min_split;                                                     // reformating a double as a int for whole number calculation
	mile_min = ( mile_time / plchldr_miles) / 60;                               // the min variable for splits formated so that only whole numbers will show up
	sec_split = (min_split - place_mins) * 60; 						    		//making the seconds variale for splits
	
	diff_mins = (((plchldr_time * 60) + plchldr_secs) - ((plchldr_win * 60) + plchldr_win_sec)) / 60;   //converting into seconds doing math and converting back because
	diff_secs = (((plchldr_time * 60) + plchldr_secs) - ((plchldr_win * 60) + plchldr_win_sec)) % 60;   //our math system uses a base of 10 while time uses a base of 60
	
	user.setTime(plchldr_time);                                                 //set all our variables into our objects
	user.setSecs(plchldr_secs);
	user.setFps(user_fps);
	user.setMps(user_mps);
	user.setSplit(place_mins);
	user.setSplitSec(sec_split);
	user.setDiffMin(diff_mins);
	user.setDiffSec(diff_secs);
	user.printFunc();                                                           //call the print function making all of the information output to the user
	
	return(0);
}