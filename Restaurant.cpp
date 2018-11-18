#include "Restaurant.h"
#include <iostream>
#include <string>
using namespace std;

Restaurant::Restaurant(): 
	_name("None"),    _num_dishes(0),
	_address("None"), _num_tables(0)
{
	cout << "Standart restaurant " << _name << " created" << endl;
}
Restaurant::Restaurant(
	string name,    int num_dishes,
	string address, int num_tables
): 
	_name(name), _num_dishes(num_dishes),
	_address(address), _num_tables(num_tables)
{
	cout << "Ordinary restaurant " << _name << " created" << endl;
}
Restaurant::~Restaurant(){
	cout << "Restaurant " << _name << " destroyed" << endl;
}
string Restaurant::getName()
{
	return _name;
}
int    Restaurant::getNum_Dishes()
{
	return _num_dishes;
}
string Restaurant::getAddress()
{
	return _address;
}
int    Restaurant::getNum_Tables()
{
	return _num_tables;
}
double Restaurant::getdouble()
{
	return _double;
}
float  Restaurant::getfloat()
{
	return _float;
}