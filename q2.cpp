// first include the library
#include <iostream>
#include <cstring>
using namespace std;
// declaring the variables
int main(){
	float C,F;
// informing the user what he or she is using
	cout << " THE EXPERT CELSIUS TO FARENHIT CONVERTER!!!"<< endl;
// asking the user the temperature
	cout << "\n Dear Sir,\n What is the temperature in celsius  which you want to convert into farenhit??\n"<< endl;
	cin >> C;
// declaring the formula to convert
	F= (5*(C-32))/9;
// showing the output
	cout<< C<< " C = " << F << "F"<< endl;
return 0;
}
