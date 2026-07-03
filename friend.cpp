#include <iostream>
#include <cmath>
using namespace std;
class Point
{
private:
    double x, y;
public:
    Point(double a = 0, double b = 0) : x(a), y(b) {}
    friend double distance(Point p1, Point p2);
};
double distance(Point p1, Point p2)
{
    double dx = p1.x - p2.x;
    double dy = p1.y - p2.y;
    return sqrt(dx * dx + dy * dy);
}
int main() 
{
    Point p1(1, 2), p2(3, 4);
    cout << "两点间距离:" << distance(p1, p2) << endl;
    return 0;
}