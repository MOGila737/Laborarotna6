#include <stdio.h>

int main() {
    int t1, t2;
    double g = 9.81;

    printf("Tilo\n");

    printf("Enter t1: ");
    scanf_s("%d", &t1);

    printf("Enter t2: ");
    scanf_s("%d", &t2);

    double S1 = g * t1 * t1 / 2;
    double S2 = g * t2 * t2 / 2;

    printf("Pisla %d sek: %.2f m\n", t1, S1);
    printf("Pisla %d sek: %.2f m\n", t2, S2);

    return 0;
}
