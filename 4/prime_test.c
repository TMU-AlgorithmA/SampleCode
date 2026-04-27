#include <stdio.h>
int main(void){
    int a,i; // for文の外でiを使うために先に宣言
    scanf("%d",&a);
    for ( i = 2 ; i < a ; i++ ) {
        if ( a % i == 0 ) break; // 割り切れたらfor文から脱出
    }
    if ( i == a ) printf("%dは素数です．\n",a);
    else printf("%dは%dで割り切れます．\n",a,i);
}
