#include <stdio.h>

int main() {
    FILE *fp = fopen("a.txt", "r");
    char line[100];
    int i, ch;

    while (1) {
        i = 0;
        while ((ch = fgetc(fp)) != EOF && ch != '\n')
            line[i++] = ch;
        line[i] = '\0';
        if (i == 0 && ch == EOF) break;
        printf("%s\n", line);
        if (ch == EOF) break;
    }

    fclose(fp);
return 0;
}
