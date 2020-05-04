#include "Vector2d.h"
#include <iostream>
#include <string>

using namespace std;

Vector2d::Vector2d(double x, double y)
{
	this->x = x; 
	this->y = y;
}

Vector2d::Vector2d(double x1, double y1, double x2, double y2) 
{
	this->x = x2 - x1;
	this->y = y2 - y1;
}

Vector2d::Vector2d(const Vector2d &Vector2d)
{
	this->x = Vector2d.x;
	this->y = Vector2d.y;
}

void Vector2d::print(void)
{
	cout << "("+to_string(this->x)+","+to_string(this->y)+")";
}

Vector2d Vector2d::sum(Vector2d vector)
{
	return Vector2d(this->x + vector.x, this->y + vector.y);
}

Vector2d Vector2d::sub(Vector2d vector)
{
	return Vector2d(this->x - vector.x, this->y - vector.y);
} 

Vector2d Vector2d::mult(double number)
{
	return Vector2d(this->x * number, this->y * number);
}

double Vector2d::scalarMult(Vector2d Vector2d)
{
	return this->x * Vector2d.x + this->y * Vector2d.y;
}