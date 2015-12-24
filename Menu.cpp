/******************************************************************************
* Menu Class                                                                  *
*                                                                             *
* This class will show the menu and provide the options to for the library    *
* class. A library object will be created when a menu object is created.      *
******************************************************************************/
#include "Menu.h"

// Main constructor
// Create a library object and bring in the version number for the menu
Menu::Menu(std::string version) {
	m_version = version;
}

// Default constructor
// Does nothing
Menu::Menu() {

}

// Deconstructor
// Not particulary nessecary, but still good to have
Menu::~Menu() {

}

// Simple function to display the menu
// Menu functions will be done in another function
void Menu::showMenu() {
	std::cout << "          Simple Library - Version " << m_version << std::endl;
	// TODO
	std::cout << "1. Create a Member" << std::endl;
	// TODO
	std::cout << "2. Display Member Information" << std::endl;
	// TODO
	std::cout << "3. Edit Member Information" << std::endl;
	// TODO
	std::cout << "4. Add a Book to the Library" << std::endl;
	// TODO
	std::cout << "5. Checkout a Book" << std::endl;
	// TODO
	std::cout << "6. Return a Book" << std::endl;
	// TODO
	std::cout << "7. Remove a Book from the Library" << std::endl;
	// TODO
	std::cout << "8. Pay a Fine" << std::endl;
	// TODO
	std::cout << "9. Increase Date" << std::endl;
	// TODO
	std::cout << "10. Save Database" << std::endl;
	// TODO
	std::cout << "11. Load Database" << std::endl;
	// TODO
	std::cout << "12. Quit System" << std::endl;
}