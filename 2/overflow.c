#include <stdio.h>
#include <math.h> // 冪乗の計算のために追加
int main(void){
    int a = -pow(2,31); // int型が扱える最小値
    printf("a=%d\n",a); 
    printf("a-1=%d\n",a-1); // 1を引くとオーバーフロー
}
