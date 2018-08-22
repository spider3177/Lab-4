// first include the library
#include <iostream>
#include <cstring>
using namespace std;
int main(){
// informing the user about the calculator
cout << "!!! THE TRINGLE AREA CALCULATOR!!!" << endl;

// declaring the variable
int b,h,A;
// asking the user for the variable
cout<< " What is the base of the triangle ?"<< endl;
cin>> b;
cout << "\nWhat is the height of the triangle ?"<< endl;
cin >> h;
// declaring the formula
A=(b*h)/2;
// giving the answer
cout<< " The area of the triangle is = "<< A<<"squnits"<< endl; 
return 0;
}
