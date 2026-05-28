#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void rand_mat(int n, int a[][n]){// nをaの宣言にも使っている
    srand((unsigned)time(NULL));
    for (int i=0; i<n ; i++){
        for (int j=0; j<n; j++) printf("%3d",a[i][j]=rand()%10);
        printf("\n");
    }
}
int main(void){
    int a[2][2],b[3][3];
    printf(" a=\n");
    rand_mat(2,a); // 2行2列のランダムな行列を生成して表示
    printf("\n b=\n");
    rand_mat(3,b); // 3行3列のランダムな行列を生成して表示
}
