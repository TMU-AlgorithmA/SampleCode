#include <stdio.h>
int main(void){
    int a , *p = &a; // ポインタpにaのアドレスを格納
    a = 3; // aに3を代入
    printf("*p = %d\n",*p); // pの指す先 (つまりa) を出力
}
