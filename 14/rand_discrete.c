#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int rand_discrete(double p[],int n){
    double *P = malloc(sizeof(double)*(n-1));
    for (int i=0;i<n-1;i++) { // i以下の確率の和P[i]を計算
        P[i] = 0;
        for (int j=0; j<=i; j++) P[i]+= p[j];
    }
    double rv =((double)rand()+1)/((double)RAND_MAX+2);// 一様乱数
    // 出力
    if (rv <= P[0]) return 0;
    for (int i=1;i<n-1;i++) if (rv<= P[i]) return i;
    return n-1;
}
int main(void){
    double p[] = {0.4,0.4,0.1,0.1}; // 分布の例
    for (int i=0; i<10; i++) printf("%d\n",rand_discrete(p,4));
}
