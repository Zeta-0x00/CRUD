#pragma once
#ifndef PERSON_H
#define PERSON_H
#include <string>
class Person
{
	//region Properties
	int ID;
	std::string Name;
	std::string LastName1;
	std::string LastName2;
	int BornDate[3];
	//end region
public:
	Person(int &id, std::string &name, std::string &lastname1,std::string &lastname2, int born[] );
	//region Methods
		//region Gets
			int getID();
			std::string getName();
			std::string getLastName1();
			std::string getLastName2();
			std::string getBorn();
		//end region
		//region Sets
			void setID(int& ced);
			void setName(std::string&name);
			void setLastName1(std::string& lastname);
			void setLastName2(std::string& lastname);
			void setBorn(int born[]);
		//end region
	//end region
	~Person();
};


#endif // !PERSON_H
