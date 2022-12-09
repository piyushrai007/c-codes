#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int * arr;
};
int isempty(struct stack* p)
{
    if (p->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// int isfull(struct stack* q)
// {
//     if (q->top == q->size - 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

int main(int argc, char const *argv[])
{
    // struct stack s;
    // s.size = 50;
    // s.top = -1;
    // s.arr = (int*)malloc(s.size*sizeof(int));
    struct stack * s;
    s->size =  80;
    s->top =   -1;
    s->arr =   (int *)malloc(s->size*sizeof(int));

    // s->arr[0]=8;
    // s->top++;
     
    if (isempty(s))  
    {
        printf("stack is empty");
    }
    else
    {
        printf("stack is not empty");
    }
    return 0;
}