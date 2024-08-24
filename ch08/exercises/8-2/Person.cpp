#include "Person.hpp"

#include <string>
#include <string_view>

Person::Person()
		: m_first_name { "Ungiven first name" }
		, m_last_name { "Ungiven last name" }
{}

Person::Person(std::string_view first_name, std::string_view last_name)
		: m_first_name { first_name }
		, m_last_name { last_name }
{}

std::string Person::getFirstName() const
{
	return m_first_name;
}

std::string Person::getLastName() const
{
	return m_last_name;
}

void Person::setFirstName(this Person& self, std::string_view first_name)
{
	self.m_first_name = first_name;
}

void Person::setLastName(this Person& self, std::string_view last_name)
{
	self.m_last_name = last_name;
}
