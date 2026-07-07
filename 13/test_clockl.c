#include <stdio.h>
#include <time.h>
int main(void){
    clock_t st,fin;
    double sum = 0;
  
    st = clock(); // 開始時点
    for (int i=1;i<10000;i++) sum += 1.0/i/i; // 何らかの作業．
    fin = clock(); // 終了時点
  
    printf("sum = %g\n",sum); // 出力をさせないと上の作業がコンパイラによって無視される可能性あり．
    printf("経過時間：%g秒\n",(double) (fin-st)/CLOCKS_PER_SEC);
}
