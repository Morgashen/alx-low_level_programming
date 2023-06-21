#include <stdio.h>

int find_largest(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main(void) {
    int a, b, c;
    int largest;

    a = 972;
    b = -98;
    c = 0;
    largest = find_largest(a, b, c);

    printf("%d is the largest number\n", largest);
    return 0;
}
