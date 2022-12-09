#include <stdio.h>
#include <stdlib.h>

struct myarray
{
    int total_size;
    int used_size;
    int *ptr;
};

void createarray(struct myarray *a, int tsize, int usize)
{
    // (*a).total_size = tsize;
    // (*a).used_size = usize;
    // (*a).ptr = (int*)malloc(tsize*sizeof(int));

    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int *)malloc(tsize * sizeof(int));
}
void show(struct myarray *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n", (a->ptr)[i]);
    }
}
void setval(struct myarray *a) 
    
{
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        printf("enter element :%d", i);
        scanf("%d" ,& n);
        (a->ptr)[i] = n;
    }
}

int main(int argc, char const *argv[])
{ 
    struct myarray marks;
    createarray(&marks, 10, 8);
    printf("we are running set val\n");
    setval(&marks);

    printf("we are running show \n");
    show(&marks);

    return 0; 
}
