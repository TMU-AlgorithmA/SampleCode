#include <stdio.h>
int main(void){
    int a=1,b=2; // 初期化
    printf("平均 = %d\n",(a+b)/2); // int型のまま計算
    printf("平均 = %f\n",(a+b)/2.0); // double型になる
}