#include "Member.h"

// default constructor -- does nothing
Member::Member() {

}

// main constructor
// take a pre-made ID number from Library class and 
// create a Member object with that
Member::Member(int id) {
	m_id = id;
	std::cin.ignore();

	// temp variables to take in the info
	std::string name;
	std::string address;
	std::string city;
	std::string state;
	int zipcode;

	std::cout << "Enter the name of the member: ";
	std::getline(std::cin, name);
	m_name = name;

	std::cout << "Enter the address of the member: ";
	std::getline(std::cin, address);
	m_address = address;

	std::cout << "Enter the city: ";
	std::getline(std::cin, city);
	m_city = city;

	std::cout << "Enter the state (2 letters): ";
	std::cin >> state;
	m_state = state;

	std::cout << "Enter the zipcode: ";
	std::cin >> zipcode;
	m_zipcode = zipcode;
}

// default deconstructor
Member::~Member() {

}