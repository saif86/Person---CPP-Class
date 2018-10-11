#include<iostream>

using std::cout;
using std::endl;
using std::cin;

class Person {
	char *LastName;
	char *FirstName;
	int ZIPCode;
public:
	Person(char *, char *, int);
	void displayPerson();
};

Person::Person(char *LName = "X", char *FName = "X", int ZCode = 0) {
	LastName = LName;
	FirstName = FName;
	ZIPCode = ZCode;
}

void Person::displayPerson() {
	cout << "Last Name: " << LastName << endl;
	cout << "First Name: " << FirstName << endl;
	cout << "ZIP Code: " << ZIPCode << endl;
}

void main()
{
	Person p1, p2("Ijaz", "Saif", 922);

	p1.displayPerson();
	p2.displayPerson();

	system("pause");
}