#include <stdio.h>
int main(void){
    char ce[]="abcde";
    char cj[]="こんにちは";
    for (int i=0;i<sizeof(ce);i++)
        printf("ce[%d]=%c\n",i,ce[i]);
    for (int i=0;i<sizeof(cj)/3;i++)
        printf("%d文字目：%c%c%c\n",i,cj[3*i],cj[3*i+1],cj[3*i+2]);
}
