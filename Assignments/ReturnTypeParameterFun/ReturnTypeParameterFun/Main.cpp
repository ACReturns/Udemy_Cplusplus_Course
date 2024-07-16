#include <iostream>
using namespace std;

void printHello();
void printNumber(int number);
int giveMe10();
int addThese(int num1, int num2);
int square(int num);

int main()
{
	int num1 = 120;
	int num2 = 580;
	int num3 = 5;

	printHello();
	printNumber(100);

	int someData = giveMe10();
	cout << someData << endl;

	int totalValue = addThese(num1, num2);
	cout << totalValue << endl;

	cout << "square of the last number is " << square(num3) << endl;

	return 0;
}

void printHello()
{
	cout << "Hi!" << endl;
}

void printNumber(int number)
{
	cout << "The number is " << number << endl;
}

int giveMe10()
{
	return 10;
}

int addThese(int num1, int num2)
{
	return num1 + num2;
}

int square(int num)
{
	return num * num;
}