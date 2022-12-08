#include<stdio.h>
int average (int a, int b, int c);
int main(int argc, char const *argv[])
{int a ,b,c;
printf("enter values\n");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
    printf("the required average is %d",average(a,b,c));
    return 0;
}
int average (int a, int b, int c)
{
    int k = (a + b + c)/3;
    return k;

}