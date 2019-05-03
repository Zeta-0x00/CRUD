#include "Person.h"



Person::Person(int& id, std::string& name, std::string& lastname1, std::string& lastname2, int born[])
{
	this->ID = id; this->Name = name; this->LastName1 = lastname1; this->LastName2 = lastname2;
	this->BornDate[0] = born[0]; this->BornDate[1] = born[1]; this->BornDate[2] = born[2];
}


//region Gets
int Person::getID() { return this->ID; }
std::string Person::getName() { return this->Name; }
std::string Person::getLastName1() { return this->LastName1; }
std::string Person::getLastName2() { return this->LastName2; }
std::string Person::getBorn() { return std::to_string(this->BornDate[0])+"/" + std::to_string(this->BornDate[1])+ "/" + std::to_string(this->BornDate[2]); }
//end region


//region Sets
void Person::setID(int&ced) { this->ID = ced; }
void Person::setName(std::string& name) { this->Name = name; }
void Person::setLastName1(std::string&lastname) { this->LastName1 = lastname; }
void Person::setLastName2(std::string&lastname) { this->LastName2 = lastname; }
void Person::setBorn(int born[]) { this->BornDate[0] = born[0]; this->BornDate[1] = born[1]; this->BornDate[2] = born[2]; }
//end region

Person::~Person()
{
}
