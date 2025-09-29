#include <stdio.h>

int main() {
    int x, y, z;

    printf("Enter value of X: ");
    scanf("%d", &x);

    printf("Enter value of Y: ");
    scanf("%d", &y);

    printf("Enter value of Z: ");
    scanf("%d", &z);

    if (x >= y && x >= z) {
        printf("The largest value is x = %d\n", x);
    } 
    else if (y >= x && y >= z) {
        printf("The largest value is y = %d\n", y);
    } 
    else {
        printf("The largest value is z = %d\n", z);
    }

    return 0;
}

