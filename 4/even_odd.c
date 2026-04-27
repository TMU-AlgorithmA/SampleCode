#include <stdio.h>
int main(void){
    int a; // 変数の宣言
    scanf("%d",&a);
    if ( a % 2 ) // 分岐の開始
        printf("%dは奇数です．\n",a); // 奇数の場合の処理
    else
        printf("%dは偶数です．\n",a); // 偶数の場合の処理
}
