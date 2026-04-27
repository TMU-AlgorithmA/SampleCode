#include <stdio.h>
int main(void){
    int sum = 0, n =  100; // 変数の宣言
    for( int i = 1 ; i<= n ; i++ ){ // 反復の開始
        sum += i; // この操作がi=1からnまで繰り返される
    }
    printf("1から%dまでの和：%d\n",n,sum);// 出力
}
