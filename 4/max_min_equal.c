#include <stdio.h>
int main(void){
    int a,b;
    scanf("%d %d",&a,&b);
    if ( a > b )
        printf("大きい方は%d，小さい方は%d．\n",a,b);
    else if ( a < b )
        printf("大きい方は%d，小さい方は%d．\n",b,a);
    else
        printf("%dと%dは同じ．\n",a,b);
}
