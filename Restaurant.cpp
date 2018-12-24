#include "Restaurant.h"
#include <iostream>
#include <string>
using namespace std;

Restaurant::Restaurant(): 
	name("None"), num_of_dishes(0),
	address("None"), num_of_tables(0)
{
	cout << "Standart restaurant " << name << " created" << endl;
}

Restaurant::Restaurant(
	string name_of_restaurant, int num_dishes_in_restaurant,
	string address_of_restaurant, int num_tables_in_restaurant
): 
	name(name_of_restaurant), num_of_dishes(num_dishes_in_restaurant),
	address(address_of_restaurant), num_of_tables(num_tables_in_restaurant)
{
	cout << "Ordinary restaurant " << name << " created" << endl;
}

Restaurant::~Restaurant(){
	cout << "Restaurant " << name << " destroyed" << endl;
}

string Restaurant::get_name()
{
	return name;
}
int    Restaurant::get_num_of_dishes()
{
	return num_of_dishes;
}
string Restaurant::get_address()
{
	return address;
}
int    Restaurant::get_num_of_tables()
{
	return num_of_tables;
}
double Restaurant::get_double()
{
	return double_number;
}
float  Restaurant::get_float()
{
	return float_number;
}