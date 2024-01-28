#include <iostream>
#include <cmath>

// Function declaration
long long Reverse(long long num);

int main() 
{
    long long number;

    // Input a number from the user
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Call the function to reverse the number
    long long reversedNumber = Reverse(number);

    // Display the reversed number
    std::cout << "Reversed number: " << reversedNumber << std::endl;
}

// Function definition
long long Reverse(long long num) 
{
    long long reversedNumber = 0;

    while (num != 0) 
    {
        int digit = num % 10;
        reversedNumber = reversedNumber * 10 + digit;
        num /= 10;
    }

    return reversedNumber;
}

