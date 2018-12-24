#pragma once
#include <iostream>
#include <string>
using namespace std;

class Restaurant
{
    private:
	    string name;
		string address;
		int num_of_dishes;
		int num_of_tables;
    public:
		Restaurant();
        Restaurant(
			string name_of_restaurant, int num_dishes_in_restaurant,
			string address_of_restaurant, int num_tables_in_restaurant
		);
		~Restaurant();
        
	    string get_name();
		string get_address();
		int    get_num_of_dishes();
		int    get_num_of_tables();
		double get_double();
		float  get_float();

		int    int_number = -1;
		string string_variable = ".";
	protected:
		double double_number = 0;
		float  float_number = 1;
};