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
	explicit Person(const Person& src);
	Person& operator=(this Person& self, const Person& rhs);
	~Person();
	friend std::ostream& operator<<(std::ostream& output, const Person& obj);
	/* --- 8-3 --- */

	std::string getFirstName() const;
	std::string getLastName() const;
	void				setFirstName(this Person& self, std::string_view first_name);
	void				setLastName(this Person& self, std::string_view last_name);

 private:
	std::string m_first_name;
	std::string m_last_name;
};
