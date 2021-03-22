#include<stdio.h>

void main() {
    int i, length = 0;
    char str[50];
    printf("\nKorea! : ");
    gets(str);
    printf("\nKorea! \n \"");
    for (i = 0; str[i]; i++) {
        printf("%c", str[i]);
        length += 1;
    }
    printf("\" \n¿‘¥œ¥Ÿ.");
    printf("\n\n6 = %d \n", length);

    getchar();
}