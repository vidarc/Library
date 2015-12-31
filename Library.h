#pragma once

#include <string>

class Library {
private:
	std::string m_version;

public:
	Library();
	Library(std::string);
	~Library();
};