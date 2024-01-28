#include<iostream>
using namespace std;

// Function declarations
void Draw_Horizontal(int length);
void Draw_Vertical(int height);

int main() {
    int width, height;

    // Input width and height of the rectangle from the user
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    cout << "Enter the height of the rectangle: ";
    cin >> height;

    // Draw the rectangle using the functions
    cout << "Rectangle:" << endl;

    // Draw the top horizontal line
    Draw_Horizontal(width);

    // Draw the vertical sides
    for (int i = 0; i < height - 2; ++i) {
        cout << "*";
        for (int j = 0; j < width - 2; ++j) {
            cout << " ";
        }
        cout << "*" << endl;
    }

    // Draw the bottom horizontal line
    if (height > 1) {
        Draw_Horizontal(width);
    }

    return 0;
}

// Function to draw a horizontal line of a given length
void Draw_Horizontal(int length) {
    for (int i = 0; i < length; ++i) {
        cout << "*";
    }
    cout << endl;
}

// Function to draw a vertical line of a given height
void Draw_Vertical(int height) {
    for (int i = 0; i < height; ++i) {
        cout << "*" << endl;
    }
}

