/* Created By: Chris Eheler
 * Created On: 10/31/2017
 * This program will create the class that contains several array functions and calculations
 */
 
#include<iostream>
using namespace std;

class ArrayTools{
    public:
    void Print();
    int Find_min(int a, int b);
    int Find_max(int a, int b);
    int Find_sum();
    int Search(int num);
    ArrayTools();
    ArrayTools(int array_in[], int size_in );
    
    bool Is_sorted();
    
    private:
    int size;
    int array[];
};

void ArrayTools::Print(){
    for (int i = 0; i < size; i++){
        cout << array[i] << endl;
    }
    return;
}

int ArrayTools::Find_min(int a, int b){
    int numb = array[a];
    
    for (int i = a; i <= b; i++){
        if (array[i] < numb) {
            numb = array[i];
        }
    }
    return numb;
}

int ArrayTools::Find_max(int a, int b){
    int num = array[a];
    for( int i = a; i <= b; i++ ){
        if (array[i] > num){
            num = array[i];
        }
    }
    return num;
}

int ArrayTools::Find_sum(){
    int sum = 0;
    
    for (int i = 0; i < size; i++){
        sum += array[i];
    }
    return sum;
}




ArrayTools::ArrayTools(){
    int num = 0;
    size = 10;
    for ( int i = 0; i < 10; i++){
        array[i] = num;
        ++num;
    }
}

ArrayTools::ArrayTools(int array_in[], int size_in){
    for ( int i = 0; i < size; i++){
        array[i] = array_in[i];
    }
    size = size_in;
}

int ArrayTools::Search(int num) {
    int i = 0;

    for (i = 0; i < size; i++) {
        if (array[i] == num) {
            return i;
        }
    }
    return (0);
}

bool ArrayTools::Is_sorted() {
    int num_order = 0;
    
    for (int i = 0; i < size; i++) {
        if (i == 0) {
            num_order++;
        } else if (array[i] >= array[i-1]) {
            num_order++;
        }
    }
    
    if (num_order == size) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}

int main() {
    const int SIZE = 10;
    int myArray[SIZE];
    
    cout << "Enter an array of 10 integers: " << endl;
    
    for(int i = 0; i < SIZE; i++) {
        cin>>myArray[i];
    }
    ArrayTools a(myArray, SIZE);
    
    a.Print();
    cout<<"Min: "<<a.Find_min(0, 4)<<endl;
    cout<<"Max: "<<a.Find_max(5, 10)<<endl;
    cout<<"Sum = "<<a.Find_sum()<<endl;
    cout<<"Search 10 "<<a.Search(10)<<endl;
    cout<<"Sorted? "<<a.Is_sorted()<<endl;
    
    return 0;
}