#pragma once

#include <iostream>
#include <string>

class Menu {
private:
	std::string m_version;

public:
	Menu(std::string);
	Menu();
	~Menu();
	void showMenu();
};