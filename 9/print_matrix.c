#include <stdio.h>
void print_matrix(int *p,int n,int m){
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            printf("%3d",p[i*m+j]); // p[i*m+j]でa[i][j]にアクセス
        }
        printf("\n");
    }
}

int main(void){
    int a[2][3]={{1,2,3},{4,5,6}};
    print_matrix(&a[0][0],2,3);
}
