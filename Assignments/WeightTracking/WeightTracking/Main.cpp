#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	const int NUM_PEOPLE = 5;
	vector<string> names;
	vector<int> weights;
	string tempName;
	int tempWeight;

	for (int i = 0; i < NUM_PEOPLE; i++)
	{
		cout << "Please enter your name:" << endl;
		getline(cin, tempName);

		cout << "Please enter " << tempName << "'s weight." << endl;
		cin >> tempWeight;
		cin.get(); // consume new line character

		names.push_back(tempName);
		weights.push_back(tempWeight);
	}

	cout << endl << endl;

	for (int i = 0; i < NUM_PEOPLE; i++)
	{
		cout << names[i] << " weighs " << weights[i] << " lbs" << endl;
	}

	return 0;
}