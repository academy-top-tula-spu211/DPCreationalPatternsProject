#pragma once
#include "Unit.h"
#include "FactoryMethod.h"

class SwordsmanUnit : public Unit
{
public:
	SwordsmanUnit() : Unit("Swordsman") {};
};

class SwordsmanFactory : public FactoryMethod
{
public:
	Unit* UnitCreate() override
	{
		return new SwordsmanUnit();
	}
};

