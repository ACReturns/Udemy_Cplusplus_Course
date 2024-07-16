#include <iostream>
#include <string>

using namespace std;

int main()
{
	string adjective1;
	string girlsName;
	string adjective2;
	string occupation1;
	string placeName;
	string clothing;
	string hobby;
	string adjective3;
	string occupation2;
	string boysName;
	string mansName;

	cout << "Please enter an adjective" << endl;
	getline(cin, adjective1);

	cout << "Please enter a girls name" << endl;
	getline(cin, girlsName);

	cout << "Please enter another adjective" << endl;
	getline(cin, adjective2);

	cout << "Please enter an occupation" << endl;
	getline(cin, occupation1);

	cout << "Please enter a place name" << endl;
	getline(cin, placeName);

	cout << "Please enter a piece of clothing (plural)" << endl;
	getline(cin, clothing);

	cout << "Please enter a hobby" << endl;
	getline(cin, hobby);

	cout << "Please enter one more adjective" << endl;
	getline(cin, adjective3);

	cout << "Please enter another occupation" << endl;
	getline(cin, occupation2);

	cout << "Please enter a boys name" << endl;
	getline(cin, boysName);

	cout << "Please enter a mans name" << endl;
	getline(cin, mansName);

	cout << "There once was a " << adjective1 << " girl named " << girlsName << " who was a " 
		<< adjective2  << " " << occupation1 << " in the Kingdom of " << placeName << ". She loved to wear " 
		<< clothing  << " and " << hobby << ". She wanted to marry the " << adjective3 << " " << occupation2 << " named "
		<< boysName << " but her father, King " << mansName << " forbid her from seeing him." << endl;
	return 0;
}