#include <stdio.h>
int main(void){
    int a,i=1;
    scanf("%d",&a);
    while ( i < 10 ) {
        printf("%d * %d = %d\n",a,i,a*i);
        i++;
    }
}
