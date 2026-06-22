#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void random_sentence(char *names[],int nl,char *meals[],int ml){
    srand((unsigned)time(NULL));
    printf("%sは%sを食べる．\n",names[rand()%nl],meals[rand()%ml]);
}

int main(void){
    char *names[]={"アリス","ボブ","キャロル"};
    char *meals[]={"パン","ケーキ"};
    random_sentence(names,3,meals,2);
}
