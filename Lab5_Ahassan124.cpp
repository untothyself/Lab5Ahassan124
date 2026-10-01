/**
 * @file Lab4Ahassan124.cpp
 * @author Abass Hassan
 * @date 2026-09-25
 * @brief A program to generate a multiplication table with input validation.
 */

#include <iostream>
using namespace std;

// Fuction Prototype
int getValidMaxDigit();
void printMultiplicationTable(int maxDigit);

/**
 * @brief Program to generate a multiplication table with input validation.
 * @return 0 on success.
 */

int main()
{
    int maxDigit = getValidMaxDigit();
    printMultiplicationTable(maxDigit);
    return 0;
}

/**
 * @brief Prompts for max digit and checks if it it between 4 and 10.
 * @return max digit integer (5, 6, 7, 8, or 0)
 */

int getValidMaxDigit()
{
    int maxDigit = 0;

    // intial
    cout << "please enter the maximum digit for the multiplication table." << endl;
    cout << "The digit must be greater than 4 and less than 10" << endl;

    // Input
    cout << "Max Digit: ";
    cin >> maxDigit;

    // Validation loop

    while (maxDigit <= 4 || maxDigit >= 10)
    {
        cout << "Error: The max digit must be greater than 4 and less than 10. Please try again." << endl;
        cout << "Max Digit: ";
        cin >> maxDigit;
    }

    return maxDigit;
}
/**
 * @brief Displays the multiplication table
 * @param maxDigit upper limit for the table rows and columns.
 */
void printMultiplicationTable(int maxDigit)
{
    for (int row = 1; row <= maxDigit; ++row)
    {
        for (int col = 1; col <= maxDigit; ++col)
        {
            cout << (row * col) << "\t";
        }
        cout << endl;
    }
}