#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct node *insertion(struct node *head, int element)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = element;
    ptr->next = head;
    return ptr;
}
struct node *insertionbw(struct node *head, int index, int element)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));

    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }

    ptr->next = p->next;
    p->next = ptr;
    ptr->data = element;
    return head;
}

struct node *insertionlst(struct node *head, int element)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;

    while (p->next != NULL)
    {

        p = p->next;
    }

    p->next = ptr;
    ptr->data = element;
    ptr->next = NULL;
    return head;
}
struct node *insertionafternode(struct node *head, struct node *node, int element)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = node->next;
    node->next = ptr;
    ptr->data = element;
    return head;
}

int main(int argc, char const *argv[])
{
    struct node *head;
    struct node *second;
    struct node *third;
    // allocating heap/dynamic  meamory for  diffrent nodes
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;

    second->data = 13;
    second->next = third;
    third->data = 66;
    third->next = NULL;
    head = insertionafternode(head, head, 88);
    traversal(head);

    return 0;
}
