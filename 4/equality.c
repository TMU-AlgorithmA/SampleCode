#include <stdio.h>
int main(void){
    int a = 10, b = 11, c = 5;
    printf("%d\n",a % c == 0);
    printf("%d\n",b % c == 0);
    printf("%d\n",a % c != 0);
    printf("%d\n",b % c != 0);
}
