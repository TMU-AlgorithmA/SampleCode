#include <stdio.h>
#include <stdlib.h>

char *copy_string(char *in){
    char *out = malloc(sizeof(char));
    if (out == NULL) fprintf(stderr, "メモリ確保失敗．\n");
    for (int i=0 ;; i++) {// 文字列のコピー
        out[i] = in[i];
        if (in[i] == '\0') break; // ヌル文字で終了
        out = realloc(out,sizeof(char)*(i+2));
        if (out == NULL) {
            fprintf(stderr, "メモリ確保失敗．\n");
            break;
        }
    }
    return out;
}

int main(void){
    char *str = copy_string("Hello, world!");
    printf("%s\n",str);
    free(str);
}
