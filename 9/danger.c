#include <stdio.h>
void danger(int *p, int diff){
    *(p+diff) = 4; // *(p+diff) ，つまり b の値を変更 (!)
}

int main(void){
    int a = 1, b = 2, diff = &b-&a; // aとbのアドレスの差;
    printf("a = %d, b = %d\n",a,b); // 関数呼び出し前の出力
    danger(&a,diff); // 関数の呼び出し
    printf("a = %d, b = %d\n",a,b); // 関数呼び出し後の出力
}
