#pragma once

#include <string>

class Book {
private:
	int m_isbn;
	std::string m_title;
	std::string m_author;
	int m_totalStock;
	int m_inStock;
	int m_checkedOut;

public:
	Book();
	~Book();

	// set methods
	void setISBN(int isbn) { m_isbn = isbn; };
	void setTitle(std::string title) { m_title = title; };
	void setAuthor(std::string author) { m_author = author; };
	void setTotalStock(int stock) { m_totalStock = stock; };
	void setInStock(int stock) { m_inStock = stock; };
	void setCheckedOut(int stock) { m_checkedOut = stock; };

	// get methods
	int getISBN() { return m_isbn; };
	std::string getTitle() { return m_title; };
	std::string getAuthor() { return m_author; };
	int getTotalStock() { return m_totalStock; };
	int getInStock() { return m_inStock; };
	int getCheckedOut() { return m_checkedOut; };
};