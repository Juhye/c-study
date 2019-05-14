#include "personmanager.h"



Personmanager::Personmanager()
{
}


Personmanager::~Personmanager()
{
}

void Personmanager::addperson(Person person)
{
	people.push_back(person);
}

Person Personmanager::searchPerson(string name)
{
	for (Person p : people) {
		if (p.getname() == name) {
			return p;
		}
	}
	return Person("", "", "");//null¿Ã¥Á
}

list<Person> Personmanager::getPeople()
{
	return people;
}
