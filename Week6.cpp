//Week 6 Assignment: Write a program to find and display the biggest number(element) in an array of integers.
//Hint the size of the array is unimportant as long as there's a way to check that the number displayed is definitely the biggest number.
#include <iostream>

using namespace std;

void PopulateArray(float theArray[], int size);
void DisplayArray(float theArray[], int size);

float GetSmallestGrade(float theArray[], int size);
float GetAverage(float theArray[], int size);

int main()
{
    constexpr int kSize = 5;
    float myGrades[kSize];
    cout << " is " << average << endl;

    cout << "Largest grade is: " << GetLargestGrade(myGrades, kSize) << endl;
    cout << "Smallest grade is: " << GetSmallestGrade(myGrades, kSize) << endl;
}

void PopulateArray(float theArray[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cin >> theArray[i];
    }
}

void DisplayArray(float theArray[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << theArray[i] << " ";
    }
}

float GetAverage(float theArray[], int size)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += theArray[i];
    }
    return sum / size;
}

float GetLargestGrade(float theArray[], int size)
{
    float largest = theArray[0];
    for (int i = 1; i < size; i++)
    {
        if (theArray[i] > largest)
        {
            largest = theArray[i];
        }
    }
    return largest;
}

float GetSmallestGrade(float theArray[], int size)
{
    float smallest = theArray[0];
    for (int i = 1; i < size; i++)
    {
        if (theArray[i] < smallest)
        {
            smallest = theArray[i];
        }
    }
    return smallest;
}
