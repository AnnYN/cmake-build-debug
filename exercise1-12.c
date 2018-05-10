//
// Created by Ya Nan on 2018/5/5.
//
#include <stdio.h>

#define  IN 1   //inside a word
#define  OUT 0 //outside a word

//print input one word per line
int main() {
    int c, state;

    state = OUT;
    while ((c = getchar()) != z) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                putchar('\n');
                state = OUT;
            }
        } else if (state == OUT) {
            state = IN;
            putchar(c);
        } else
            putchar(c);
    }
}
