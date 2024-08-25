#include <iostream>
#include <ostream>
#include <string>
#include <string_view>

class Person
{
 public:
	/**
	 * 8-2: Added a default constructor
	 */
	explicit Person();
	explicit Person(std::string_view first_name, std::string_view last_name);
	/* --- 8-2 --- */
	/**
	 * 8-3: Added a copy constructor
	 * ~~~: Added a copy assignment constructor
	 * ~~~: Added a destructor
	 * ~~~: Overloaded << operator for printing
	 */
	friend std::ostream& operator<<(std::ostream& output, const Person& obj);
	/* --- 8-3 --- */

	/**
	 * 8-4: Added the new constructor
	 */
	explicit Person(std::string_view first_name, std::string_view last_name,
									std::string intials);

	const std::string& getFirstName() const;
	const std::string& getLastName() const;
	void setFirstName(this Person& self, std::string_view first_name);
	void setLastName(this Person& self, std::string_view last_name);

 private:
	std::string m_first_name;
	std::string m_last_name;
	std::string m_initials;
};
