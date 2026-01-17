//Elgin Gjyzeli AI25
#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    int max;
	int side1;
	int side2;

   printf("Enter side 1 in cm: ");
    scanf("%d", &a);

    printf("Enter side 2 in cm: ");
    scanf("%d", &b);

    printf("Enter side 3 in cm: ");
    scanf("%d", &c);

    if (a >= b && a >= c) {
        max = a; side1 = b; side2 = c;
    } else if (b >= a && b >= c) {
        max = b; side1 = a; side2 = c;
    } else {
        max = c; side1 = a; side2 = b;
    }
    if (max * max == side1 * side1 + side2 * side2) {
        printf("It is a right triangle. \n");
    } else {
        printf("It is not a right triangle. \n");
    }

    return 0;
}

