#include <stdio.h>
int main(void){
    int a,b,max,min;
    scanf("%d %d",&a,&b);
    if ( a > b ){
        max = a;
        min = b;
    } else {
        max = b;
        min = a;
    }
    printf("大きい方は%d，小さい方は%d．\n",max,min);
}
