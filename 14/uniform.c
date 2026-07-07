#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int rand_int(int min, int max){
    return rand() % ( max - min + 1 ) + min;
}
double rand_double(double min, double max){
    return ((double)rand()+1)/((double)RAND_MAX+2) * ( max - min ) + min;
}

int main(void){
    srand((unsigned)time(NULL));
    printf("整数：%d\n",rand_int(-10,10));
    printf("浮動小数点数：%g\n",rand_double(-10,10));
}
