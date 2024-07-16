#include <iostream>

using namespace std;

void printSomething();
void printMyName();


int main()
{
	printSomething();
	printMyName();

	return 0;
}

void printSomething()
{
	cout << "Hey! Printing a function!" << endl;
}

void printMyName()
{
	cout << "Don Smith" << endl;
}