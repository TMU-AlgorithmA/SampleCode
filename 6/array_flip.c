#include <stdio.h>
#define NUM 7 // 配列の大きさを管理
int main(void){
    int a[NUM]; 
    // 入力
    for (int i=0;i<NUM;i++) scanf("%d",&a[i]);
    // 配列の反転
    for (int i=0;i<NUM/2;i++) {
        int tmp = a[i];
        a[i] = a[NUM-i-1];
        a[NUM-i-1] = tmp;
    }
    // 表示
    for (int i=0;i<NUM;i++) printf("%d\n",a[i]);
}
