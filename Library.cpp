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
			addMember();
		} break;
		case 2: { // Print out Member List
			printMembers();
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

void Library::addMember() {
	int id;
	bool exists = true;

	// Generate random ID # between 100000 and 999999
	// then check to see if it exists already
	while (exists) {
		id = rand() % 899999 + 100000;
		if (!searchIDs(id)) {
			exists = false;
		}
	}

	Member newMember(id);
	m_members.push_back(newMember);
	if (m_members.size() > 1) {
		sortMembers(0, m_members.size() - 1);
	}
}

bool Library::searchIDs(int id) {
	int first = 0,
		last = m_members.size() - 1,
		mid;

	while (first <= last) {
		mid = first + ((last - first) / 2);
		if (m_members[mid].getID() == id) {
			return true;
		}
		else if (m_members[mid].getID() > id) {
			last = mid - 1;
		}
		else {
			first = mid + 1;
		}
	}
	
	return false;
}

void Library::sortMembers(int left, int right) {
	// quicksort algorithm
	int i = left,
		j = right;
	Member temp;
	int pivot = m_members[(left + right) / 2].getID();

	while (i <= j) {
		while (m_members[i].getID() < pivot) {
			i++;
		}
		while (m_members[j].getID() > pivot) {
			j--;
		}
		if (i <= j) {
			temp = m_members[i];
			m_members[i] = m_members[j];
			m_members[j] = temp;
			i++;
			j--;
		}
	}

	if (left < j) {
		sortMembers(left, j);
	}
	if (i < right) {
		sortMembers(i, right);
	}
}

void Library::printMembers() {
	std::cout << std::left << std::setw(7) << "ID";
	std::cout << std::left << std::setw(25) << "Name";
	std::cout << std::left << std::setw(25) << "Address";
	std::cout << std::left << std::setw(20) << "City";
	std::cout << std::left << std::setw(6) << "State";
	std::cout << std::left << "Zip Code" << std::endl;

	for (int i = 0; i < m_members.size(); i++) {
		std::cout << std::left << std::setw(7) << m_members[i].getID();
		std::cout << std::left << std::setw(25) << m_members[i].getName();
		std::cout << std::left << std::setw(25) << m_members[i].getAddress();
		std::cout << std::left << std::setw(20) << m_members[i].getCity();
		std::cout << std::left << std::setw(6) << m_members[i].getState();
		std::cout << std::left << m_members[i].getZipcode() << std::endl;
	}
}