#include <iostream>
#include <string>
using namespace std;

int getResult(int num1, int num2);
string getResult(string str1, string str2);
double getResult(double dbl1);

int main()
{
	int resultNum = getResult(30, 20);
	string nameResult = getResult("Don", "Smith");
	double doubleResult = getResult(3.14);

	cout << "Result num is " << resultNum << endl;
	cout << "Result name is " << nameResult << endl;
	cout << "Result double is " << doubleResult << endl;
	return 0;
}

int getResult(int num1, int num2)
{
	return num1 * num2;
}

string getResult(string str1, string str2)
{
	return str1 + " " + str2;
}

double getResult(double dbl1)
{
	return dbl1 * dbl1 * dbl1;
}