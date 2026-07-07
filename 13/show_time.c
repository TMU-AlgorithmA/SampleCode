#include <stdio.h>
#include <time.h>
int main(void){
    time_t current = time(NULL); // 現在時刻の取得
    struct tm *ct = gmtime(&current); // 形式の変換
    char *wday_name[] = {"日","月","火","水","木","金","土"};
    
    printf("現在，%d年%d月%d日 (%s) %d時%d分%d秒です.\n",
        ct->tm_year + 1900,
        ct->tm_mon+1,
        ct->tm_mday,
        wday_name[ct->tm_wday],
        ct->tm_hour,
        ct->tm_min,
        ct->tm_sec);
}
