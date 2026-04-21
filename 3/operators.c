#include <stdio.h>
int main(void){
    int a=3,b=2; // 初期化
    double c = 2.0; // 初期化
    printf("和 %d %g\n",a+b,a+c);
    printf("差 %d %g\n",a-b,a-c);
    printf("積 %d %g\n",a*b,a*c);
    printf("商 %d %g\n",a/b,a/c);
    printf("剰余 %d\n",a%b);
}