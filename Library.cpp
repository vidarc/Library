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