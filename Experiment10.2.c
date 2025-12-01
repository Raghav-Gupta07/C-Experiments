#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *a = malloc(sizeof(struct node));
    struct node *b = malloc(sizeof(struct node));

    a->data = 10; a->next = b;
    b->data = 30; b->next = NULL;

    struct node *mid = malloc(sizeof(struct node));
    mid->data = 20;

    mid->next = b;
    a->next = mid;

    struct node *p = a;
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
}
