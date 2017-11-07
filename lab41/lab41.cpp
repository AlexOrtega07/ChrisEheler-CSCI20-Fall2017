/* Created By: Chris Eheler
 * Created On: 10/31/2017
 * This program will create the class that contains several array functions and calculations
 */
 
#include<iostream>
using namespace std;

class ArrayTools{                                                               // Array class that contains all of the calculations and two constructors
    public:
    ArrayTools();
    ArrayTools(int array_in[], int size_in );
    void const Print();
    int Find_min(int a, int b);
    int Find_max(int a, int b);
    int Find_sum();
    int Search(int num);
    int Find_even();
    int Find_odd();
    bool Is_sorted();
    
    private:                                                                    // The two variables used by the calculations in the public
    int size;
    int array[];
};

ArrayTools::ArrayTools(){                                                       // Default constructor that is made to default the size as 10 and then  a loop to populate the default array
    int num = 0;
    size = 10;
    for ( int i = 0; i < size; i++){
        array[i] = num;
        num++;
    }
}

ArrayTools::ArrayTools(int array_in[], int size_in) {                           // Overload constructior for if the user inputs two intigers that sets the size as well as the array starting point
   size = size_in;
    for (int i = 0; i < size; i++) {
        array[i] = array_in[i];
    }
}

void const ArrayTools::Print(){                                                 // A for loop that prints out the array with a space in between the stored values
    for (int i = 0; i < size ; i++){                                            // changed from an endl at the end of each because this is easier to read
        cout << array[i] << " ";
    }
    
    cout << " " << endl;
    
}

int ArrayTools::Find_min(int a, int b){                                         // Loops through the array and sets the lowest number number in the array as the num variable and returns it
    int numb = array[a];
    
    for (int i = a; i <= b; i++){
        if (array[i] < numb) {
            numb = array[i];
        }
    }
    return numb;
}

int ArrayTools::Find_max(int a, int b){                                         // Loops through the array and sets the biggest number to the num variabel then returns is
    int num = array[a];
    for( int i = a; i <= b; i++ ){
        if (array[i] > num){
            num = array[i];
        }
    }
    return num;
}

int ArrayTools::Find_sum(){                                                     // Loops through the array and adds each itteration to a variable called sum then returns that value
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += array[i];
    }
    return sum;
}


int ArrayTools::Search(int num) {                                               // Loops through the array and searches for a num that is inputed then returns it if the num is in the array
    int i = 0;

    for (i = 0; i < size; i++) {
        if (array[i] == num) {
            return i;
        }
        
    }
    return num;
}

bool ArrayTools::Is_sorted() {                                                  // Uses a decision tree to find out if the array is in numeric order and returns triue if it is and false if it is not
    int num_order = 0;
     
    for (int i = 0; i < size; i++) {
        if (i == 0) {
            num_order++;
        } else if (array[i] >= array[i-1]) {
            num_order++;
        }
    }
    
    if (num_order == size) {
        cout << " Yes ";
    } else {
        cout << " No ";
    }
}

int ArrayTools::Find_even() {                                                   // Loops and uses modulo operation to determine rather a number is even and returns the nmumber of even numbers found
    int even = 0;
    
    for (int i = 0; i < size; i++) {
        if ((array[i] % 2) == 0) {
            even++;
        }
    }
    return even;
}


int ArrayTools::Find_odd() {                                                    // Loops and uses modulo operation to determine rather a number is odd and returns the nmumber of odd numbers found
    int odd = 0;
    
    for (int i = 0; i < size; i++) {
        if ((array[i] % 2) == 1) {
            odd++;
        }
    }
    return odd;
}

int main() {
    const int Size = 10;                                                        // Supplied main that tests the class and array functions
    int myArray[Size];
    
    cout << "Enter an array of 10 integers: " << endl;
    
    for(int i = 0; i < Size; i++) {
        cin>>myArray[i];
    }
    ArrayTools a(myArray, Size);
    
    a.Print();
    cout<<"Min: "<<a.Find_min(0, 4)<<endl;
    cout<<"Max: "<<a.Find_max(5, 10)<<endl;
    cout<<"Sum = "<<a.Find_sum()<<endl;
    cout<<"Search 10 "<<a.Search(10)<<endl;
    cout<<"Sorted? "<<a.Is_sorted()<<endl;
    
    return 0;
}