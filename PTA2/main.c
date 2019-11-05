#include<stdio.h>
int main(void)
{
    int i,b=0,c=0,N,X;
    scanf("%d %d\n",&N,&X);
    int a[N];
    c=N;
    for(i=0;i<c;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==X)
        {
            b=1;
            printf("%d",i);
            break;
        }
    }
    if(b==0)
    {
        printf("Not Found");
    }
    
    return 0;
    }  
