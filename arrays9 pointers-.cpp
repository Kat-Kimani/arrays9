//Pointers
#include<iostream>
using namespace std;

int main() {
	//Declare double variables and initialize 
	double number1 = 7.3;
	double number2;
	double *ptr;

	ptr = &number1;
	cout << *ptr << endl;

	//Print the value of the object pointed to by ptr
	cout << &number1 << endl;

	//Assign variable number2 the value of object pointed to by ptr
	number2 = *ptr;

	//print the address of variable number1
	cout << &number1 << endl;

	//print the address stored in ptr
	cout << &ptr << endl;

	return 0;

}
