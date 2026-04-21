#include <stdio.h>
int main(void){
    char a; // 文字型変数の宣言
    printf("アルファベット小文字を入力してください：");
    scanf("%c",&a); // 小文字を入力
    printf("%c -> %c\n",a,a+'A'-'a'); // 小文字 -> 大文字
}
