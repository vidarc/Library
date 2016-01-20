#pragma once

#include <iostream>
#include <string>

class Library {
private:
	std::string m_version;

public:
	Library();
	Library(std::string);
	~Library();

	// Menu stuff
	void showMenu();
	void menu();
};