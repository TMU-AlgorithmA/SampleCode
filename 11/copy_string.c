#include <stdio.h>
#include <stdlib.h> // malloc関数の利用のために追加
#include <string.h> // strlen関数の利用のために追加

char *copy_string(char *in){
    char *out = malloc(sizeof(char)*(strlen(in)+1));
    if (out == NULL) {// メモリ確保失敗の場合の処理
        fprintf(stderr, "メモリ確保失敗．\n"); // エラーメッセージ
        return NULL;
    }
    out[0] = in[0];
    for (int i=1; in[i-1]; i++) // 文字列のコピー (ヌル文字まで)
        out[i] = in[i];
    return out;
}

int main(void){
    char *str = copy_string("Hello, world!");
    printf("%s\n",str);
    free(str); // 確保したメモリを解放
}
