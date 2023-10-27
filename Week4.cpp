// Week4.cpp : Write a program that uses a function to return the value of a number cubed. Take the number as an input from the user and print the cubed value back to the user.
#include <iostream>

using namespace std;

// Function to calculate the cube of a number
double CalculateCube(double number) 
{
    return number * number * number;
}

int main() 
{
    double number;

    // Prompt the user for input
    cout << "Enter a number: ";
    cin >> number;

    // Calculate the cube using the function
    double cube = CalculateCube(number);

    // Display the result
    cout << "The cube of " << number << " is: " << cube << endl;

    return 0;
}
