//
// Created by Ya Nan on 2018/5/9.
//

#include <stdio.h>

struct point {
    int x;
    int y;
} alpha;

typedef struct point Point;

int return_x(struct point a_point) {
    printf("x: %d\n", a_point.x);
    return a_point.x;
}

int main() {
    Point beta;
    beta.x = 1;
    beta.y = 2;
    return_x(beta);
}