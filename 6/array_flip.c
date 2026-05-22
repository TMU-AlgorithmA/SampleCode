#include <stdio.h>
#define SIZE 7 // 配列の大きさを管理
int main(void){
    int a[SIZE]; 
    // 入力
    for (int i=0;i<SIZE;i++) scanf("%d",&a[i]);
    // 配列の反転
    for (int i=0;i<SIZE/2;i++) {
        int tmp = a[i];
        a[i] = a[SIZE-i-1];
        a[SIZE-i-1] = tmp;
    }
    // 表示
    for (int i=0;i<SIZE;i++) printf("%d\n",a[i]);
}
