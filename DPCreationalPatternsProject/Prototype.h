#pragma once
#include <iostream>
#include<map>

#include "FactoryMethod.h"

class IPrototype
{
public:
	virtual IPrototype* Clone() = 0;
};

class StoreClones
{
	std::map<UnitType, IPrototype*> clones;

public:
	IPrototype* GetClone(UnitType type)
	{
		auto it = clones.find(type);
		if (it != clones.end())
			return it->second;

		FactoryMethod* factory;
		switch (type)
		{
		case Infantry:
			factory = new InfantryFactory(); break;
		case Archer:
			factory = new ArcherFactory(); break;
		case Cavalry:
			factory = new CavalryFactory(); break;
		default:
			break;
		}

		auto data = std::make_pair(type, (IPrototype*)factory->UnitCreate());
		clones.insert(data);

	}
};


