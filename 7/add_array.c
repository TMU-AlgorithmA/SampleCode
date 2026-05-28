#include <stdio.h>
void add_array(const int a[], const int b[], int c[], int n){
    for (int i = 0; i < n; i++) c[i] = a[i] + b[i];
}
void print_array(const int a[], int n){ // 配列の表示
    for (int i = 0; i < n; i++) printf("%d ",a[i]);
    printf("\n");
}

int main(void){
    int a[] = {1,2,3}, b[] = {4,5,6}, c[3] ={0};
    add_array(a,b,c,3); // aとbの和をcに格納
    print_array(c,3);  // cの内容を表示
}
