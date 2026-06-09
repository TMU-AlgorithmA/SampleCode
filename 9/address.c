#include <stdio.h>
int main(void){
    char a = 1, c[3] = {};
    int b[3] = {};    
    printf("aは%pに置かれている．\n",&a);
    for (int i=0;i<3;i++) {
        printf("b[%d]は%pに置かれている．\n",i,&b[i]);
    }
    for (int i=0;i<3;i++) {
        printf("c[%d]は%pに置かれている．\n",i,&c[i]);
    }
}
