#include <iostream>
#include <string>

using namespace std;

int main()
{
	float numOne;
	float numTwo;
	float numThree;
	float average;

	cout << "Please enter the first number" << endl;
	cin >> numOne;

	cout << "Please enter the second number" << endl;
	cin >> numTwo;

	cout << "Please enter the third number" << endl;
	cin >> numThree;

	average = (numOne + numTwo + numThree) / 3;
	cout << "The average of the numbers is " << average << endl;
	return 0;
}