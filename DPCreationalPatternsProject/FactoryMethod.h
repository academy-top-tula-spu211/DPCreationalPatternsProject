#pragma once
#include <iostream>
#include "Unit.h"

class FactoryMethod
{
public:
	virtual Unit* UnitCreate() = 0;
	virtual ~FactoryMethod() {};
};

class InfantryFactory : public FactoryMethod
{
public:
	Unit* UnitCreate() override
	{
		return new InfantryUnit();
	}
};

class ArcherFactory : public FactoryMethod
{
public:
	Unit* UnitCreate() override
	{
		return new ArcherUnit();
	}
};

class CavalryFactory : public FactoryMethod
{
public:
	Unit* UnitCreate() override
	{
		return new CavalryUnit();
	}
};

