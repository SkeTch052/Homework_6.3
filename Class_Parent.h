#pragma once
#include <string>

class Figure {
protected:
    int sides_count;
    std::string name;
public:
    Figure();
    int get_sides_count();
    std::string get_name();
};

class Triangle : public Figure {
protected:
    int a, b, c, A, B, C;
public:
    Triangle();
    int get_side_a();
    int get_side_b();
    int get_side_c();
    int get_angle_A();
    int get_angle_B();
    int get_angle_C();
};

class Quadrangle : public Figure {
protected:
    int a, b, c, d, A, B, C, D;
public:
    Quadrangle();
    int get_side_a();
    int get_side_b();
    int get_side_c();
    int get_side_d();
    int get_angle_A();
    int get_angle_B();
    int get_angle_C();
    int get_angle_D();
};