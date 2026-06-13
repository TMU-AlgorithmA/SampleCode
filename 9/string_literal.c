#include <stdio.h>
void test(char *str){
    printf("%s\n",str); // 出力
    str[0] = 'A'; // この部分は未定義動作 (paizaでは無視される)
    printf("%s\n",str); // 先ほどと同じものが出力されがち
}
int main(void){
    test("abc"); // 先頭ポインタの受け渡し
}
