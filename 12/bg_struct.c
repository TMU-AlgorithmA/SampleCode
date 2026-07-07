#include <stdio.h>

struct bg{ // ボードゲーム管理用構造体の定義
    char *name; // 名前 (へのポインタ)
    int min_p; // 最小プレイ人数
    int max_p; // 最大プレイ人数
};

int main(void){
    struct bg bgs[]={ // 構造体のなす配列の宣言と初期化
        {"カタン",3,4},{"パンデミック",2,4},
        {"ガイスター",2,2},{"ディクシット",3,8}
    };
  
    int num_p,num_array=sizeof(bgs)/sizeof(bgs[0]);
  
    // 標準入力からプレイ人数を受け取る
    printf("プレイ人数を入力：\n");
    scanf("%d",&num_p);
    // 一致するものを列挙
    for (int i=0; i<num_array; i++)
        if (num_p >= bgs[i].min_p && num_p <= bgs[i].max_p)
            printf("%s\n",bgs[i].name);
}
