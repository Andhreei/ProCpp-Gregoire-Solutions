
/**
 * Add the following member functions to your Person class implementation: a
 * copy constructor, a copy assignment operator, and a destructor. In all of
 * these member functions, implement what you think is necessary, and
 * additionally, output a line of text to the console so you can trace when they
 * are executed. Modify your main() function to test these new member functions.
 * Note: technically, these new member functions are not strictly required for
 * this Person class, because the compiler-generated versions are good enough,
 * but this exercise is to practice writing them.
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
