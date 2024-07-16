#include <iostream>
#include <string>

using namespace std;

int main()
{
	int age;
	string fullName;
	string secondName;
	string locationName;
	int initialScore;

	cout << "Please enter your name: " << endl;
	getline(cin, fullName);
	
	cout << "Please enter your age: " << endl;
	cin >> age;

	cout << "Hi " << fullName << endl;
	cout << "Looks like you are " << age << " years old!" << endl;

	cout << "Please enter your name Player two: " << endl;
	getline(cin, secondName);
	cin.get();

	cout << "Please enter your city, state and country:" << endl;
	getline(cin, locationName);
	cin.get();

	cout << "give me a number between 1 & 100" << endl;
	cin >> initialScore;
	cin.get();

	cout << "Hi, " << secondName << "! We heard you are from " << locationName <<
		". Your starting score is " << initialScore + 5 << endl;

	return 0;
}