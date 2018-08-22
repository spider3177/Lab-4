// First include the library
#include <iostream>
#include <cstring>
using namespace std;
int main(){
// inform the user about the temperature converter
 cout << "!!! THE GREAT TEMPERATURE CONVERTER!!!\n" << endl;

// declare the variables
 float C,F;
// ask the user for temperature variable
 cout<< " Dear Sir, \n What is the temperature in farenhit, that you want to convert into celsius??\n" << endl;
cin>> F;
// declare the conversion formula
C=((9*F)/5)+32;

// give the answer

cout << F << " F= " << C << " C" << endl; 
return 0;
}
