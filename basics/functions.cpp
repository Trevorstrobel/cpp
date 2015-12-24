// These are the basics as described by Straustrup in "A Tour of C++ (c++11)"

//Functions
// functions can only be called if they have previously been declared. Function delcarations consist
// of the name of the function, the type of value returned (if any), ad the number and types of 
// arguments that must be supplied in a call:

Elem* next_elem()		// no argument; return a pointer to Elem (an Elem*)
void exit(int);			// int argument; return nothing
double sprt(double);	// double argument; return a double

// of course the data type comes before the function name and the argument types are enclosed in
// parentheses after the name of the function.  
// The semantics of argument passing are identical to the semantics of copy initialization. 
// Argument types are checked and implicit argument type converstion takes place when necessary

double square2 = sqrt(2);		// call sqrt() with the arguemt double{2}
double square3 = sqrt("three")	// error: sqrt() requires an argument of type double

// the type of a cuntion consists of the return type and the argument types. For class member
// functions, the name of the class is also a part of the function type.

double get(const vector<double>& vec, int index);	//type: double(const vector<double>&,int)
char& String:: operator[](int index);				//type: char& string::(int)

// if two functions are defined with the same name, but with different arugment types, the 
// compiler will choose the most appropriate function to invoke for each call.

void print(int); 		// takes an int arguemt
void print(double);		// takes a floating-point argument
void print(string);		// takes a string argument

void user()
{
	print(42);					//calls print(int)
	print(9.65);				//calls print(double)
	print("D is for Digital") 	// calls print(string)
}

// if two alternative functions can be called and neither is better than the other, the call is
// deemed ambiguous and the compiler gives an error

void print(int, double);
void print(double, int);

void user2()
{
	print(0,0);		//error: ambiguous
}

//----------------------------------------------This is known as function overloading and is one
// of the essential parts of generic programming. when a function is overloaded, each function
// of the same name should implement the same semantics.  The print() functions are an example
// of this; each print() prints is argument.