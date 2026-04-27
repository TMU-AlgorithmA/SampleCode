#include <stdio.h>
int main(void){
    int a,b;
    scanf("%d %d",&a,&b); // aとbへの入力
    if ( a % b == 0 ) printf("%dは%dを割り切る．\n",b,a);
}
