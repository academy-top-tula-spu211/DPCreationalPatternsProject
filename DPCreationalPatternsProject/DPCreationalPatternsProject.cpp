#include <iostream>
#include <vector>

//#include "FactoryMethod.h"
//#include "Swordsman.h"
//#include "AbstractFactory.h"
//#include "Builder.h"
//#include "Prototype.h"

#include "Singleton.h"


using namespace std;

//
//void FactoryMethodExample()
//{
//
//
//    vector<FactoryMethod*> factories;
//    factories.push_back(new InfantryFactory());
//    factories.push_back(new ArcherFactory());
//    factories.push_back(new CavalryFactory());
//    factories.push_back(new SwordsmanFactory());
//
//
//    vector<Unit*> army;
//    for (int i = 0; i < 10; i++)
//        army.push_back(factories[rand() % factories.size()]->UnitCreate());
//    
//    for (auto unit : army)
//        cout << unit->ToString() << "\n";
//}

//void AbstractFactoryExample()
//{
//    class Army
//    {
//        string country;
//        vector<InfantryUnit*> infantries;
//        vector<ArcherUnit*> archers;
//        vector<CavalryUnit*> cavalries;
//        vector<SpecialUnit*> specials;
//
//        AbstractFactory* factory;
//    public:
//        Army(AbstractFactory* factory, string country, int countI, int countA, int countC, int countS)
//            : factory{ factory }, country{ country }
//        {
//            for (int i = 0; i < countI; i++)
//                infantries.push_back(factory->InfantryUnitCreate());
//            for (int i = 0; i < countA; i++)
//                archers.push_back(factory->ArcherUnitCreate());
//            for (int i = 0; i < countC; i++)
//                cavalries.push_back(factory->CavalryUnitCreate());
//            for (int i = 0; i < countS; i++)
//                specials.push_back(factory->SpecialUnitCreate());
//        }
//
//        void ConsoleInfo()
//        {
//            cout << "Army of " << country << ":\n";
//            for (auto unit : infantries)
//                cout << unit->ToString() << "\n";
//            cout << "\n";
//            for (auto unit : archers)
//                cout << unit->ToString() << "\n";
//            cout << "\n";
//            for (auto unit : cavalries)
//                cout << unit->ToString() << "\n";
//            cout << "\n";
//            for (auto unit : specials)
//                cout << unit->ToString() << "\n";
//            cout << "\n------------------------\n\n";
//
//        }
//    };
//
//    Army romeArmy(new RomeUnitsFactory(), "Rome", 5, 7, 4, 2);
//    Army carthageArmy(new CrathageUnitsFactory(), "Crathage", 7, 5, 3, 3);
//
//    romeArmy.ConsoleInfo();
//    carthageArmy.ConsoleInfo();
//}

//void BuilderExample()
//{
//    /*IBuilder* builder = new PizzaBuilder();
//    builder->SetBase("pshenica");
//    builder->SetSize(33);
//    builder->SetMainIngr("chicken");
//    builder->SetIngr("kolbaski");
//    builder->SetIngr("mocarella");
//
//    Pizza* pizza1 = (Pizza*)builder->GetResult();*/
//
//    IBuilder* builder = new PizzaBuilder();
//    Pizza* pizza1 = (Pizza*)builder->SetBase("pshenica")
//        ->SetSize(33)
//        ->SetMainIngr("chicken")
//        ->SetIngr("kolbaski")
//        ->SetIngr("mocarella")
//        ->GetResult();
//
//
//    cout << pizza1->ToString() << "\n";
//
//    builder->SetNew();
//    builder->SetBase("corn");
//    builder->SetSize(41);
//    builder->SetMainIngr("sosiski");
//    builder->SetSauce("mayonez");
//    builder->SetIngr("chili");
//    builder->SetIngr("chise");
//    builder->SetIngr("kolbaski");
//
//    pizza1 = (Pizza*)builder->GetResult();
//
//    cout << pizza1->ToString() << "\n";
//
//    pizza1 = (new GavayPizza())->GetPizza();
//
//    cout << pizza1->ToString() << "\n";
//}

//void PrototypeExmaple()
//{
//    vector<Unit*> army;
//    StoreClones store;
//    for (int i = 0; i < 10; i++)
//        army.push_back((InfantryUnit*)store.GetClone(UnitType::Infantry));
//    for (int i = 0; i < 10; i++)
//        army.push_back((ArcherUnit*)store.GetClone(UnitType::Archer));
//    for (int i = 0; i < 10; i++)
//        army.push_back((CavalryUnit*)store.GetClone(UnitType::Cavalry));
//}



int main()
{
    srand(time(nullptr));

    // Bad Unit Creator
    //Unit* infantry = UnitCreator(UnitType::Infantry);

    // Factory Method
    //FactoryMethodExample();

    // Abstract Factory
    // AbstractFactoryExample();

    // Builder
    // BuilderExample();

    // Prototype
    // PrototypeExmaple()

    

}