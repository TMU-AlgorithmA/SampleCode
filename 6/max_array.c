#include <stdio.h>
#define SIZE 4 // 配列の大きさ．

int main(void){
    int max,in[SIZE]; // 変数と配列の宣言
    // 配列の要素に値を代入
    for (int i=0;i<SIZE;i++) scanf("%d",&in[i]);

    // 最大値の計算
    max = in[0];
    for (int i=1;i<SIZE;i++) {
        if ( max < in[i] ) max = in[i];
    }
    printf("最大値は%dです\n",max);
}
