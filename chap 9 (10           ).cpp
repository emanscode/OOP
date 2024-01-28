#include<iostream>
using namespace std;

// Function prototype
bool isPrime(int num);

int main() {
    int number;

    // Input a number from the user
    cout << "Enter a number: ";
    cin >> number;

    // Call the function to check if the number is prime and display the result
    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}

// Function definition
bool isPrime(int num) {
    if (num <= 1) {
        return false;  // Numbers less than or equal to 1 are not prime
    }

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;  // If the number has a divisor in the range [2, sqrt(num)], it is not prime
        }
    }

    return true;  // If no divisors were found, the number is prime
}

