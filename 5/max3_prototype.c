#include <stdio.h>
int max2(int a,int b); // プロトタイプ宣言

int main(void){
    int in1,in2,in3,maximum;
    scanf("%d %d %d",&in1,&in2,&in3);
    maximum = max2(in1,in2); // 関数の呼び出し
    maximum = max2(maximum,in3); // 関数の呼び出し
    printf("最大値は%dです\n",maximum);
}

// 2つの整数の最大値を返す関数
int max2(int a,int b) {
    if ( a > b ) return a;
    else return b;
}
