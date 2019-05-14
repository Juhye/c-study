#include "Person.h"



Person::Person(string name, string phnum,  string address)
{
	this->name = name;
	this->phnum = phnum;
	this->address = address;
}

string Person::getname()
{
	return name;
}


string Person::getaddress()
{
	return address;
}

string Person::getphnum()
{
	return phnum;
}

string Person::greeting()
{
	return name+""+phnum+""+address;
}

Person::~Person()
{
}
