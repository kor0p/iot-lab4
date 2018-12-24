#include <iostream>
#include <string>
#include "Restaurant.h"
#include "Restaurant.cpp"
using namespace std;

int main()
{
	cout << endl;
	
	Restaurant A("1",2,"3",4);   cout <<
		A.get_name() 	      << endl <<
		A.get_num_of_dishes() << endl <<
		A.get_address()    	  << endl <<
		A.get_num_of_tables() << endl <<
		
		A.int_number	  << endl <<
		A.string_variable << endl <<
		A.get_double() 	  << endl <<
		A.get_float() 	  << endl <<
		"End"			  << endl << endl;
	
	Restaurant B;            cout <<
		B.get_name() 	      << endl <<
		B.get_num_of_dishes() << endl <<
		B.get_address()    	  << endl <<
		B.get_num_of_tables() << endl <<
		
		B.int_number	  << endl <<
		B.string_variable << endl <<
		B.get_double() 	  << endl <<
		B.get_float() 	  << endl <<
		"End"			  << endl << endl;

	Restaurant C("Very Cool Restaurant",1001,"Rynok square 5/7",1002);
							     cout <<
		C.get_name() 	      << endl <<
		C.get_num_of_dishes() << endl <<
		C.get_address()    	  << endl <<
		C.get_num_of_tables() << endl <<
		"End"			      << endl << endl;
    return 0;
}