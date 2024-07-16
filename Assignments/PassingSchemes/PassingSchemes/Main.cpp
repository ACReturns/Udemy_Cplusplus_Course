#include <iostream>
using namespace std;

void valueChanged1(int someNum);
void valueChanged2(int& someNum);
void threeTimesN(int input, int& output);

int main()
{
	int myNumber = 20;
	int result = 0;

	cout << "Before valueChanged call, myNumber is " << myNumber << endl;
	valueChanged1(myNumber);
	cout << "After valueChanged call, myNumber is " << myNumber << endl;

	cout << "Before valueChanged1 call, myNumber is " << myNumber << endl;
	valueChanged2(myNumber);
	cout << "After valueChanged1 call, myNumber is " << myNumber << endl;

	cout << "Before threeTimesN call, myNumber is " << myNumber << endl;
	threeTimesN(myNumber, result);
	cout << "After threeTimesN call, myNumber is " << result << endl;

	return 0;
}

void valueChanged1(int someNum)
{
	someNum = 100;
	cout << "someNum in valueChanged is " << someNum << endl;
}

void valueChanged2(int& someNum)
{
	someNum = 100;
	cout << "someNum in valueChanged1 is " << someNum << endl;
}

void threeTimesN(int input, int& output)
{
	output = input * 3;
	cout << "Result of " << input << " * 3 = " << output << endl;
}