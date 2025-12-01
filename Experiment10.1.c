#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *a = malloc(sizeof(struct node));
    struct node *b = malloc(sizeof(struct node));

    a->data = 10;
    a->next = b;

    b->data = 20;
    b->next = NULL;

    struct node *p = a;
    while (p) {
        printf("%d ", p->data);
        p = p->next;
    }
return 0;
}
