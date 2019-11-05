#include<stdio.h>
int main()
{
    int a[11],i,n,X,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&X);
    if(X<a[0])
    {for(k=n-1;k>=0;k--)
        a[k+1]=a[k];
        a[0]=X;
    }
    else if(X>a[n-1])
        a[n]=X;
    
    else
    {for(i=0;i<n-1;i++)
    {
        if(a[i]<X&&a[i+1]>X)
        { for(k=n-1;k>i;k--)
            a[k+1]=a[k];
            a[i+1]=X;
            break;
        }
    }
    }
    for(i=0;i<=n;i++)
        printf("%d ",a[i]);
    return 0;
}
