#pragma once
#include <iostream>
#include <string>
using namespace std;

class Restaurant
{
    private:
	    string _name;
		string _address;
		int    _num_dishes;
		int    _num_tables;
    public:
		Restaurant();
        Restaurant(
            string name,    int num_dishes,
	        string address, int num_tables
        );
		~Restaurant();
        
	    string getName();
	    int    getNum_Dishes();
		string getAddress();
		int    getNum_Tables();
		double getdouble();
		float  getfloat();

		int    _int = -1;
		string _string = ".";
	protected:
		double _double = 0;
		float  _float = 1;
};