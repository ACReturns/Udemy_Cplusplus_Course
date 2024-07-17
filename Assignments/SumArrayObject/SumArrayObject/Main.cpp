#include <iostream>
#include <array>
using namespace std;

int sumArray(array<int, 10> theArray);
void sumArray(array<int, 10> theArray, int& storeSum);

int main()
{
	int sumReturn;
	array<int, 10> primaryArray{ 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
	int theResult = sumArray(primaryArray);
	sumArray(primaryArray, sumReturn);

	cout << "The result is " << theResult << endl;
	cout << "The result is " << sumReturn << endl;

	return 0;
}

int sumArray(array<int, 10> theArray)
{
	int sum = 0;

	for (int item : theArray)
	{
		sum += item;
	}

	return sum;
}

void sumArray(array<int, 10> theArray, int& storeSum)
{
	storeSum = sumArray(theArray);
}