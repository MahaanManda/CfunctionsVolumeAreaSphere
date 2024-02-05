/*Write a program that defines the named constant PI, const double PI = 3.14159;, 
which stores the value of π. 
The program should use PI and the functions listed in Table 6-1 to accomplish the following:

Output the value of √π.

Prompt the user to input the value of a double variable r, which stores the radius of a sphere. 
The program then outputs the following:

The value of , which is the surface area of the sphere.

The value of , which is the volume of the sphere.*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){

    //variables
    double r;

    //defines the named constant PI, const double PI = 3.14159; which stores the value of π. 
    const double PI = 3.14159;

    //Output the value of √π.
    cout << "The square root of PI is "<< sqrt(PI) << endl;

    //Prompt the user to input the value of a double variable r, which stores the radius of a sphere.
    cout << "Enter the radius of a sphere: ";
    cin >> r;

    //The program then outputs the following: 
    //The value of , which is the surface area of the sphere. 
    cout << "The surface area of the sphere is " << 4.0 * PI * pow(r,2) << endl;
    cout << "The volume of the sphere is " << (4.0/3.0) * PI * pow(r,3) << endl;

    //The value of , which is the volume of the sphere.*/
    return 0;
}