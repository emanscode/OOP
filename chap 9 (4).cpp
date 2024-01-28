#include <iostream>

// Function to print a triangle of stars
void printStarTriangle(int n) 
   {
    for (int i = 1; i <= n; ++i)
	 {
        // Print spaces
        for (int j = 1; j <= n - i; ++j) 
		{
            std::cout << " ";
        }

        // Print stars
        for (int k = 1; k <= 2 * i - 1; ++k)
	    {
            std::cout << "*";
        }

        // Move to the next line
        std::cout << std::endl;
      }
    }

int main() {
    int height;

    // Input the height of the triangle
    std::cout << "Enter the height of the triangle: ";
    std::cin >> height;

    // Call the function to print the triangle
    printStarTriangle(height);

    return 0;
}

