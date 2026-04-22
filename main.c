#include <stdio.h>

int main() {
    int a, b, c;

    int *p_a = &a;
    int *p_b = &b;
    int *p_c = &c;


    if (scanf("%d %d %d", &a, &b, &c)) {
        return 1; 
    }

    int soucet = *p_a + *p_b + *p_c;

    int maximum = *p_a;
    if (*p_b > maximum) {
        maximum = *p_b;
    }
    if (*p_c > maximum) {
        maximum = *p_c;
    }


    printf("Soucet: %d\n", soucet);
    printf("Maximum: %d\n", maximum);

    return 0;
}

