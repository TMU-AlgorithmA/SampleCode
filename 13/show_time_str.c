#include <stdio.h>
#include <time.h>
int main(void){
    time_t current = time(NULL); // 現在時刻の取得
    struct tm *ct = gmtime(&current); // 形式の変換
    
    printf("%s",ctime(&current)); // ctime
    printf("%s",asctime(ct)); // asctime
}
