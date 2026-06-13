#include <stdio.h>
int main() {
    char str[64];
    while (fgets(str, sizeof(str), stdin) != NULL)
        printf("%s", str);
}
