#include <stdio.h>
int main(void){
    int humidity;
    scanf("%d",&humidity);
    switch ((humidity-1)/20) {
        case 0 : printf("非常に");
        case 1 : printf("乾燥しています．\n"); break;
        case 2 : printf("適切な湿度です．\n"); break;
        case 4 : printf("非常に");
        case 3 : printf("湿っています．\n"); break;
        default : printf("不正な入力です．\n");
    }
}
