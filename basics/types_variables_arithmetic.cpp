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