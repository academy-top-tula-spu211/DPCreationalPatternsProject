//#pragma once
//#include <iostream>
//
//enum UnitType
//{
//    Infantry,
//    Archer,
//    Cavalry
//};
//
//class Unit
//{
//protected:
//    std::string name;
//public:
//    std::string& Name() { return name; }
//
//    Unit(std::string name) : name{ name } {}
//
//    virtual void Info()
//    {
//        std::cout << "Unit: " << name << "\n";
//    }
//    virtual ~Unit() { };
//};
//
//class InfantryUnit : public Unit
//{
//public:
//    InfantryUnit() : Unit("Infantry") {};
//};
//
//class ArcherUnit : public Unit
//{
//public:
//    ArcherUnit() : Unit("Archer") {};
//};
//
//class CavalryUnit : public Unit
//{
//public:
//    CavalryUnit() : Unit("Cavalry") {};
//};
//
//Unit* UnitCreator(UnitType type)
//{
//    switch (type)
//    {
//    case Infantry:
//        return new InfantryUnit();
//        break;
//    case Archer:
//        return new ArcherUnit();
//        break;
//    case Cavalry:
//        return new CavalryUnit();
//        break;
//    default:
//        return nullptr;
//        break;
//    }
//}
//
