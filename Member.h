#pragma once

#include <iostream>
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
	Member();
	Member(int);
	~Member();

	// Set functions
	void setID(int id) { m_id = id; }
	void setName(std::string name) { m_name = name; }
	void setAddress(std::string address) { m_address = address; }
	void setCity(std::string city) { m_city = city; }
	void setState(std::string state) { m_state = state; }
	void setZipcode(int zipcode) { m_zipcode = zipcode; }

	// Get functions
	int getID() { return m_id; }
	std::string getName() { return m_name; }
	std::string getAddress() { return m_address; }
	std::string getCity() { return m_city; }
	std::string getState() { return m_state; }
	int getZipcode() { return m_zipcode; }
};