#include <iostream>
#include <string>

using namespace std;

int main()
{
	int age = 15;
	cout << age << endl;

	if (age > 16)
	{
		cout << "You can drive!" << endl;
	}
	else
	{
		cout << "You can't drive yet!" << endl;
	}

	for (int i = 1; i <= age; i++)
	{
		cout << "Happy Birthday! You are " << i << " years old!" << endl;
	}

	return 0;
}