#include<stdio.h>1              
int factorial(int a);
int main(int argc, char const *argv[])
{
    int a;
    printf("enter the number \n");
    scanf("%d",&a);
    printf("the required factorial is %d",factorial(a));
    
    return 0;
}
int factorial(int a){

    if (a==1 || a==0 )
    {
        return 1;
    
    }
    else 
    return a * factorial(a-1);
    

    
    
    
    
    }