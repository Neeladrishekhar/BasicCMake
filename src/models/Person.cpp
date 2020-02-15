#include<Person.h>
#include<OkHelper.h>
#include<iostream>

Person::Person(int ag, int yearsLef) {
	age = ag; yearsLeft = yearsLef;
}

int Person::finish() {
	OkHelper oh;
	std::cout << age << " pen " << yearsLeft << std::endl;
	return oh.add(age, yearsLeft);
}