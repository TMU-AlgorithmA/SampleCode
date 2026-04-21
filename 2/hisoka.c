#include <stdio.h>
int main(void){
    int a = 10; // 変数の宣言と初期化
    
    int ans = a + 4; // 計算結果格納用の変数
    printf("a + 4 = %d\n",ans); 
    
    ans = ans * 2;
    printf("ans * 2 = %d\n",ans);
    
    ans = ans - 6;
    printf("ans - 6 = %d\n",ans);
    
    ans = ans / 2;
    printf("ans / 2 = %d\n",ans);
    
    ans = ans - a;
    printf("ans - a = %d\n",ans);
}
