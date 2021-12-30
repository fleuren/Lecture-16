#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string expCalc (int eCalc)
{
cout << "Exponents" << endl;
	int e = 10; // exponent range, will be decremented to 5
	do{
	cout << eCalc << "^" << e << " = " << pow (eCalc,e) << endl;
	e--;
	}while (e > 0);

}

string rootCalc(int rCalc)
{
	cout << "Roots" << endl;
	int r = 10; 
	do{
	cout << r << "rt" << rCalc << " = " << sqrt (r) << endl;
	r--;
	}while (r > 0);
}

int main()
{
	int input;
	cout << "Please input a value: ";
	cin >> input;
	cout << rootCalc(input) << endl;
	cout << expCalc(input) << endl;
	return 0;
}