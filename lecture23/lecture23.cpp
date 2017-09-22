
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/* Compute Sphere uses the equation to calculate the volume of a sphere based on radius.
   Input: Accepts a single integer for radius.
   Output: None */
void ComputeSphere(int);                                                                                    //Defineing functions

/* Compute Box uses the equation to calculate the volume of a cube based on length height and width.
   Input: Accepts a three integers for measurments.
   Output: None */
void ComputeBox(int, int, int);

/* Compute Pyramid uses the equation to calculate the surface area of a triangle using height and length.
   Input: Accepts a two integers for measurments.
   Output: None */
void ComputePyramid(int, int);

int main()
{
    int length = 1;                                          // initializing input
    int width = 1;
    int height = 1;

    ComputeSphere(length);                                  
    ComputeBox(length, width, height);
    ComputePyramid(length, height);

    cin>>length>>width>>height;                             // Gather input
    
    ComputeSphere(length);
    ComputeBox(length, width, height);
    ComputePyramid(length, height);
}

void ComputeSphere(int l){                               // use the funtion to caluculate the volumes / surface areas
    double v = (4.0/3) * 3.14 * (l * l * l               // functions are being called here as well as in the lower two calls
    cout<<"The volume of a sphere is "<<v<<endl;
}

void ComputeBox(int l, int w, int h){
    double v = l * w * h;
    cout<<"The volume of a rectangular box is "<<v<<endl;
}

void ComputePyramid(int l, int h){
    double v = (1.0/3) * l * h;
    cout<<"The volume of a pyramid is "<<v<<endl;
} 

//Appropriately comment all of the functions.  Make a note to identify the paramters and input.
//Comment the main function as if it was pseudocode.
//   make note of where the functions are called and the arguments.
