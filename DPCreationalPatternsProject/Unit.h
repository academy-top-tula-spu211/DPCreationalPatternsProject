#pragma once
#include <iostream>

// abstarct Product
class Unit
{
protected:
    std::string name;
public:
    std::string& Name() { return name; }

    Unit(std::string name) : name{ name } {}

    virtual std::string ToString()
    {
        return "Unit: " + name;
    }
    virtual ~Unit() { };
};

class InfantryUnit : public Unit
{
public:
    InfantryUnit() : Unit("Infantry") {};
};

class ArcherUnit : public Unit
{
public:
    ArcherUnit() : Unit("Archer") {};
};

class CavalryUnit : public Unit
{
public:
    CavalryUnit() : Unit("Cavalry") {};
};



