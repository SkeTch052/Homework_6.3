#include "Class_Parent.h"
#include <string>

Figure::Figure() {
    sides_count = 0;
    name = "Фигура";
}
int Figure::get_sides_count() { return sides_count; }
std::string Figure::get_name() { return name; }

Triangle::Triangle() {
    name = "Треугольник";
    sides_count = 3;
    a = 10, b = 20, c = 30, A = 50, B = 60, C = 70;
}
int Triangle::get_side_a() { return a; }
int Triangle::get_side_b() { return b; }
int Triangle::get_side_c() { return c; }
int Triangle::get_angle_A() { return A; }
int Triangle::get_angle_B() { return B; }
int Triangle::get_angle_C() { return C; }

Quadrangle::Quadrangle() {
    name = "Четырёхугольник";
    sides_count = 4;
    a = 10, b = 20, c = 30, d = 40, A = 50, B = 60, C = 70, D = 80;
}
int Quadrangle::get_side_a() { return a; }
int Quadrangle::get_side_b() { return b; }
int Quadrangle::get_side_c() { return c; }
int Quadrangle::get_side_d() { return d; }
int Quadrangle::get_angle_A() { return A; }
int Quadrangle::get_angle_B() { return B; }
int Quadrangle::get_angle_C() { return C; }
int Quadrangle::get_angle_D() { return D; }