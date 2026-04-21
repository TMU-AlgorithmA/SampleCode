#include <stdio.h>
int main(void){
    int hours,minutes,seconds; // 変数の宣言
    printf("秒数を入力：\n");
    scanf("%d",&seconds); // secondsに入力
    hours = seconds / 3600; // 何時間かを計算
    seconds -= hours * 3600; // 時間分をsecondsから引く
    minutes = seconds / 60; // 何分かを計算
    seconds %= 60; // 秒数を計算
    printf("%d時間%d分%d秒\n",hours,minutes,seconds);
}