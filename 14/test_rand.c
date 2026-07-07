#include <stdio.h>
#include <stdlib.h>
int main(void){
    printf(" RAND_MAX = %d\n", RAND_MAX); // 最大値の表示

    // rand を10回呼び出し．
    // 10個の異なる整数が表示されるが，毎回同じ10個が表示される．
    for (int i=0; i<10; i++) 
        printf("%2d番目の乱数：%10d\n",i+1,rand());
}
