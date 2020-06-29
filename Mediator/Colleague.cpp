#include <iostream>
#include <string>
#include "Colleague.hpp"
#include "IMediator.hpp"


//-----------------------------------------------------------------------------
// CTOR
//-----------------------------------------------------------------------------
Colleague::Colleague(std::string name) : _name(name) {
	_vectorDoc.push_back("Buenas tardes");
}

//-----------------------------------------------------------------------------
// DTOR
//-----------------------------------------------------------------------------
Colleague::~Colleague() {
	std::cout << __FUNCTION__ << " Adios" << _name << std::endl;
}

//-----------------------------------------------------------------------------
// getName
//-----------------------------------------------------------------------------
const std::string &Colleague::getName() const {
	return _name;
}

//-----------------------------------------------------------------------------
// sendMessage
//-----------------------------------------------------------------------------
void Colleague::sendMessage(IMediator &mediator, const IColleague::ENUM_ORE &message,std::string mes) {
	std::cout << getName() << " Los registros pasame" << std::endl;
	std::cout << "\"" << getDocumentInString(message) << std::endl <<  "\" cuales" << mes << "." << std::endl << std::endl;
	mediator.spreadMessage(message, mes);
}

//-----------------------------------------------------------------------------
// receiveMessage
//-----------------------------------------------------------------------------
void Colleague::receiveMessage(IColleague::ENUM_ORE message, std::string mes) {
	std::cout << this->getName() << " is receiving a message: " << std::endl;
	std::cout << "Te los voy a pasar \"" << getDocumentInString(message) << std::endl << "\" son estos" << mes << std::endl << std::endl;
}

//-----------------------------------------------------------------------------
// receiveMessage
//-----------------------------------------------------------------------------
const std::string Colleague::getDocumentInString(const IColleague::ENUM_ORE &message) const {
	return _vectorDoc.at(message);
}