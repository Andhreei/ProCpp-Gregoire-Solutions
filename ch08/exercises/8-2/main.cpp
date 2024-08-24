
#include <print>

#include "Person.hpp"

using namespace std;

int main()
{
	/**
	* With the set of member functions implemented in Exercise
	8-1, the following line of code does not compile:

	Person persons[3];

	Can you explain why this does not compile? Modify the implementation of your
	Person class to make this work.
	*/

	/**
	 * Answer:
	 * In my case it works because I have provided a single constructor with all
	 * the parameters defaulted to "Ungiven name" and can act as a default
	 * cosntructor. The solution would be to provide a default constructor because
	 * the question is supposing that the class does not have one.
	 */
	Person persons[3];
	/**
		* Modified the implementation and added a default constructor
		*/
	println("{}, {}", persons[0].getFirstName(), persons[0].getLastName());
}
