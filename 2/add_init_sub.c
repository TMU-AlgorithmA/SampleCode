#include <stdio.h>
int main(void){
    int a=1,b=2; // 変数の宣言と初期化
    printf("%d + %d = %d\n",a,b,a+b); // この時点ではa=1,b=2
    
    a = a + 2; // ここでaが3 (=1+2) に更新される
    printf("%d + %d = %d\n",a,b,a+b); // この時点ではa=3,b=2
}
