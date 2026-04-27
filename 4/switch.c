#include <stdio.h>
int main(void){
    int a;
    scanf("%d",&a);
    switch ( a % 3 ) {
        case 0 : printf("3で割り切れます．\n"); break;
        case 1 : printf("3で割った剰余は1です．\n"); break;
        case 2 : printf("3で割った剰余は2です．\n"); break;
        default : printf("不正な入力です．\n");
    }
}
