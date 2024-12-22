#include <iostream>
#include <cmath>
using namespace std;

double calculateArea(double radius) {
    return M_PI * radius * radius;
}

double calculateArea(double length, double width) {
    return length * width;
}

double calculateArea(double base, double height, int) {
    return 0.5 * base * height;
}

int main() {
    int choice;
    cout << "Choose the shape to calculate area:\n";
    cout << "1. Circle\n";
    cout << "2. Rectangle\n";
    cout << "3. Triangle\n";
    cin >> choice;

    if (choice == 1) {
        double radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        cout << "Area of the circle: " << calculateArea(radius) << endl;
    } else if (choice == 2) {
        double length, width;
        cout << "Enter the length and width of the rectangle: ";
        cin >> length >> width;
        cout << "Area of the rectangle: " << calculateArea(length, width) << endl;
    } else if (choice == 3) {
        double base, height;
        cout << "Enter the base and height of the triangle: ";
        cin >> base >> height;
        cout << "Area of the triangle: " << calculateArea(base, height, 0) << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
