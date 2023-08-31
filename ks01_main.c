// https://youtu.be/qqtmtuedaBM?si=PiTTYzwQRPtULcKS
// Structs (Structures) in C - An Introductory Tutorial on typedefs, struct pointers, & arrow operator
// Kris Jordan. stop 00:05:08
#include <stdio.h>
#include <stdlib.h>

// use typedef to declare struct
typedef struct Point {
    double x;
    double y;
} Point;

// void Point_print(const Point* self);
void Point_print(Point* self);

int main()
{
Point aPoint = {1.0, 2.0};
Point_print(&aPoint);
}

// void Point_print(const Point *self)
void Point_print(Point *self)
{
    // using self->x and (*self).y to get same dereferencing results
    printf("%.2f, %0.2f", self->x, (*self).y);

}