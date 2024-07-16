#include <iostream>
using namespace std;

int multiply(int num1, int num2, int num3);
int value1 = 27;
int value2 = 39;
int value3 = 42;

int main()
{
	int productResult = multiply(value1, value2, value3);
	cout << "The solution for multiplying " << value1 << " * " << value2 << " * " << value3 << " is: " << productResult << endl;

	return 0;
}

int multiply(int num1, int num2, int num3)
{
	return num1 * num2 * num3;
}