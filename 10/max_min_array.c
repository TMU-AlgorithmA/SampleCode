#include <stdio.h>
int max_array(int a[],int n){ // 配列の最大値を求める関数
    int max=a[0];
    for (int i=1;i<n;i++) max = a[i] > max ? a[i] : max;
    return max;
}
int min_array(int a[],int n){ // 配列の最小値を求める関数
    int min=a[0];
    for (int i=1;i<n;i++) min = a[i] < min ? a[i] : min;
    return min;
}
int main(void){
    int a[3] = {0,1,2};
    int (*p[2])(int*,int); // 関数へのポインタの宣言
    char *strs[2]={"max","min"};
    p[0] = max_array; // ポインタp[0]はmax_arrayを指す
    p[1] = min_array; // ポインタp[1]はmin_arrayを指す
    for (int i=0; i<2;i++) printf("%s: %d\n",strs[i],p[i](a,3));
}
