#include <iostream> 
#include <iostream> 
#include <cstring> 
using namespace std;   

int main() {
    int nameLength = 0;                                                         // set an intiger to the value of 0
    char * name = new char[];                                                   // create a pointer called name and point it at a new array called char[]

    cout << "Please enter a 10 letter word or less" << endl;                    // print out "Please enter a 10 letter word or less" ending with a new line
    cin >> name;                                                                // read in a value and assign it to the location name is pointing to

    char * head  = name;                                                        // create a char pointer and point call it head pointing it at the location of name
    char * tail = name;                                                         // create a char pointer ( tail ) and point it at the location of name 
    nameLength = strlen(*name);                                                 // assign nameLength to the length of the string stored at the memory location name

    cout << "Your word is " << firststr << endl;                                // print out the string "Your word is " followed by the variable firststr

    if (nameLength<10)                                                          // if the variable nameLength is less than 10
    {
         while (*head != '\0')                                                  // while the value stored in memory location head is pointing at is not null
         {
                cout << *head;                                                  // print out what is stored at the location head is pointing to
                head++;                                                         // increment the pointer head
         }
     }
     else
     {
          cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;                  // print out "WARNING WORD TOO BIG TO DISPLAY!!" and end with a new line if the word wont fit in the array
     }

     cout << endl;                                                              // print a new line

     tail = &name[strlen(name) - 1];                                            // point tail to the memory location in the array that was previously printed out on line 23

     if (nameLength < 10)                                                       //  if the variable nameLength is less than 10
     {
          while (tail != name)                                                  // while tail is pointed at something other than name
          {
                 cout << *tail;                                                 // print out what is stored in the location of tail
                 tail--;                                                        // decramenting pointer tail
          }
     }
     cout << endl;                                                              // print a new line

     head = name;                                                               // point head at the memory location of the variable name
     tail = &name[strlen(name) - 1];                                            // point tail at the array location minus one
     
     head++;                                                                    // increment head
     tail--;                                                                    // decreemnt head

     if (*head == *tail)                                                        // if head and tail are both pointing at a memory location storing the same variable
     {
         cout << "It is an palindrome!" << endl;                                // print out "It is an palindrome!" ending with an endline
     }
     else                                                                       // otherwise
     {
         cout << "It is not an palindrome" << endl;                             // print out "It is not an palindrome" ending with a new line
     }

     return 0;                                                                  // return a 0 for error checking
}