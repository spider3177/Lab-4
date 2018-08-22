// first include the library
#include <iostream>
#include <cstring>
using namespace std;
int main(){
// informing about the converter
cout << " TRIANGLE 3RD ANGLE CALCULATOR"<< endl;
// declaring the variable
 int A,B,C;
 
// asking the variable
cout << " Dear Sir,\n What is the first angle that you want to take?" <<endl;
cin >> A;
cout << " Dear Sir, \n What is the second angle that you want to take?" << endl;
cin >> B;

// assigning the formula
C= 180-(A+B);
// giving the answer
cout<< " The third angle is " << C << endl; 
return 0;
}
