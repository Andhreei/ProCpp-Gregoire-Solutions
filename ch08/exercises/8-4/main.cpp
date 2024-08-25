
/**
 * Remove the copy constructor, copy assignment operator, and destructor from
 * your Person class, because the default compiler-generated versions are
 * exactly what you need for this simple class. Next, add a new data member to
 * store the initials of a person, and provide a getter and setter. Add a new
 * constructor that accepts three parameters, a first and last name, and a
 * person's initials. Modify the original two-parameter constructor to
 * automatically generate initials for a given first and last name, and delegate
 * the actual construction work to the new three-parameter constructor. Test
 * this new functionality in your main() function.
 */

#include <iostream>
#include <memory>
#include <print>

#include "Person.hpp"

using namespace std;

int main()
{
	auto onTheFreeStore1 { make_unique<Person>("Andrei", "Mirea") };
	println("The initial object:");
	cout << *onTheFreeStore1;
	auto onTheFreeStore2 { make_unique<Person>(*onTheFreeStore1) };
	*onTheFreeStore1 = *onTheFreeStore2;
}
