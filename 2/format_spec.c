#include <stdio.h>
int main(void){
    double a = 1.2e3, b = 4.5e6;// a=1200, b=4500000
    printf("%f %f\n",a,b); // どちらも10進表記
    printf("%e %e\n",a,b); // どちらもeを用いた表記
    printf("%g %g\n",a,b); // 値によって表記が変わる
}
