//Week 5 Assignment: Write a program to display all factors of a number provided by the user. Take an input of a positive value and write back all of the values factors.
// I added on in the assignment that if the user enters a negative number the loop will continue to ask the user
// to enter a positive number.
#include <iostream>

using namespace std;

int main() 
{
    int number;

    // Get user input for a positive number
    do 
    {
        cout << "Enter a positive number: ";
        cin >> number;
        //If the number is negative, the user will get a message to enter a positive number.
        if (number <= 0)
        {
            cout << "Please enter a positive number." << endl;
        }
    } while (number <= 0);
    //Display the factors of the positive number.
    cout << "Factors of " << number << ": ";
    //Loop will add +1 until the user enters a positive number.
    int i = 1;
    do 
    {
        if (number % i == 0) 
        {
            cout << i << " ";
        }
        i++;
    } while (i <= number);
    //Loop will end once a positive number is entered.
    cout << endl;

    return 0;
}
