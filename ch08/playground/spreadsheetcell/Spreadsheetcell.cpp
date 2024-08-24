#include "Spreadsheetcell.hpp"

#include <charconv>
#include <cmath>
#include <cstring>
#include <print>
#include <string>
#include <string_view>

Spreadsheetcell::Spreadsheetcell(double initial_value)
		: m_value { initial_value }
{}

Spreadsheetcell::Spreadsheetcell(const Spreadsheetcell& cpy)
		: m_value { cpy.m_value }
{}

Spreadsheetcell::Spreadsheetcell(std::string_view initial_value)
{
	setString(initial_value);
}

Spreadsheetcell& Spreadsheetcell::operator=(this Spreadsheetcell&	 self,
																						const Spreadsheetcell& rhs)
{
	std::println("Assignment operator called");
	if (&self == &rhs) {
		return self;
	}
	self.m_value = rhs.m_value;
	return self;
}

void Spreadsheetcell::setValue(this Spreadsheetcell& self, double value)
{
	self.m_value = value;
}

double Spreadsheetcell::getValue() const
{
	return m_value;
}

void Spreadsheetcell::setString(this Spreadsheetcell& self,
																std::string_view			value)
{
	self.m_value = self.stringToDouble(value);
}

std::string Spreadsheetcell::getString() const
{
	return doubleToString(m_value);
}

std::string Spreadsheetcell::doubleToString(double value) const
{
	return std::to_string(value);
}

double Spreadsheetcell::stringToDouble(std::string_view value) const
{
	double number { 0 };
	std::from_chars(value.data(), value.data() + value.size(), number);
	return number;
}
