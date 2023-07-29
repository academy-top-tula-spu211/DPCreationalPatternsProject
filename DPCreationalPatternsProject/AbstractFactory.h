#pragma once
#include <iostream>

// Base Class
class Unit
{
protected:
    std::string name;
    std::string country;
public:
    std::string& Name() { return name; }
    std::string& Country() { return country; }

    Unit(std::string name, std::string country = "")
        : country{ country }, name{ name } {};

    virtual std::string ToString()
    {
        return "Unit: " + name + (country != "" ? "from " + country : "");
    }
    virtual ~Unit() { };
};

// Base types classes
class InfantryUnit : public Unit
{
public:
    InfantryUnit(std::string name = "Infantry", std::string country = "") 
        : Unit(name, country) {};
};

class ArcherUnit : public Unit
{
public:
    ArcherUnit(std::string name = "Archer", std::string country = "")
        : Unit(name, country) {};
};

class CavalryUnit : public Unit
{
public:
    CavalryUnit(std::string name = "Cavalry", std::string country = "")
        : Unit(name, country) {};
};

class SpecialUnit : public Unit
{
public:
    SpecialUnit(std::string name = "", std::string country = "")
        : Unit(name, country) {};
};

// Rome units
class RomeInfantryUnit : public InfantryUnit
{
public:
    RomeInfantryUnit() : InfantryUnit("Infantry", "Rome") {};
};

class RomeArcherUnit : public ArcherUnit
{
public:
    RomeArcherUnit() : ArcherUnit("Archer", "Rome") {};
};

class RomeCavalryUnit : public CavalryUnit
{
public:
    RomeCavalryUnit() : CavalryUnit("Cavalry", "Rome") {};
};

class RomeChariotUnit : public SpecialUnit
{
public:
    RomeChariotUnit() : SpecialUnit("Chariot", "Rome") {};
};

// Crathage units
class CrathageInfantryUnit : public InfantryUnit
{
public:
    CrathageInfantryUnit() : InfantryUnit("Infantry", "Crathage") {};
};

class CrathageArcherUnit : public ArcherUnit
{
public:
    CrathageArcherUnit() : ArcherUnit("Archer", "Crathage") {};
};

class CrathageCavalryUnit : public CavalryUnit
{
public:
    CrathageCavalryUnit() : CavalryUnit("Cavalry", "Crathage") {};
};

class CrathageElephantUnit : public SpecialUnit
{
public:
    CrathageElephantUnit() : SpecialUnit("Elephant", "Crathage") {};
};




class AbstractFactory
{
public:
    virtual InfantryUnit* InfantryUnitCreate() = 0;
    virtual ArcherUnit* ArcherUnitCreate() = 0;
    virtual CavalryUnit* CavalryUnitCreate() = 0;
    virtual SpecialUnit* SpecialUnitCreate() = 0;
};

// Rome Factory
class RomeUnitsFactory : public AbstractFactory
{
public:
    InfantryUnit* InfantryUnitCreate() override
    {
        return new RomeInfantryUnit();
    }
    ArcherUnit* ArcherUnitCreate() override
    {
        return new RomeArcherUnit();
    }
    CavalryUnit* CavalryUnitCreate() override
    {
        return new RomeCavalryUnit();
    }
    SpecialUnit* SpecialUnitCreate() override
    {
        return new RomeChariotUnit();
    }
};

// Crathage Factory
class CrathageUnitsFactory : public AbstractFactory
{
public:
    InfantryUnit* InfantryUnitCreate() override
    {
        return new CrathageInfantryUnit();
    }
    ArcherUnit* ArcherUnitCreate() override
    {
        return new CrathageArcherUnit();
    }
    CavalryUnit* CavalryUnitCreate() override
    {
        return new CrathageCavalryUnit();
    }
    SpecialUnit* SpecialUnitCreate() override
    {
        return new CrathageElephantUnit();
    }
};
