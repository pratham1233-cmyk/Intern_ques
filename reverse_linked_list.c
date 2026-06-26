#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node* newNode(int data) {
    struct Node *n = (struct Node*)malloc(sizeof(struct Node));
    n->data = data;
    n->next = NULL;
    return n;
}

struct Node* reverse(struct Node *head) {
    struct Node *prev = NULL, *curr = head, *next = NULL;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

int main() {
    struct Node *head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    printf("Original: ");
    for (struct Node *t = head; t; t = t->next) printf("%d ", t->data);
    head = reverse(head);
    printf("\nReversed: ");
    for (struct Node *t = head; t; t = t->next) printf("%d ", t->data);
    printf("\n");
    return 0;
}
