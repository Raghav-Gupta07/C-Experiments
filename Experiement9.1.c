#include <stdio.h>

int main() {
    FILE *fp = fopen("a.txt", "w");
    char ch;
    printf("Enter text (end with #): ");
    while ((ch = getchar()) != '#')
        fputc(ch, fp);
    fclose(fp);
}
