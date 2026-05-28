#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20
// 配列の表示
void print_array(const int a[], int n){
    for (int i=0; i<n; i++) printf("%2d ",a[i]);
    printf("\n");
}

// ランダムな数列の生成
void rand_array(int a[], int n){
    srand((unsigned)time(NULL)); // おまじない
    for (int i=0;i<n;i++) a[i] = rand()%100; // ランダムな整数
}

// 標準入力からの配列の受け取り
void scan_array(int a[], int n){
    for (int i=0; i<n; i++) scanf("%d",&a[i]);
}

// クイックソート
void quicksort(int a[], int n){
    if (n<=1) return; // 配列の大きさが1以下であればそのまま終了
    int pivot = a[rand()%n]; // pivotをランダムに選択
    int arrayl[SIZE]={0},arrayr[SIZE]={0}; // 長めに配列を用意
    int l = 0 , r = 0; // arraylとarrayrの実質的な長さを表す変数
    // pivotを基準に配列を分割
    for (int i = 0; i < n ; i++ ){
        if (pivot>a[i]) arrayl[l++] = a[i]; // pivotより小さいもの
        if (pivot<a[i]) arrayr[r++] = a[i]; // pivotより大きいもの
    }
    // arraylとarrayrをクイックソートし，aに格納
    quicksort(arrayl,l);
    quicksort(arrayr,r);
    for (int i=0; i<l; i++) a[i] = arrayl[i]; 
    for (int i=l; i<n-r; i++) a[i] = pivot; // pivotと同じ値のもの
    for (int i=n-r; i<n; i++) a[i] = arrayr[i-n+r];
}

int main(void){
    int a[SIZE];
    
    rand_array(a,SIZE); // ランダムに生成する場合
    // scan_array(a,SIZE); // 標準入力から受け取る場合
    
    print_array(a,SIZE); // ソート前
    quicksort(a,SIZE); // ソートの実行
    printf("---ソートの結果---\n");
    print_array(a,SIZE); // ソート後
}
