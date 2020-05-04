#pragma once

#include <string>
using namespace std;

class Vector2d
{
private:
	double x, y;
public:
	Vector2d() { x = 0; y = 0; }
	Vector2d(double, double);
	Vector2d(double, double, double, double);
	Vector2d(const Vector2d&);
	void setx(double value) { x = value; }
	double getx() { return x; }
	void sety(double value) { y = value; }
	double gety() { return y; }
	Vector2d operator+(const Vector2d& vector) const;
	Vector2d operator-(const Vector2d& vector) const;
	double operator*(const Vector2d& vector) const;
	Vector2d operator*(double number) const;
	Vector2d& operator++();
	Vector2d operator++(int);
	Vector2d& operator--();
	Vector2d operator--(int);
	operator string();
};