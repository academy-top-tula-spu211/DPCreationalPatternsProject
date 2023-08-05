//#pragma once
//#include <iostream>
//#include "Prototype.h"
//
//enum UnitType
//{
//    Infantry,
//    Archer,
//    Cavalry,
//};
//
//// abstarct Product
//class Unit : public IPrototype
//{
//protected:
//    std::string name;
//public:
//    std::string& Name() { return name; }
//
//    Unit(std::string name) : name{ name } {}
//
//    virtual std::string ToString()
//    {
//        return "Unit: " + name;
//    }
//    virtual ~Unit() { };
//};
//
//class InfantryUnit : public Unit
//{
//public:
//    InfantryUnit() : Unit("Infantry") {};
//    
//    IPrototype* Clone() override
//    {
//        return new InfantryUnit(*this);
//    }
//};
//
//class ArcherUnit : public Unit
//{
//public:
//    ArcherUnit() : Unit("Archer") {};
//    IPrototype* Clone() override
//    {
//        return new ArcherUnit(*this);
//    }
//};
//
//class CavalryUnit : public Unit
//{
//public:
//    CavalryUnit() : Unit("Cavalry") {};
//    IPrototype* Clone() override
//    {
//        return new CavalryUnit(*this);
//    }
//};
//
//
//
