#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM 10 // 配列の大きさを管理
int main(void){
    int a[NUM];
    srand((unsigned)time(NULL)); // おまじない
    for (int i=0;i<NUM;i++) a[i] = rand()%100; // 0から99の乱数
    for (int i=0;i<NUM;i++) printf("%d\n",a[i]); // 表示
}
