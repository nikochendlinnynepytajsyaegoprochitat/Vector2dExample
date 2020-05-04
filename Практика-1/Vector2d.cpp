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

Vector2d::operator string()
{
	string s = "(" + to_string(this->x) + "," + to_string(this->y) + ")";
	return s;
}

Vector2d Vector2d::operator+(const Vector2d& vector) const
{
	return Vector2d(x + vector.x, y + vector.y);
}

Vector2d Vector2d::operator-(const Vector2d& vector) const
{
	return Vector2d(x - vector.x, y - vector.y);
}

double Vector2d::operator*(const Vector2d& vector) const
{
	return x*vector.x+y*vector.y;
}

Vector2d Vector2d::operator*(double number) const
{
	return Vector2d(x * number, y * number);
}

Vector2d& Vector2d::operator++() {
	x++;
	y++;
	return *this;
}

Vector2d Vector2d::operator++(int) {
	Vector2d vector(x, y);
	x++;
	y++;
	return vector;
}

Vector2d& Vector2d::operator--() {
	x--;
	y--;
	return *this;
}

Vector2d Vector2d::operator--(int) {
	Vector2d vector(x, y);
	x--;
	y--;
	return vector;
}
