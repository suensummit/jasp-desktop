#ifndef OPTIONSTRING_H
#define OPTIONSTRING_H

#include "options/optioni.h"
#include "common.h"

class OptionString : public OptionI<std::string>
{
public:
	OptionString(std::string value = "");

	virtual void loadData(Json::Value data) OVERRIDE;

	Json::Value asJSON() const OVERRIDE;
	void set(Json::Value &value) OVERRIDE;
	virtual Option* clone() const OVERRIDE;
};

#endif // OPTIONSTRING_H
