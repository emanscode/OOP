#include <iostream>

// Function declaration
int Reverse(int num);

int main() 
{
    int number;

    // Input a number from the user
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Call the function to reverse the number
    int reversedNumber = Reverse(number);

    // Display the reversed number
    std::cout << "Reversed number: " << reversedNumber << std::endl;
}

// Function definition
int Reverse(int num) 
{
    int reversedNumber = 0;

    while (num != 0) 
    {
        int remainder = num % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        num /= 10;
    }

    return reversedNumber;
}

