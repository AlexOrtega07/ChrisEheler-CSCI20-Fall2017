//Created by: Chris Eheler
//Created on: 10/03/2017
//This program will create classes for books using all of the information provided by the user by utilizing setters and getters

#include <iostream>                                                             //All ecessary includes
#include <string>
using namespace std;

class Book {                                                                    //Create class for books
    public:                                                                     //Public variable only accesing the private varables
    void SetTitle(string bookTitle);
    void SetAuthor(string bookAuthor);
    void SetYear(int bookYear);
    int GetYear();
    string GetAuthor();
    string GetTitle();
    void PrntFunc();
    
    private:
    string BookTitle;
    string BookAuthor;
    int BookYear;
};

void Book::SetTitle(string bookTitle){                                          //Defining functions in the class
    BookTitle = bookTitle;
}

string Book::GetTitle(){
    return BookTitle;
}

void Book::SetAuthor(string bookAuthor){
    BookAuthor = bookAuthor;
}

string Book::GetAuthor(){
    return BookAuthor;
}

void Book::SetYear(int bookYear){
    BookYear = bookYear;
}

int Book::GetYear(){
    return BookYear;
}

void Book::PrntFunc(){
    cout << GetTitle() << endl;
    cout << GetYear() << endl;
    cout << GetAuthor() << endl;
}

int main ()                                                                     //Main program calling the classes and functions
{
    Book book0;                                                                 //Declaring objects
    Book book1;
    Book book2;
    Book book3;
    Book book4;
    string stringss = "WRONG";
    string auther = "WRONGG";
    int userint = 2; 
    
    cout << "Enter the title name for the fist book: " << endl;                 //Assigning avlues and passing them through my class into my objects
    getline(cin, stringss);
    book0.SetTitle(stringss);
    cout << "Enter the authors name for the first book: " << endl;
    getline(cin, auther);
    book0.SetAuthor(auther);
    cout << "Enter the publisher year of the book: " << endl;
    cin >> userint;
    book0.SetYear(userint);
    cout << " " << endl;
    cout << "Book 1 information entered is: " << endl;
    book0.PrntFunc();
    cout << " " << endl;
    cin.ignore();
    
    cout << "Enter the title name for the second book: " << endl;
    getline(cin, stringss);
    book1.SetTitle(stringss);
    cout << "Enter the authors name for the second book: " << endl;
    getline(cin, auther);
    book1.SetAuthor(auther);
    cout << "Enter the publisher year of the second book: " << endl;
    cin >> userint;
    book1.SetYear(userint);
    cout << " " << endl;
    cout << "Book 2 information entered is: " << endl;
    book1.PrntFunc();
    cout << " " << endl;
    cin.ignore();
    
    cout << "Enter the title name for the third book: " << endl;
    getline(cin, stringss);
    book2.SetTitle(stringss);
    cout << "Enter the authors name for the third book: " << endl;
    getline(cin, auther);
    book2.SetAuthor(auther);
    cout << "Enter the publisher year of the third book: " << endl;
    cin >> userint;
    book2.SetYear(userint);
    cout << " " << endl;
    cout << "Book 3 information entered is: " << endl;
    book2.PrntFunc();
    cout << " " << endl;
    cin.ignore();
    
    cout << "Enter the title name for the fourth book: " << endl;
    getline(cin, stringss);
    book3.SetTitle(stringss);
    cout << "Enter the authors name for the fourth book: " << endl;
    getline(cin, auther);
    book3.SetAuthor(auther);
    cout << "Enter the publisher year of the fourth book: " << endl;
    cin >> userint;
    book3.SetYear(userint);
    cout << " " << endl;
    cout << "Book 4 information entered is: " << endl;
    book3.PrntFunc();
    cout << " " << endl;
    cin.ignore();
    
    cout << "Enter the title name for the fifth book: " << endl;
    getline(cin, stringss);
    book4.SetTitle(stringss);
    cout << "Enter the authors name for the fifth book: " << endl;
    getline(cin, auther);
    book4.SetAuthor(auther);
    cout << "Enter the publisher year of the fifth book: " << endl;
    cin >> userint;
    book4.SetYear(userint);
    cout << " " << endl;
    cout << "Book 5 information entered is: " << endl;
    book4.PrntFunc();
   
    return(0);
}

/*
Running /home/ubuntu/workspace/lab25/lab25.cpp
Enter the title name for the fist book: 
The giver
Enter the authors name for the first book: 
dont know
Enter the publisher year of the book: 
1990
 
Book 1 information entered is: 
The giver
1990
dont know
 
Enter the title name for the second book: 
I dont Read Much
Enter the authors name for the second book: 
Can you Tell
Enter the publisher year of the second book: 
1990
 
Book 2 information entered is: 
I dont Read Much
1990
Can you Tell
 
Enter the title name for the third book: 
I also was Born 
Enter the authors name for the third book: 
In 1990
Enter the publisher year of the third book: 
1990
 
Book 3 information entered is: 
I also was Born
1990
In 1990
 
Enter the title name for the fourth book: 
I just Want To Make Sure This Works 
Enter the authors name for the fourth book: 
Jesus
Enter the publisher year of the fourth book: 
1990
 
Book 4 information entered is: 
I just Want To Make Sure This Works
1990
Jesus
 
Enter the title name for the fifth book: 
Title
Enter the authors name for the fifth book: 
Author
Enter the publisher year of the fifth book: 
1990
 
Book 5 information entered is: 
Title
1990
Author
*/