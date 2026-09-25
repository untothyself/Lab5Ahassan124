/**
 * @file Lab4Ahassan124.cpp
 * @author Abass Hassan
 * @date 2026-09-25
 * @brief A program to generate a multiplication table with input validation.
 */

#include <iostream>
using namespace std;
int main()
{
    int maxDigit = 0;

    // instructions
    cout << "please enter the maximum digit for the multiplication table." << endl;
    cout << "The digit must be greater than 4 and less than 10" << endl;

    cout << "Max Digit: ";
    cin >> maxDigit;

    while (maxDigit <= 4 || maxDigit >= 10)
    {
        cout << "Error: The max digit must be greater than 4 and less than 10. Please try again." << endl;
        cout << "Max Digit: ";
        cin >> maxDigit;
    }

    for (int row = 1; row <= maxDigit; ++row)
    {
        for (int col = 1; col <= maxDigit; ++col)
        {
            cout << (row * col) << "\t";
        }
        cout << endl;
    }
    return 0;
}