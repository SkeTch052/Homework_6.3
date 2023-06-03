#pragma once
#include "Class_Parent.h"

class Rectangle : public Quadrangle { public: Rectangle(); };
class Square : public Rectangle { public: Square(); };
class Parallelogram : public Rectangle { public: Parallelogram(); };
class Rhombus : public Parallelogram { public: Rhombus(); };