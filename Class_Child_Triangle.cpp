#include "Class_Child_Triangle.h"

Right_Triangle::Right_Triangle() {
    name = "Прямоугольный треугольник";
    C = 90;
}
Isosceles_Triangle::Isosceles_Triangle() {
    name = "Равнобедренный треугольник";
    c = a; C = A;
}
Equilateral_Triangle::Equilateral_Triangle() {
    name = "Равносторонний треугольник";
    a = c; b = c; A = B; C = B;
}