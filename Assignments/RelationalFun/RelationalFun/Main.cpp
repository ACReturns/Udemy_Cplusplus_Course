#include <iostream>

using namespace std;

/*
	> greater than
	>= greater than or equal to
	< less than
	<= less than or equal to
	== equal-to (equality)
	!= not-equal-to (equality)
*/
int main()
{
	cout << boolalpha;

	int a = 15;
	int b = 20;
	bool areEqual = a == b;
	int age = 39;

	cout << (a < b) << endl;
	cout << areEqual << endl;
	cout << "Age is greater than 21? " << (age >= 21) << endl;
	return 0;
}