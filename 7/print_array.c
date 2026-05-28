#include <stdio.h>
void print_array(const int a[],int n){
    for (int i=0; i<n; i++) printf("%3d",a[i]);
    printf("\n");
}

int main (void){
    int a[] = {1,2,3,4};
    print_array(a,4);
}
