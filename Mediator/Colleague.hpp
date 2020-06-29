#ifndef COLLEAGUE_HPP
#define COLLEAGUE_HPP

#include <memory>
#include "IColleague.hpp"
 

class IMediator;

class Colleague : public IColleague
{
public:
	Colleague(std::string _name);
	virtual ~Colleague();
	virtual void sendMessage(IMediator &mediator, const IColleague::ENUM_ORE &message,std::string mes) override;
	virtual void receiveMessage(IColleague::ENUM_ORE message, std::string mes) override;
	virtual const std::string &getName() const override;
	const std::string getDocumentInString(const IColleague::ENUM_ORE &message) const;


private:
	std::string _name;
	std::vector<std::string> _vectorDoc;
};

#endif // COLLEAGUE_HPP