#include <stdio.h>

int main(void){
    char *bg_names[]={"カタン","パンデミック","ガイスター","ディクシット"};
    int min_p[]={3,2,2,3};
    int max_p[]={4,4,2,8};
    int num_p,num_array=sizeof(bg_names)/sizeof(bg_names[0]);
  
    // 標準入力からプレイ人数を受け取る
    printf("プレイ人数を入力：\n");
    scanf("%d",&num_p);
  
    // 一致するものを列挙
    for (int i=0; i<num_array; i++)
        if (num_p >= min_p[i] && num_p <= max_p[i])
            printf("%s\n",bg_names[i]);
}
