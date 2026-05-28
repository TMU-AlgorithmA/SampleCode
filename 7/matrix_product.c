#include <stdio.h>
#define SIZE 2
void prod_matrix(const int a[][SIZE], const int b[][SIZE], int c[][SIZE]){
    for (int i=0; i<SIZE ; i++)
        for (int j=0; j<SIZE; j++){
            c[i][j] = 0;
            for (int k=0; k<SIZE; k++) c[i][j]+= a[i][k]*b[k][j];
        }
}

int main(void){
    int a[][SIZE]={{1,2},{3,4}}, b[][SIZE]={{3,4},{5,6}}, c[SIZE][SIZE];
    prod_matrix(a,b,c);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) printf("%3d",c[i][j]);
        printf("\n");
    }
}
