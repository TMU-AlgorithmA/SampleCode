#include <stdio.h>
int max_itr = 5;

void show_square(int input){
    printf("%d\n",input * input);
}

int main(void){
    for (int i = 1; i <= max_itr; i++) show_square(i);
}
