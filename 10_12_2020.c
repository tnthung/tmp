#include <stdlib.h>
#include <stdio.h>

int main() {
    int i, j;
    for (i=0; i<9; i++) {
        int a, b, c;
        
        scanf("%d%d", &a, &b);
        printf("%d ", a+b);
        if (i%3==2)
            printf("\n");
    }
}
