#ifndef IMEDIATOR_HPP
#define IMEDIATOR_HPP

#include <string>
#include <vector>
#include <memory>
#include <iostream>
#include "IColleague.hpp"

class IColleague;

class IMediator
{
public:
	virtual ~IMediator() { std::cout << __FUNCTION__ << std::endl; };
	virtual void spreadMessage(IColleague::ENUM_ORE message, std::string mes) = 0;
	virtual void addNewRegistered(std::unique_ptr<IColleague> registered) = 0;    //unique_ptr   mantiene la propiedad exclusiva de un objeto a través de un puntero, y destruye al cual apunta objeto cuando el unique_ptr sale del ámbito .
	virtual const std::vector<std::unique_ptr<IColleague>> &getVectorOfDocs() const = 0;

protected:
	std::vector<std::unique_ptr<IColleague>> _vectorOfDocs;
};

#endif // IMEDIATOR_HPP
