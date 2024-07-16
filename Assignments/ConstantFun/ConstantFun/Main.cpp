#include <iostream>
#include <string>

using namespace std;

int main()
{
	const double MY_PI = 3.14159;
	const string MY_NAME = "Don";

	//MY_NAME = "No"; Can't redefine a const so this errors out
	cout << MY_NAME << endl;

	return 0;
}