#include "Library.h"

// default constructor
// nothing loaded into library class
Library::Library() {

}

// main constructor
// version string loaded into constructor for the menu
Library::Library(std::string version) {
	m_version = version;
}

// default deconstructor
Library::~Library() {

}

void Library::showMenu() {
	std::cout << "     Library Control System - Version " << m_version << "\n" << std::endl;
	std::cout << "1. Add a Member" << std::endl;
	std::cout << "2. Print out Member List" << std::endl;
	std::cout << "3. View Member Information" << std::endl;
	std::cout << "4. Check out a Book" << std::endl;
	std::cout << "5. Add a Book to Inventory" << std::endl;
	std::cout << "6. Remove a Book from Inventory" << std::endl;
	std::cout << "7. Pay Fine" << std::endl;
	std::cout << "8. Increase Date" << std::endl;
	std::cout << "9. Save Database" << std::endl;
	std::cout << "10. Load Database" << std::endl;
	std::cout << "11. Shut Down System" << std::endl;
}

void Library::menu() {
	int choice;

	do {
		showMenu();
		std::cout << "Enter menu choice: ";
		std::cin >> choice;

		switch (choice) {
		case 1: { // Add a Member

		} break;
		case 2: { // Print out Member List

		} break;
		case 3: { // View Member Information

		} break;
		case 4: { // Check out a Book

		} break;
		case 5: { // Add a Book to Inventory

		} break;
		case 6: { // Remove a book from inventory

		} break;
		case 7: { // Pay Fine

		} break;
		case 8: { // Increase Date

		} break;
		case 9: { // Save Database

		} break;
		case 10: { // Load Database

		} break;
		}
	} while (choice < 11);
}