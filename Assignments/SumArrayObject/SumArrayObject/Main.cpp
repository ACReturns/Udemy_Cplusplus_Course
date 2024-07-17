#include <iostream>
#include <array>
using namespace std;

int sumArray(array<int, 10> theArray);

int main()
{
	array<int, 10> primaryArray{ 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
	int theResult = sumArray(primaryArray);
	cout << "The result is " << theResult << endl;

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