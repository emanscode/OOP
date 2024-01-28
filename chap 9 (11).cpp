#include <iostream>
#include<cmath>
using namespace std;

// Function declarations
int gcd(int a, int b);
int LCM(int num1, int num2);

int main() {
    int number1, number2;

    // Input two integers from the user
   cout << "Enter the first integer: ";
   cin >> number1;

    cout << "Enter the second integer: ";
    cin >> number2;

    // Call the function to calculate and display the LCM
    int lcmResult = LCM(number1, number2);

   cout << "LCM of " << number1 << " and " << number2 << " is: " << lcmResult <<endl;

    return 0;
}

// Function to calculate the Greatest Common Divisor (GCD) using Euclid's algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate the Least Common Multiple (LCM) of two integers
int LCM(int num1, int num2) {
    if (num1 == 0 || num2 == 0) {
        return 0; // LCM is undefined for zero
    }

    // LCM = (|num1 * num2|) / GCD(num1, num2)
    return abs(num1 * num2) / gcd(num1, num2);
}

