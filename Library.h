#pragma once

#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
#include <vector>

#include "Book.h"
#include "Member.h"

class Library {
private:
	std::string m_version;
	std::vector<Member> m_members;
	std::vector<Book> m_books;

public:
	Library();
	Library(std::string);
	~Library();

	// Menu stuff
	void showMenu();
	void menu();

	// Member stuff
	void addMember();
	int searchIDs(int);
	void sortMembers(int, int);
	void printMembers();
	void memberInfo();
};