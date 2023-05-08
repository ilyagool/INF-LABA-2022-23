#include <iostream>
#include "Student.h"
#include <string>

Student::Student()
{
	Name = "";
	Age = 0;
	Year = 0;
}
Student::Student(std::string name, int age, int year)
{
	Name = name;
	Age = age;
	Year = year;
}
Student::~Student() {};
Student::Student(Student& t)
{
	Name = t.Name;
	Age = t.Age;
	Year = t.Year;
}
void Student::setYear(int year)
{
	Year = year;
}
int Student::getYear()
{
	return Year;
}
int Student::increase_year_of_study()
{
	return (Year + 3);
}
std::istream& operator>>(std::istream& in, Student& t)
{
	std::cout << "Ãîä îáó÷åíèÿ: "; in >> t.Year;
	return in;
}
std::ostream& operator<<(std::ostream& out, const Student& t)
{
	return (out << "Èìÿ: " << t.Name << "\n" << "Âîçðàñò: " << t.Age << "\n" << "Ãîä îáó÷åíèÿ: " << t.Year << "\n");
}
Student& Student::operator=(const Student& t)
{
	if (&t == this)
	{
		return *this;
	}
	Year = t.Year;
	return *this;
}
void Student::Show()
{
	std::cout << "Èìÿ: " << Name << "\n" << "Âîçðàñò: " << Age << "\n" << "Ãîä îáó÷åíèÿ: " << Year << "\n";
}