// First include the library
#include <iostream>
#include <cstring>
using namespace std;

int main(){
// declaring the variable
 float i;
 float met;
 float km ;
// ask the person what is the length he wants to take
 cout << " what is the length in cm? " ;
 cin >> i;
// assigning the variables acc. to its unit
met = i/100;
km = i/100000;
// converting the variable
 cout << " the length you entered is " << i<< "cm"<< endl;
 cout << i << "cm = " <<  met<< "m = " << km << "km"<< endl;

 return 0;
}
  
