#include <iostream>
#include <math.h>
using namespace std;

float squareArea(float side);
float rectArea(float a, float b);
float circleArea(float rad);

int main()
{
    float a = 2, b = 3, rad = 3, side = 4;
    float e = squareArea(side);
    float f = rectArea(a, b);
    float g = circleArea(rad);
    cout<<"Square Area is: "<<e<<endl;
    cout<<"Rectangle Area is: "<<f<<endl;
    cout<<"Circle Area is: "<<g<<endl;
    return 0;
}

float squareArea(float side)
{
    return side * side;
}
float rectArea(float a, float b)
{
    return a * b;
}
float circleArea(float rad)
{
    return 3.14 * rad * rad;
}