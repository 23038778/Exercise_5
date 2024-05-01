#include <iostream>
#include <cmath>

class Point {
private:
    double x;
    double y;

public:
    // Constructor to initialize the point with given coordinates
    Point(double x_coord, double y_coord) : x(x_coord), y(y_coord) {}

    // Function to calculate the distance between this point and another point
    double distance(const Point& other) const {
        return sqrt((other.x - x) * (other.x - x) + (other.y - y) * (other.y - y));
    }
};

int main() {
    // Variables to store the coordinates of the two points
    double x1, y1, x2, y2;

    // Input the coordinates of the first point
    std::cout << "Enter the coordinates of point 1 (x1 y1): ";
    std::cin >> x1 >> y1;

    // Input the coordinates of the second point
    std::cout << "Enter the coordinates of point 2 (x2 y2): ";
    std::cin >> x2 >> y2;

    // Create two Point objects representing the given coordinates
    Point point1(x1, y1);
    Point point2(x2, y2);

    // Calculate and display the distance between the two points
    std::cout << "Distance between the two points: " << point1.distance(point2) << std::endl;

    return 0;
}

