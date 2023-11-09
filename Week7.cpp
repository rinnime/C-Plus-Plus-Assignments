//Write a program that asks the user to enter integers to be stored in the variables 'a' and 'b'. Then create two integer pointers named ptrA and ptrB. Assign the values of 'a' and 'b' to ptrA and ptrB, and display them.
//Take an input variable and display the same value by pointer.
#include <iostream>

using namespace std;
//Integer pointers ptrA and ptrB
void Swap(int* ptrA, int* ptrB);

int main()
{
	//Enter an integer fo a
	int a;
	cout << "Enter an integer for variable a: ";
	cin >> a;
	//Enter another integer b
	int b;
	cout << "Enter an integer for variable b: ";
	cin >> b;

	Swap(&a, &b);
	//Display variables
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


}

//Assign value a to ptrA and b to ptrB
void Swap(int* ptrA, int* ptrB)
{
	int temp = *ptrA;
	*ptrA = *ptrB;
	*ptrA = temp;

}