#include <stdio.h>
int y;


void bubble(int a[]){
    //  
    
    int b;
    int issorted = 0;
for (int  i = 6; i >0; i--)
{    
    printf("\nworking on pass%d\n",7-i);
    issorted=1;//adaptive condition
    for ( int x = 0; x < i ; x++)
    {
        if (a[x]>a[x+1])
        {
           b = a[x];
           a[x]= a[x+1];
           a[x+1]=b;
           issorted=0;
        }
     
     } 
     if(issorted){
        return;   
    }
    
}
}
int main(int argc, char const *argv[])
{    int y;
    scanf("%d",&y );
    int arr[7] = {9, 8, 2,5,4,8,9};
    
    for (int i = 0; i < 7; i++)
    {
        printf("%d", arr[i]);
    }

    bubble(arr);
    for (int i = 0; i < 7; i++)
    {
        printf(":%d", arr[i]);
    }
    if (arr[1]*arr[2]>arr[5]*arr[6])
    {
        printf("(%d,%d)",arr[1],arr[2]);

    }
    else{
                printf("\n(%d,%d)",arr[6],arr[5]);
    }
    

    return 0;
}
