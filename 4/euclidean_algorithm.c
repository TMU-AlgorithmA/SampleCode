#include <stdio.h>
int main(void){
    int in1,in2,a,b,tmp;
    scanf("%d %d",&in1,&in2); // 2個の整数を入力
    a = in1 > in2 ? in1 : in2; // in1とin2の大きい方をaに代入
    b = in1 > in2 ? in2 : in1; // // in1とin2の小さい方をaに代入
    while (a % b) { // a % b == 0 であれば終了
        tmp = b; // 一旦bの値を保存
        b = a % b; // b を a % b で更新
        a = tmp; // a にもとのbの値を代入
    }
    printf("%dと%dの最大公約数は%dです．\n",in1,in2,b);
}
