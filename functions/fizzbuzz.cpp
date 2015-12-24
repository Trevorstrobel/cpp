//basic fizzbuzz program in  C++ for the lulz. 
// 12/23/2015

#include <iostream>
#include <string>

using namespace std;

//declaring string objects

string fizz = "Fizz";
string buzz = "Buzz";


int main()
{
	for (int i = 0; i<100; i++)
	{
	 	if (i % 5 == 0 && i % 3 == 0) {
			 cout << fizz + buzz << endl;
		 }
	 	else if (i % 3 == 0){
		 	 cout << fizz << endl;
	 	}
	 	else if (i % 5 == 0) {
		 	 cout << buzz << endl;
	 	} 	
	 	else {
			 cout << i << endl;
		 } 
	}
}
