#include "Class_Child_Quadrangle.h"

Rectangle::Rectangle() {
    name = "�������������";
    c = a; d = b;
    A = 90; B = 90; C = 90; D = 90;
}
Square::Square() {
    name = "�������";
    c = b; a = b;
}
Parallelogram::Parallelogram() {
    name = "��������������";
    A = 30; C = A; B = 40; D = B;
}
Rhombus::Rhombus() {
    name = "����";
    a = 30; b = a; c = a; d = a;
}