#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;
std::string type_name()
{

}

void printNumber(int* numberPtr)
{
	cout << *numberPtr << endl;
}

void printLetter(char* letterPtr)
{
	cout << *letterPtr << endl;
}

void print(void* ptr, char type)
{
	switch (type)
	{
	case 'int':
		// handle int pointer
		cout << *((int*)ptr) << endl;
		break;
	case 'c':
		cout << *((char*)ptr) << endl;
		break;
	case 'd': 
		cout << *((double*)ptr) << endl;
		break;
	}
}

int main()
{
	string sword = "Broad Sword";
	string* ptr = &sword;

	cout << &sword << endl;
	cout << ptr << endl;
	// de-referencing pointer
	cout << *ptr << endl;

	// adjusting the pointer data
	*ptr = "Heavenly Sword";
	cout << *ptr << endl;
	// The adjustment also affects the original string
	cout << sword << endl;

	// Void pointer
	int number = 5;
	char letter = 'a';

	//printNumber(&number);
	//printLetter(&letter);
	cout << typeid(number).name() << endl;
	print(&number, (char)typeid(number).name());
	print(&letter, 'c');
}

