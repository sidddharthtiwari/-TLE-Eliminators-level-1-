// First Class 22 August 2022

// First C++ Program

#include <iostream>  // Pre Proccessor Command 
using namespace std; /*If we'll not use this code will give error 
                     you can use std::cout<<"Hello World"; individually but it's time consuming*/
int main(){
	cout<<"Hello World";
}

// Comments ( // or /* */) - These are non-executable lines 


// Constants in C++ - Integer, Decimal, Character, String Literal

// #include <iostream>  
// using namespace std; 

// int main(){
// 	5;     ------- Integer Constant
// 	-4;
	
//     3.14;  ------- Decimal Constant
// 	-2.76;
	
// 	'f';   ------- Character Constant
// 	'/';
	
// 	 "My password is password@123"; ----- String Literal (Anything inside double quotation)
	
// }

// Each statement in C++ is ended by a ';' --- semicolon 


// How to print output in C++ 
// '<<' two lesser then symbol (left shift)

#include <iostream>
using namespace std;

int main(){
//     // cout is used to print output in C++, we can create a chain in C++
//     // we use endl or '/n' for printing output in new line
    
	cout << "Hello World" << " Welcome to my GitHub" << endl;
	cout << "This is our first class";
	
}

// How to print " ? 
// for this we use backslash(\) so it converts the " into string

#include <iostream>
using namespace std;

int main(){
	cout <<"\"";

}

// Arithmetic Operator in C++ 

#include <iostream>
using namespace std;

int main(){
	cout << 125 + 5 <<endl; // addition operator
	cout << 125 - 5 <<endl; // subtraction operator
	cout << 125 * 5 <<endl; // multiplication operator
	cout << 125 / 6 <<endl; // division operator - (quotient), It trunkates the after decimal value
 	// To output a decimal value we have to do typeconversion
	cout << 10.0 / 3 <<endl;
	cout << 124 % 5 <<endl; // modulo operator - (remainder)
	
// 	C++ follow BODMAS rule
}


// Variables in C++
// Syntax --- datatype variable_name = value;

#include <iostream>
using namespace std;

int main(){
	int hello = 20;
	hello = 35; // we can change the value of variable with the help of '=' operator
	cout << hello;
	
// Variable names cannot:
// • Have spaces (use underscore instead)
// • Start with a digit
// • Be reserved by the compiler
// • Already taken by another variable (in the same scope)
	
}


// Datatypes in C++
// Datatype decide the type of value to be stored in the variable

#include <iostream>
using namespace std;

int main(){
	int a = 10;
	string b = "Hello@!23";
	float c = 10.5;
	char d = 'd';
	
// // We can't store diffrent type of values in diffrent datatype but there are some exception
    int e = '5';
    float f = 5; // 5.0
    
	
}

// Primitive Datatype ----- Inbuilt in C++

#include <iostream>
using namespace std;

int main(){
	int a = 10;
	char b = 's';
	float c = 10.033;
	bool d = true; // it can only be true or false

}

// What is int a = '5'; ??

// #include <iostream>
// using namespace std;

// int main(){
// 	int a = 'z'-'a'; // Here we use concept of ASCII Value
	
	// a = 0
	// b = 1
	// c = 2
	// d = 3
	// |	
	// |
	// z = 25
	
	// cout << a;
	
// }


// Derived Datatype - These are derived from primitive datatype

// string literal is not same as string 

#include <iostream>
using namespace std;

int main(){
// 	string s = "abdeeijei112e3j@";
// 	// In string we can add two strings
// 	cout << s + "124";

// Concatenation --- joining two strings
	string s = "abcd";
	s = s + "124";
	cout << s;
	
	const char a[] ="124";
	string s = a;
}

 

// Arthimetic Assignment operator

#include <iostream>
using namespace std;

int main(){
	int a = 5;
	// a = a + 3; --- In this compiler create a temporary variable for 'a+3' 
	a *= 7;
	a -= 4;
	a %= 1;                     
	a /= 2; // a = a / 3
	cout << a;

}

// Unary Operator - These operator need only one value/operand
// +, -, ++, --

#include <iostream>
using namespace std;

int main(){
	int a = 13, b = 12;
	//a--, ++a, --a
	// a--; => a -= 1
	// a++ returns the value and then increment 
	// ++a first increment the value and then returns
	cout << a++ << endl;
	cout << ++b << endl;
	cout << endl;
	cout << a << endl;
	cout << b << endl;
	
// 	/* Which is better a-- or --a ??
// 	--a is better as it don't duplicate the value in a-- has to return 
// 	the value and store the value temporarily */

}


// How to take input in C++ ?
// new input can be seprated by a space or a new line no matter how many space you give 

#include <iostream>
using namespace std;

int main(){
	// string a, b, c, d, e;
	// cin >> a >> b >> c >> d >> e;
    // cout << a << endl;
	// cout << b << endl;
	// cout << c << endl;
	// cout << d << endl;
	// cout << e << endl;
	int a, b;
	cin >> a;
	cin >> b;
	
	cout << a*b;
}

// Check Your Understanding - 1
// Q-1 

#include <iostream>
using namespace std;

int main(){
	char a = '!';
	cout << a;
}

// Q-2

#include <iostream>
using namespace std;

int main(){
	int a;
	cin >> a;
	cout << a*7;
}

// Q-3

#include <iostream>
using namespace std;

int main(){
	float a, b;
	cin >> a >> b;
	cout << a+b << endl << a*b << endl << a/b << endl;
}

// If we want to do the about problem by taking datatype as int or we can do type conversion

#include <iostream>
using namespace std;

int main(){
	int a, b;
	a = 10;
	b = 14;
	cin >> a >> b;
	cout << a+b << endl << a*b << endl << (1.0*a)/b << endl;
}


// Condition & Relational Operator 
// ==, !=, <, >, <=, >=

#include <iostream>
using namespace std;
 
int main(){
	int a = 10; 
	int b = 14;
	 
	cout << (a < b);
	
	// "False" -> 0 
	// "True" -> 1
	
}


// Logical Operations

// AND(&&), OR(||), NOT(!) 

#include <iostream>
using namespace std;

int main(){
	int a = 3;
	int b = 5;
	int c = 11;
	
	cout << ((a < b) && (b>c));
	
}

// Conditional Statement ----- if, else if, else

#include <iostream>
using namespace std;

int main(){
	int a = 12;
	int b = 10;
	int c = 3;
	
	if (a < b){ // executed first
		cout << "a is less then b";
	}
	else if (b < c){ // executed next
		cout << "b is lesser then c";
	}
	else { // executed last   
		cout << "a is lesser then b and b is lesser then c";
	}
	// if the first statement is gonna true it will not gonna check the next condition
	

}


// Check your understanding - 2

Q-1

#include <iostream>
using namespace std;

int main(){
	int x, y, z;
	cin >> x >> y >> z;
	
	if ((x > y) && (y > z)){
		cout << "x is the biggest no.";
	}
	else if ((y > x) && (y > z)){
		cout << "y is the biggest no.";
	}
	else if((x >= y) && (y >=z)){
		cout << "all three are equal";
	}
	else {
		cout << "c is the biggest no.";
	}
}

// Way 2 of above question **(Doubt)**

#include <iostream>
using namespace std;

int main(){
	int x, y, z;
	cin >> x >> y >> z;
	int maxi = x;
	if (y > maxi){
		maxi = y;
	}
	if (z > maxi){
		maxi = z;
	}
	cout << maxi;
}

// Q-2

#include <iostream>
using namespace std;

int main(){
	int marks;
	cin >> marks;
	
	if (marks >= 90 && marks <= 100){
		cout << "You got A grade";
	}
	else if (marks >= 65 && marks <= 90){
		cout << "You got B grade";
	}
	else if (marks >= 30 && marks <= 65){
		cout << "You got C grade";
	}
	else if (marks >= 0 && marks <= 30){
		cout << "You got D grade";
	}
	else {
		cout << "Error";
	}
		
}



// Loops ---- for, while, do-while, go-to

// for loop 

// st2 = false;
// 		// even if st2 is false 

// st2 = true;
// 		// Now, In the next iteration it will check st2 again 

// #include <iostream>
// using namespace std;

// int main(){
// 	int i = 0;
// 	for (; i < 10;) ----/* statement 2 is the conditionof the loop it's checked after each iteration
// 	                       statement 1 is generally for decalaring a variable, In statement 3 we 
// 	                       generally set the steps */ 
// 	{
// 		cout << i << endl;
// 		++i; 
// 	}
// }

// While loop

#include <iostream>
using namespace std;

int main(){
	int i = 0;
	while (i < 10){    // In while loop we just have to write condition
		cout << i << endl;
		++i;
	}
}


// do-while loop

#include <iostream>
using namespace std;

int main(){
	int i = 10;
	do{     // It first goes into the loop execute that and then check the condition
		cout << i << endl;
		++i;
		
	}while (i < 5);
}


// Break Statement 

#include <iostream>
using namespace std;

int main(){
	for (int i = 0; i < 10; ++i){
		cout << i << endl;
		if (i == 5)
		{
			break;
		}
		
	}
}


// Continue 


#include <iostream>
using namespace std;

int main(){
	for (int i = 0; i < 10; ++i){
		if (i % 3 == 0){
			continue;
		}
		cout << i << endl;
	}
}	


// Nested Loop --- Loop inside the loop


#include <iostream>
using namespace std;

int main(){
	for (int i = 0; i < 10; ++i){
		for (int j = 0; j < 10 ; ++j){
			if (j % 3 == 0 && j > 0)    
			continue;
			
			cout << i << endl;
		}
		// IT WILL COME HERE
	}
	// NOT HERE
	
}


// Scope

#include <iostream>
using namespace std;

int main(){
	int a = 5;
	cout << a << endl;
	
	{ // here
		cout << a << endl;
		string a = "hello";
		cout << a << endl;
	}// to here only a is "hello"
	
	cout << a << endl;
}


// Scope resolution operator -- It's actually gonna take the global scope
// glbal variable takes less precedence then inner scope
// :: is a scope resolution operator

// #include <iostream>
// using namespace std;

// int a = 5;

// int main(){
// 	cout << ::a << endl;
// 	{
// 		cout << ::a << endl;
// 	}
	
// }


// go-to label_name statement


// #include <iostream>
// using namespace std;

// int main(){
// 	for (int i = 10; i < 100; ++i){
// 		for (int j = 4; j <=20; ++j){
// 			cout << j << endl;
// 			if (j % 6 == 0){
// 				goto label_name;
				
// 		}
// 			}
// 	}
// 	label_name:;
// }



// Check your understanding - 3 

// Q-1

// #include <iostream>
// using namespace std;

// int main(){
// 	int a;
// 	cin >> a;
// 	int sum = 0;
	
// 	for (int i = 1; i <= a; ++i){
// 		sum += i;
// 	}
// 	cout << sum << endl;
// }

// Q-2

// #include <iostream>
// using namespace std;

// int main(){
// 	int a;
// 	cin >> a;
	
// 	for (int i = 1; i <= a; ++i){
// 		if (a % 3 == 0 && a % 5 == 0){
// 			cout << "FizzBuzz"<< endl;
// 		}
// 		if (a % 3 == 0){
// 			cout << "Fizz"<< endl;
// 		}
// 		if (a % 5 == 0){
// 			cout << "Buzz"<< endl;
// 		}
// 	}
// }


































