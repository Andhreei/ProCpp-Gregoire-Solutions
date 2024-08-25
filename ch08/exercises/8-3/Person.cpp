#include "Person.hpp"

#include <ostream>
#include <print>
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

Person::Person(const Person& src)
		: m_first_name { src.m_first_name }
		, m_last_name { src.m_last_name }
{
	std::println("Copy constructor called");
}

Person& Person::operator=(this Person& self, const Person& rhs)
{
	std::println("Copy assignment operator called");
	/* self assignment check */
	if (&self == &rhs)
	{
		return self;
	}
	self.m_first_name = rhs.m_first_name;
	self.m_last_name	= rhs.m_last_name;
	return self;
}

Person::~Person()
{
	/* Nothing to do because we do not have any raw pointers allocated on free
	 * store */
	std::println("Destructor called");
}

std::ostream& operator<<(std::ostream& output, const Person& obj)
{
	std::println(output, "first name '{}', last name: '{}' ", obj.m_first_name,
							 obj.m_last_name);
	return output;
}

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
