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
	std::string getFirstName() const;
	std::string getLastName() const;
	void				setFirstName(this Person& self, std::string_view first_name);
	void				setLastName(this Person& self, std::string_view last_name);

 private:
	std::string m_first_name;
	std::string m_last_name;
};