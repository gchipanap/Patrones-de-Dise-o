#ifndef ICOLLEAGUE_HPP
#define ICOLLEAGUE_HPP

#include <memory>
#include <string>
#include <iostream>
#include <vector> 

class IMediator;

class IColleague
{
public: 
	enum ENUM_ORE { Message }; //2 enumeradores
public:
	virtual ~IColleague() { std::cout << __FUNCTION__ << std::endl; };
	virtual void sendMessage(IMediator &mediator, const ENUM_ORE &message, std::string mes) = 0;
	virtual void receiveMessage(IColleague::ENUM_ORE message, std::string mes) = 0;
	virtual const std::string &getName() const = 0;
private:

};

#endif // ICOLLEAGUE_HPP