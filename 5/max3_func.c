#include <stdio.h>
// 2つの整数の最大値を返す関数
int max2(int a,int b) {
    if ( a > b ) return a;
    else return b;
}

int main(void){
    int in1,in2,in3,max;
    scanf("%d %d %d",&in1,&in2,&in3);
    max = max2(in1,in2); // 上で定義した関数の呼び出し
    max = max2(max,in3); // 上で定義した関数の呼び出し
    printf("最大値は%dです\n",max);
}
