#pragma once

#include <string>
#include <vector>

#include "Book.h"

class Member {
private:
	int m_id;
	std::string m_name;
	std::string m_address;
	std::string m_city;
	std::string m_state;
	int m_zipcode;
	std::vector<Book> m_books;

public:

};