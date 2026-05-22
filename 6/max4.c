#include <stdio.h>
int main(void){
    int in1,in2,in3,in4,max;
    scanf("%d %d %d %d",&in1,&in2,&in3,&in4);
    max = in1;
    if ( max < in2 ) max = in2;
    if ( max < in3 ) max = in3;
    if ( max < in4 ) max = in4;
    printf("最大値は%dです\n",max);
}
