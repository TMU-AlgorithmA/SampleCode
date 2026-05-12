#include <stdio.h>
// 階乗の計算
int factorial(int a) {
    if ( a < 2 ) return 1;
    else return a * factorial(a-1);
}

int main(void){
    int a = 5;
    printf("%d!=%d\n",a,factorial(a));
}
