#include <stdio.h>
void swap(int *a,int *b){ // ポインタを引数に取る
    int tmp = *a; // aが指す変数の値をtmpに保存
    *a = *b; // aが指す変数にbが指す変数の値を代入
    *b = tmp; // tmpの値をbが指す変数に代入
}

int main(void){
    int a = 1, b = 2;
    printf("a = %d, b = %d\n",a,b); // 入れ替え前の出力
    swap(&a,&b); // aとbのアドレスを渡す
    printf("a = %d, b = %d\n",a,b); // 入れ替え後の出力
}
