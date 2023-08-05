#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Product
{

};

class Pizza : public Product
{
public:
	int size;
	string base;
	string sauce;
	string ingrMain;
	vector<string> ingrs;

	Pizza() : size{}, base{}, sauce{}, ingrMain{} {};

	string ToString()
	{
		string str = "Pizza:\n\tSiza: " + to_string(size)
			+ "\n\tBase: " + base
			+ "\n\tSauce: " + sauce
			+ "\n\tMain ingridient: " + ingrMain
			+ "\n\tIngridients: ";

		if (ingrs.size() > 0)
		{
			for (auto ingr : ingrs)
				str += ingr + ", ";
		}
		return str;
	}
};


class IBuilder
{
public:
	virtual IBuilder* SetNew() = 0;
	virtual IBuilder* SetBase(string base) = 0;
	virtual IBuilder* SetSize(int size) = 0;
	virtual IBuilder* SetSauce(string sauce) = 0;
	virtual IBuilder* SetMainIngr(string ingrMain) = 0;
	virtual IBuilder* SetIngr(string ingr) = 0;

	virtual Product* GetResult() = 0;
};

class PizzaBuilder : public IBuilder
{
	Pizza* pizza;
public:
	PizzaBuilder() : pizza{ new Pizza() } {}

	IBuilder* SetNew() override
	{
		if (pizza)
			delete pizza;
		pizza = new Pizza();
		return this;
	}

	IBuilder* SetBase(string base) override
	{
		pizza->base = base;
		return this;
	}

	IBuilder* SetSize(int size) override
	{
		pizza->size = size;
		return this;
	}

	IBuilder* SetSauce(string sauce) override
	{
		pizza->sauce = sauce;
		return this;
	}

	IBuilder* SetMainIngr(string ingrMain) override
	{
		pizza->ingrMain = ingrMain;
		return this;
	}

	IBuilder* SetIngr(string ingr) override
	{
		pizza->ingrs.push_back(ingr);
		return this;
	}

	Product* GetResult() override
	{
		return pizza;
	}
};

class GavayPizza
{
	PizzaBuilder* builder;
public:
	Pizza* GetPizza()
	{
		builder = new PizzaBuilder();
		return (Pizza*)builder->SetBase("pshenica")
			->SetSize(33)
			->SetMainIngr("chicken")
			->SetIngr("ananas")
			->GetResult();
	}
};
