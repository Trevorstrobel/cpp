// These are the basics as described by Straustrup in "A Tour of C++ (c++11)"

// Types, Variables, and Arithmetic

//variables are delcared using a data type and name. Examples in C++

bool booleanName;		//Boolean, possible values are true and false
char charName;			//character, for example 'a', 'z', and '9'
int integerName;		//integer, for example -273, 42, and 1066
double doubleName;		//double-precision floating-point number, for example -273.14, 3.13, and 299893.0
unsigned unsignedName;	// non-negative integer, for example 0, 1, and 999.

// each fundamental type corresponds directly to hardware facilities and has a fixed size that
// determines the range of values that can be stored in it:

// bool   [    ]
// char   [    ]
// int    [    ][    ][    ][    ]
// double [    ][    ][    ][    ][    ][    ][    ][    ]

// a char variable is of the natural size to hold a character on a given machine (typically an 8-bit
// byte), and the sizes of other types are quoted in multiples of the size of a char. The size of a
// type is implementation-defines (i.e. it can vary among different machines) and can be obtained by
// the "sizeof" operator. sizeof(char) equals 1 and sizeof(int) is often 4. The arithmetic operators
// can be used for appropriate cominations of these types. 

x+y		// plus
+x		// unary plus
x-y		// minus
-x		// unary minus
x*y		// multiply
x/y		// divide
x%y		// remainder (modulus) for integers

// So can the comparison operators:

x==y	// equals
x!=y	// not equals
x<y		// less than
x>y		// greater than
x<=y	// less than or equal to
x>=y	// greater than or equal to

// Furthermore, logical operators are provided:

x&y		// bitwise and
x|y		// bitwise or
x^y		// bitwise exclusive or
~x		// bitwise complement
x&&y	// logical and
x||y	// logical or

// A bitwise logical operator yield a result of their operand type for which the operation has been
// performed on each bit.  The logical operatios && and || simply return true for false depending on 
// the vales of their operands.
// In assignments and in arithmetic operations, C++ performs all meaningful conversions between the 
// basic types so they can be mixed freely

void some_function()	//function that doesnt return a value
{
	double d = 2.2;		// initialize floating point integer
	int i = 7;			// initialize integer
	d = d+i;			// assign sum to d
	i = d*i;			// assign product to i (truncating the double d*i to an int)
}

// The conversions used in expressions are called the usual arithmetic conversions and aim to ensure that
// expressions are converted at precision of its operands. Adding an int and a double calculates the math
// at double-precision floating-point arithmetic. 


//  NOTE: that = is the assignment opterator and == tests equality.

double d1 = 2.3;		// initialize d1 to 2.3
double d2 {2.3};		// initialize d2 to 2.3


//When defining a variable, you don't actually need to state its type explicitly when it can be
// deduced from the initializer

auto b = true;		// a bool
auto ch = 'x';		// a char
auto i = 123;		// an int
auto d = 1.2;		// a double
auto z = sqrt(y);	// z has the type of whatever sqrt(y) returns

// with auto, we use the = because there is no potentially troublsome type conversion involved.
// we use auto where we don't have a specific reason to mention the type explicityly. "Specific 
// Reasons" include:
		// The definition is in a large scope where we want to make the type clearly visable to readers of our code.
		// we want to be explicit about a variables range or precision (e.g. double rather than float)

// using auto, we avoid redundancy and writing long type names. This is especially important in 
// generic programming where the exact type of an object can be hard for the programmer to know
// and the type names can be quite long.


// In addtion to the conventional arithmetic, C++ offers more specific operators

x+=y	// x = x+y
++x		// increment
x-=y	// x= x-y
--x		// decrement
x*=y	// scaling: x = x*y
x/=y	// scaling: x = x/y
x%=y	// x = x%y	