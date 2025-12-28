/* Algorithm Challenge & Problem Solving
 * 49 - Custom Ceil Function (Without Built-in ceil)
 *
 * This program implements a custom ceiling (ceil) function without using the built-in ceil() function in C++.
 *
 * Ceil Rule:
 * - Ceil returns the smallest integer that is greater than or equal to the given number.
 *
 * Examples:
 *  10.8  -> 11
 * -10.8  -> -10
 *  5.0   -> 5
 *
 * This challenge focuses on fractional extraction, conditional logic, and correct handling of negative numbers.
 */

#include <iostream>
#include <cmath>

using namespace std;

float GetFractionPart(float Number)
{
    // Extract the fractional part of the number
    // Example: 10.7 - 10 = 0.7
    return Number - int(Number);
}

int MyCeil(float Number)
{
    // Check if the number has a fractional part
    if (abs(GetFractionPart(Number)) > 0)
    {
        // If the number is positive, move to the next integer
        if (Number > 0)
            return int(Number) + 1;

        // If the number is negative, return the integer part
        else
            return int(Number);
    }
    else
    {
        // If there is no fractional part, return the number as-is
        return Number;
    }
}

float ReadNumber()
{
    float Number;

    // Read a floating-point number from the user
    cout << "Enter Float Number\n";
    cin >> Number;

    return Number;
}

int main()
{
    float Number = ReadNumber();

    // Display custom ceil result
    cout << "My Ceil = " << MyCeil(Number) << endl;

    // Display C++ built-in ceil result for comparison
    cout << "C++ Ceil = " << ceil(Number) << endl;

    return 0;
}
