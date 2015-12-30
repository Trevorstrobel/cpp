// working with pointers

int* p; // read as "int pointer p"

string* q;	// read as "string pointer q"

// to declare a pointer, state the pointer type (int, string, etc.) followed by an asterisk, 
// followed by the name of the pointer (p and q in the example)


// There are two Pointer Operators. * and &
// & == "Address of" operator
// * == "Contents of" operator or "dereferencing" operator

// If you declare a variable
int x = 25;
// you can get that variable's memory address by using the "address of" and "contents of" operators.
int* p = &x;

// the "int pointer p" now holds the memory address of the value of x

// we can get a vale stored at an address by using the Dereference operator

//using the above code, the following will print the "contents of" p, wich is the address of x. 
//the contents of the address of x is 25. 
cout << *p << endl

// *p is an alias for x

// the following three lines do the same thing. 

//x = x+5;
//x = *p + 5;
//*p = *p + 5;

cout << &*p << endl;
//in this example, the ampersand and asterisk cancel each other out"


// pointers are used to refer to new memory reserved during program execution.
// They also refer and share large data structures without making a copy of the structure.
// Used to specify relationships among data -- linked lists, trees, graphs, etc. 