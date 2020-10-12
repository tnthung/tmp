#include <stdlib.h>
#include <stdio.h>


int main() {
    int a1, a2, a3, a4, a5, a6, a7, a8, a9;
    int b1, b2, b3, b4, b5, b6, b7, b8, b9;

    printf("A:\n");
    scanf("%d %d %d %d %d %d %d %d %d", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9);
    printf("B:\n");
    scanf("%d %d %d %d %d %d %d %d %d", &b1, &b2, &b3, &b4, &b5, &b6, &b7, &b8, &b9);

    printf("A+B:\n");
    printf("%d %d %d\n", a1+b1, a2+b2, a3+b3);
    printf("%d %d %d\n", a4+b4, a5+b5, a6+b6);
    printf("%d %d %d\n", a7+b7, a8+b8, a9+b9);

    printf("A-B:\n");
    printf("%d %d %d\n", a1-b1, a2-b2, a3-b3);
    printf("%d %d %d\n", a4-b4, a5-b5, a6-b6);
    printf("%d %d %d\n", a7-b7, a8-b8, a9-b9);

    return 0;
}
