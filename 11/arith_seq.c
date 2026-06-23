#include <stdio.h>
#include <stdlib.h>

int *arith_seq(int length,int init, int diff){
    int *a = malloc(sizeof(int) * length);
    a[0] = init;
    for (int i=1; i<length; i++) a[i] = a[i-1] + diff;
    return a;
}

int main(void){
    int *p,n=5;
    p = arith_seq(n,0,1);
    
    for (int i=0; i<n; i++) printf("p[%d]=%d\n",i,p[i]);
    free(p);
}
