#include "stdafx.h"
#include <iostream>

int main()
{
    // Задание №1
    std::cout << "1 " << "13 " << "49" << std::endl;

    // Задание №2
    char sym;
    std::cin >> sym;
    std::cout << "1" << sym << "13" << sym << "49" << std::endl;

    // Задание №3
    int num1, num2, num3;
    std::cin >> num1 >> num2 >> num3;
    std::cout << num1 << " " << num2 << " " << num3 << std::endl;

    // Задание №4
    double a, x, y;
    std::cout << "Enter a: ";
    std::cin >> a;
    x = 12 * a*a + 7 * a - 12;
    std::cout << "x= " << x << std::endl;
    std::cout << "Enter x: ";
    std::cin >> x;
    y = 3 * x*x*x + 4 * x*x - 11 * x + 1;
    std::cout << "y= " << y;
    
    // Задание №5
    double v, m, p;
    std::cout << "Enter body volume(m^3): ";
    std::cin >> v;
    std::cout << "Enter body mass(kg): ";
    std::cin >> m;
    p = m / v;
    std::cout << "This body density is " << p << " (kg/m^3)";
    
    // Задание №6
    double a1, b1, x1;
    std::cout << "Enter index a: ";
    std::cin >> a1;
    std::cout << "Enter index b: ";
    std::cin >> b1;
    if (a1 != 0) {
        x1 = (-b1) / a1;
        std::cout << "the solution of the equation is " << x1;
    }
    else
    {
        std::cout << "a != 0";
    }

    // Задание №7
    double X1, Y1, X2, Y2, dis;
    std::cout << "Enter coordinates of the first point" << std::endl << "X1 = ";
    std::cin >> X1;
    std::cout << "Y1 = ";
    std::cin >> Y1;
    std::cout << "Enter coordinates of the second point" << std::endl << "X2 = ";
    std::cin >> X2;
    std::cout << "Y2 = ";
    std::cin >> Y2;
    dis = sqrt((X2 - X1)*(X2 - X1) + (Y2 - Y1)*(Y2 - Y1));
    std::cout << "Distance between points is " << dis;

    // Задание №8
    double base, height, P;
    std::cout << "Enter length of base: ";
    std::cin >> base;
    std::cout << "Enter length of height: ";
    std::cin >> height;
    P = 2 * sqrt(base*base / 4 + height * height) + base;
    std::cout << "Perimeter is " << P;

    // Задание №9
    double r, R, pi, S;
    pi = 3.1415;
    std::cout << "Enter the larger radius: ";
    std::cin >> R;
    std::cout << "Enter the lesser radius: ";
    std::cin >> r;
    S = pi * R * R - pi * r * r;
    std::cout << "Area of this figure is " << S;

    // Задание №10
    double A, P1, S1;
    std::cout << "Enter the lenght of cube: ";
    std::cin >> A;
    P1 = A * 12;
    S1 = A * A * 6;
    std::cout << "Perimeter of this cube is " << P1 << std::endl << "area of this cube is " << S1;

    // Задание №11
    double sq, Per;
    std::cout << "Enter param. of square: ";
    std::cin >> sq;
    Per = 4 * sq;
    std::cout << "Perimeter of this square is " << Per;

    // Задание №12
    double r1, D;
    std::cout << "Enter radius of circle: ";
    std::cin >> r1;
    D = 2 * r1;
    std::cout << "Diameter of this circle is " << D;

    // Задание №13
    std::string name;
    std::cout << "What is your name? ";
    std::cin >> name;
    std::cout << "Hello, " << name << ", My name is C++.";

    // Задание №14
    char w[7];
    std::cin >> w;
    if (w[0] == w[6] && w[1] == w[5] && w[2] == w[4])
    {
        std::cout << "This is polindrom!";
    }
    else
    {
        std::cout << "It isn`t polindrom!";
    }
    return 0;
}
