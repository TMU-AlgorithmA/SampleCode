#include <stdio.h>
#include <time.h>
int main(void){
    time_t current = time(NULL); // 現在時刻の取得
    struct tm *ct = localtime(&current); // 現地時間への変換
    
    ct->tm_hour += 25; // 25時間後を考える
    printf("%s",asctime(ct)); // 表示 (時間の部分が24以上になっている)
    mktime(ct); // 修正
    printf("%s",asctime(ct)); // 表示 (適切に修正されている)
}
