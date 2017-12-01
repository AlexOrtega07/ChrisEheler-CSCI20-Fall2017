# makefile example for CSCI 20

#name of the executable file
all: execute

#creates the executable from both the object files
execute: lab52.o class.o 
	g++ -Wall -g -o execute lab52.o class.o

#creates the main object file
exampleObj: lab52.cpp  
	g++ -Wall -g -c lab52.cpp

# creates the class object file
exampleClassObj: class.cpp 
	g++ -Wall -g -c class.cpp	
	
	
# to run the make file, type in make.