#include <iostream>
using namespace std;

int sumArray(int myArray[], int count);

int main()
{
	int numArray[]{5, 17, 29, 39, 42, 55, 79, 93};
	int sum = sumArray(numArray, 8);
	cout << "Sum of the elements in numArray is " << sum << endl;

	return 0;
}

int sumArray(int myArray[], int count)
{
	int sum = 0;

	for (int i = 0; i < count; i++)
	{
		sum += myArray[i];
	}

	return sum;
}