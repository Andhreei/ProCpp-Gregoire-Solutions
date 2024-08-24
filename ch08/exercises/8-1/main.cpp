/**
 * Implement a Person class storing a first and last name as data members. Add a
 * single constructor accepting two parameters, the first and last name. Provide
 * appropriate getters and setters. Write a small main() function to test your
 * implementation by creating a Person object on the stack and on the free
 * store.
 */

#include <memory>
#include <print>

#include "Person.hpp"

using namespace std;

int main()
{
	Person onTheStack {};
	auto	 onTheFreeStore { make_unique<Person>() };
	println("On the stack person: first name: '{}', last name '{}'",
					onTheStack.getFirstName(), onTheStack.getLastName());
	onTheStack.setFirstName("Andrei");
	onTheStack.setLastName("Mirea");
	println("On the stack person: first name: '{}', last name '{}'",
					onTheStack.getFirstName(), onTheStack.getLastName());
	println("On the free store person: first name: '{}', last name '{}'",
					onTheFreeStore->getFirstName(), onTheFreeStore->getLastName());
	onTheFreeStore->setFirstName("Cristian");
	onTheFreeStore->setLastName("Mirea");
	println("On the free store person: first name: '{}', last name '{}'",
					onTheFreeStore->getFirstName(), onTheFreeStore->getLastName());
}
