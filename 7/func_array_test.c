#include <stdio.h>
void func1(int c, int d[]) {
    printf("a + 3 = %d, b[0] + 3 = %d\n", c += 3, d[0] += 3);
}

int main(void){
    int a=0,b[1]={0}; // main関数の中でaとbを宣言
    func1(a,b); // 関数に受け渡し
    printf("a = %d, b[0] = %d\n", a, b[0]); // 出力
}
