#include <stdio.h>
void capitalize_string(const char lc[],char uc[]){
    int i;
    for (i=0;lc[i]!='\0';i++)
        uc[i] = lc[i] + 'A' - 'a'; // 小文字を大文字に変換
    uc[i] = '\0';
}
int main(void){
    char ce[]="abcde",CE[6];
    capitalize_string(ce,CE); // 関数の呼び出し (ポインタ渡し)
    for (int i=0;i<sizeof(ce)-1;i++)
        printf("ce[%d]=%c, CE[%d]=%c\n",i,ce[i],i,CE[i]);
}
