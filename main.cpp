#include <iostream>
#include <string>
#include "Restaurant.h"
#include "Restaurant.cpp"
using namespace std;

int main()
{
	cout << endl;
	Restaurant A("1",2,"3",4)
	;						 cout <<
		A.getName() 	  << endl <<
		A.getNum_Dishes() << endl <<
		A.getAddress()    << endl <<
		A.getNum_Tables() << endl <<
		
		A._int 			  << endl <<
		A._string 		  << endl <<
		A.getdouble() 	  << endl <<
		A.getfloat() 	  << endl <<
		"End"			  << endl << endl;
	Restaurant B
	;						 cout <<
		B.getName() 	  << endl <<
		B.getNum_Dishes() << endl <<
		B.getAddress()    << endl <<
		B.getNum_Tables() << endl <<
		"End" 			  << endl << endl;
	Restaurant C("Very Cool Restaurant",1001,"Rynok square 5/7",1002)
	;						 cout <<
		C.getName() 	  << endl <<
		C.getNum_Dishes() << endl <<
		C.getAddress()    << endl <<
		C.getNum_Tables() << endl <<
		"End"			  << endl << endl;
    return 0;
}