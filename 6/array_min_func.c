#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10 // 配列の大きさを管理
int min_array(int a[],int n) { // 配列のサイズは別の引数で渡す
    int min = a[0];
    for (int i=1; i<n ; i++) min = min > a[i] ? a[i] : min;
    return min;
}

int main(void){
    int a[SIZE];
    srand((unsigned)time(NULL)); // おまじない
    for (int i=0;i<SIZE;i++) a[i] = rand()%100; // ランダムな整数
    printf("最小値：%d\n",min_array(a,SIZE)); // 呼び出しでは配列の名前だけを渡す
}
