//
// Created by Ya Nan on 2018/5/9.
//

#include <stdio.h>

struct point {
    int x;
    int y;
} alpha = {4, 5}; // 可以直接初始化这个变量。

typedef struct point Point;

int return_x(struct point a_point) {
    printf("x: %d\n", a_point.x);
    return a_point.x;
}

int return_y(Point a_point) {
    printf("y: %d\n", a_point.y);
    return a_point.y;
}

void print_point(Point a_point) {
    printf("x: %d\n", a_point.x);
    printf("y: %d\n", a_point.y);
}

int main() {
    Point beta;

    beta.x = 1;
    beta.y = 2;

    return_x(beta);
    return_y(beta);

    print_point(alpha);
}