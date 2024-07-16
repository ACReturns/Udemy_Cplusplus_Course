#include <iostream>

using namespace std;

/*
	Arithmetic operators:
	+ additional operator
	- subtraction operator
	* multiplication operator
	/ division operator
	% modulus operator
*/
int main()
{
	int a = 10;
	int b = 3;
	int sum = a + b;
	int difference = a - b;
	int product = a * b;
	int quotient = a / b;
	int remainder = a % b;
	int result = 10;
	int myInt = 5;
	int myNum = 10;

	result += 10; // result = result + 10

	cout << "Sum = " << sum << endl;
	cout << "Difference = " << difference << endl;
	cout << "Product = " << product << endl;
	cout << "Quotient = " << quotient << endl;
	cout << "Remainder = " << remainder << endl;
	cout << "Result = " << result << endl;

	cout << myInt << endl;
	myInt++; // increase operand by 1 | similar to myInt += 1 | myInt = myInt + 1;
	cout << myInt << endl;

	cout << "MyNum = " << myNum << endl;
	myNum += 5;
	cout << "MyNum = " << myNum << endl;
	myNum *= 2;
	cout << "MyNum = " << myNum << endl;
	myNum *= 2;
	cout << "MyNum = " << myNum << endl;
	myNum *= 2;
	cout << "MyNum = " << myNum << endl;

	return 0;
}