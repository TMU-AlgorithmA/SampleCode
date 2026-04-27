#include <stdio.h>
int main(void){
    int starty;
    scanf("%d",&starty);
    if ( starty % 4 != 0 )
        starty += ( 4 - starty % 4); // 一番近い4の倍数
    for ( int count = 0 ; count < 10 ; starty += 4) {
        if ( starty % 100 == 0 && starty % 400 != 0)
            continue; // 例外の場合は残りの処理をスキップ
        printf("%d\n",starty); // 出力
        count++; // 出力する度にカウント
    }
}
