#include "Class_Child_Triangle.h"

Right_Triangle::Right_Triangle() {
    name = "������������� �����������";
    C = 90;
}
Isosceles_Triangle::Isosceles_Triangle() {
    name = "�������������� �����������";
    c = a; C = A;
}
Equilateral_Triangle::Equilateral_Triangle() {
    name = "�������������� �����������";
    a = c; b = c; A = B; C = B;
}