#include "Person.hpp"

#include <algorithm>
#include <cctype>
#include <format>
#include <ostream>
#include <print>
#include <string>
#include <string_view>

Person::Person()
		: Person { "Ungiven first name", "Ungiven last name" }
{}

Person::Person(std::string_view first_name, std::string_view last_name)
		: Person { first_name, last_name,
							 std::format("{}{}", first_name[0], last_name[0]) }
{}

Person::Person(std::string_view first_name, std::string_view last_name,
							 std::string initials)
		: m_first_name { first_name }
		, m_last_name { last_name }
		, m_initials { initials }
{
	std::transform(m_initials.begin(), m_initials.end(), m_initials.begin(),
								 ::toupper);
}

std::ostream& operator<<(std::ostream& output, const Person& obj)
{
	std::println(output, "first name '{}', last name: '{}', initials: '{}' ",
							 obj.m_first_name, obj.m_last_name, obj.m_initials);
	return output;
}

const std::string& Person::getFirstName() const
{
	return m_first_name;
}

const std::string& Person::getLastName() const
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
