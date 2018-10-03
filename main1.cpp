#include <iostream>
#include <string>
#include <cmath>

int main()
{
    // Задание №1
    std::cout << "1 " << "13 " << "49" << std::endl << std::endl;

    // Задание №2
    char sym = 's';
    std::cout << "1" << sym << "13" << sym << "49" << std::endl << std::endl;

    // Задание №3
    int num1 = 6, num2 = 90, num3 = 34;
    std::cout << num1 << " " << num2 << " " << num3 << std::endl << std::endl;

    // Задание №4
    double a = 3, x = 65, y;
    std::cout << "Enter a: " << a << std::endl;
    x = 12 * a*a + 7 * a - 12;
    std::cout << "x= " << x << std::endl;
    std::cout << "Enter x: " << x << std::endl;
    y = 3 * x*x*x + 4 * x*x - 11 * x + 1;
    std::cout << "y= " << y << std::endl << std::endl;

    // Задание №5
    double v = 5, m = 10, p;
    std::cout << "Enter body volume(m^3): " << v << std::endl;
    std::cout << "Enter body mass(kg): " << m << std::endl;
    p = m / v;
    std::cout << "This body density is " << p << " (kg/m^3)" << std::endl << std::endl;

    // Задание №6
    double a1 = 60, b1 = 32, x1;
    std::cout << "Enter index a: " << a1 << std::endl;
    std::cout << "Enter index b: " << b1 << std::endl;
    if (a1 != 0) {
        x1 = (-b1) / a1;
        std::cout << "the solution of the equation is " << x1 << std::endl << std::endl;
    }
    else
    {
        std::cout << "a != 0" << std::endl << std::endl;
    }

    // Задание №7
    double X1 = 43, Y1 = 23, X2 = 78, Y2 = 87, dis;
    std::cout << "Enter coordinates of the first point" << std::endl << "X1 = " << X1 << std::endl;
    std::cout << "Y1 = " << Y1 << std::endl;
    std::cout << "Enter coordinates of the second point" << std::endl << "X2 = " << X2 << std::endl;
    std::cout << "Y2 = " << Y2 << std::endl;
    dis = sqrt((X2 - X1)*(X2 - X1) + (Y2 - Y1)*(Y2 - Y1));
    std::cout << "Distance between points is " << dis << std::endl << std::endl;

    // Задание №8
    double base = 50, height = 56, P;
    std::cout << "Enter length of base: " << base << std::endl;
    std::cout << "Enter length of height: " << height << std::endl;
    P = 2 * sqrt(base*base / 4 + height * height) + base;
    std::cout << "Perimeter is " << P << std::endl << std::endl;

    // Задание №9
    double r = 3, R = 5, pi, S;
    pi = 3.1415;
    std::cout << "Enter the larger radius: " << R << std::endl;
    std::cout << "Enter the lesser radius: " << r << std::endl;
    S = pi * R * R - pi * r * r;
    std::cout << "Area of this figure is " << S << std::endl << std::endl;

    // Задание №10
    double A = 12, P1, S1;
    std::cout << "Enter the lenght of cube: " << A << std::endl;
    P1 = A * 12;
    S1 = A * A * 6;
    std::cout << "Perimeter is " << P1 << std::endl << "area is " << S1 << std::endl << std::endl;

    // Задание №11
    double sq = 12, Per;
    std::cout << "Enter param. of square: " << sq << std::endl;
    Per = 4 * sq;
    std::cout << "Perimeter of this square is " << Per << std::endl << std::endl;

    // Задание №12
    double r1 = 5, D;
    std::cout << "Enter radius of circle: " << r1 << std::endl;
    D = 2 * r1;
    std::cout << "Diameter of this circle is " << D << std::endl << std::endl;

    // Задание №13
    char name[] = "Georgy";
    std::cout << "What is your name? " << name << std::endl;
    std::cout << "Hello, " << name << ", My name is C++." << std::endl << std::endl;

    // Задание №14
    char static w[7] = {'1', '2', '3', '4', '3', '2', '1'};
    std::cout << "Enter word: " << w << std::endl;
    if (w[0] == w[6] && w[1] == w[5] && w[2] == w[4])
    {
        std::cout << "This is polindrom!" << std::endl << std::endl;
    }
    else
    {
        std::cout << "It isn`t polindrom!" << std::endl << std::endl;
    }
    return 0;
}
