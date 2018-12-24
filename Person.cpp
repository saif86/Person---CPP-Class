/**
* @file Person.cpp
*
* @brief C++ Program to demostrate Person class.
*
* @author Saif Ullah Ijaz
*
*/

// SYSTEM INCLUDES
#include <iostream> 
#include <string>
using namespace std;

// Person class definition
class Person {
public:
// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	Person(const string& = "X", const string& = "X",  int = 0);

// OPERATIONS
	/** function that displays the Person.
	*
	* @param void
	*
	* @return void
	*/
	void DisplayPerson()const;

// ACCESS
	// setters
	void SetFirstName(const string& = "X");
	void SetLastName(const string& = "X");
	void SetZIPCode(int = 0);
	void SetPerson(const string& = "X", const string& = "X", int = 0);
	/**
	# @overload void SetPerson(const Person& aPerson);
	*/
	void SetPerson(const Person& aPerson);

	// getters
	const string& GetFirstName() const;
	const string& GetLastName() const;
	int GetZIPCode() const;
	const Person& GetPerson()const;

private:

// DATA MEMBERS
	string mFirstName;
	string mLastName;
	int mZIPCode;
};
// end class Person

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// Person Default+Overloaded Constructor
Person::Person(const string& aFirstName, const string& aLastName, int aZIPCode) :  mFirstName(aFirstName), mLastName(aLastName), mZIPCode(aZIPCode){
	this->SetPerson(aFirstName, aLastName, aZIPCode);
}
// end Person constructor 

//============================= OPERATIONS ===================================
// function that displays the Person.
void Person::DisplayPerson() const {
	cout << "Last Name: " << this->GetFirstName() << endl;
	cout << "First Name: " << this->GetLastName() << endl;
	cout << "ZIP Code: " << this->GetZIPCode() << endl << endl;
}
// end function DisplayPerson

//============================= ACESS      ===================================

// function that sets Fist Name of Person
void Person::SetFirstName(const string& aFirstName) {
	this->mFirstName = aFirstName;
}
// end function SetFirstName

// function that sets Last Name of Person
void Person::SetLastName(const string& aLastName) {
	this->mLastName = aLastName;
}
// end function SetLastName

// function that sets Zip Code
void Person::SetZIPCode(int aZIPCode) {
	this->mZIPCode = aZIPCode;
}
// end function SetZIPCode

// function that sets Person
void Person::SetPerson(const string& aFirstName, const string& aLastName, int aZIPCode) {
	this->SetFirstName(aFirstName);
	this->SetLastName(aLastName);
	this->SetZIPCode(aZIPCode);
}
// end function SetPerson

// function that sets the Person
void Person::SetPerson(const Person &obj) {
	this->SetPerson(obj.GetFirstName(), obj.GetLastName(), obj.GetZIPCode());
}
// end function SetPerson

// function that gets Fist Name of Person
const string& Person::GetFirstName() const {
	return (this->mFirstName);
}
// end function GetFirstName

// function that gets Last Name of Person
const string& Person::GetLastName() const {
	return this->mLastName;
}
// end function GetLastName

// function that gets Zip Code
int Person::GetZIPCode() const {
	return this->mZIPCode;
}
// end function GetZIPCode

// function that gets the Person
const Person& Person::GetPerson()const {
	return *this;
}
// end function GetPerson

/////////////////////////////// MAIN   ///////////////////////////////////////

// function main begins program execution
void main() {
	Person p1, p2("Ijaz", "Saif", 922);

	p1.DisplayPerson();
	p2.DisplayPerson(); 
	
	system("pause");
}
// end main 
