#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NUM 1024

char *save_str(void){
    char tmp[MAX_NUM]={}; // 文字列の一時置き場
    fgets(tmp,MAX_NUM,stdin); // 文字列の受け取り
    int length = strlen(tmp); // 文字列の長さの保存
    if (tmp[length-1] == '\n') length--; // 改行文字の処理
    char *out = malloc(sizeof(char)*(length+1));
    if (out == NULL) fprintf(stderr,"メモリ確保失敗\n");
    for (int i=0; i< length; i++) out[i] = tmp[i];
    out[length] = '\0'; // ヌル文字の追加
    return out;
}

int main(void){
    char *str = save_str();
    printf("%s\n",str);
} // free は省略 (実際に使うときは書きましょう．)．
