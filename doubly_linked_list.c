#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

void traversal(struct node *ptr)
{
    struct node *q = ptr;

    do
    {
        printf("%d\n", q->data);
        q = q->next;
    } while (q->next != NULL);
    printf("\n%d\n", q->data);

    printf("reverse\n");
    while (q->prev != NULL)
    {
        printf("%d\n", q->data);
        q = q->prev;
    }
}
struct node *insertion (struct node * head, int val){
    struct node * ptr = (struct node *)malloc(sizeof(struct node ));
    ptr->data = val;
     struct node *q;
     q = head;

    while (q->next != NULL)
    {
        
        q = q->next;
        
    }
    q->next = ptr;
        
        ptr -> prev = q;
        ptr ->next = NULL;

     
    
    return head;
}

int main(int argc, char const *argv[])
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;

    // allocating heap/dynamic  meamory for  diffrent nodes
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));

    head->prev = NULL;
    head->data = 66;
    head->next = second;
    
    second->prev = head;
    second->data = 99;
    second->next = NULL;

 


    traversal(head);
    head = insertion(head,56);
    printf("after insertion\n");
    traversal(head);

    return 0;
}
