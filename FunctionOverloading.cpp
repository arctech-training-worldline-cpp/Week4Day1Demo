#include <iostream>
using namespace std;

int area(int);
int area(int, int);
double area(double);

int main()
{
    cout << "Calling area() for computing the area of a square (side = 5)" << area(5) <<endl;
    cout << "Calling area() for computing the area of a rectangle (length = 5, breadth = 6)" << area(5, 6) <<endl;
    cout << "Calling area() for computing the area of a circle (rad = 7.5)" << area(7.5) <<endl;

    return 0;
}

int area(int side)
{
    return (side * side);
}

int area(int length, int breadth)
{
    return (length * breadth);
}

double area(double rad)
{
    return (3.14 * rad * rad);
}