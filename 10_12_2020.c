#include <stdlib.h>
#include <stdio.h>


int[3][3] Matadd(int[3][3] a, int[3][3]b) {
    int[3][3] tmp;
    
    int i, j;
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            tmp[i][j] = a[i][j] + b[i][j];
        }
    }
}
