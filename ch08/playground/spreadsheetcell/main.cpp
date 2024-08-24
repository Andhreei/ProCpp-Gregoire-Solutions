#include <memory>
#include <print>

#include "Spreadsheetcell.hpp"

int main()
{
	/**
		* Objects on the stack
	Spreadsheetcell myCell, anotherCell;
	myCell.setValue(6);
	anotherCell.setString("32.2");
	std::println("cell 1: {}", myCell.getValue());
	std::println("cell 2: {}", anotherCell.getValue());
		*/
	/**
	 * Objects on the free store
	 */
	auto myCell_1 { std::make_unique<Spreadsheetcell>("1") };
	auto myCell_2 { std::make_unique<Spreadsheetcell>(2) };
	std::println("cell 1: {}", myCell_1->getValue());
	std::println("cell 2: {}", myCell_2->getValue());
	*myCell_2 = *myCell_1;
	std::println("cell 2: {}", myCell_2->getValue());
}
