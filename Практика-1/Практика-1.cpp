// Практика-1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Vector2d.h"

using namespace std;

int main()
{
    Vector2d a(4, 4, 1, 3);
    Vector2d b(a);
    a.print();
    b.mult(3);
    b.print();
}
