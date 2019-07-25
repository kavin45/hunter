#include <stdio.h>

int main()
{
    int a,b,i,j,sum=0,count=0;
    int c[100];
    scanf("%d %d",&a,&b);
    count=a+b;
    for(i=0;i<a;i++)
    {
        scanf("%d",&c[i]);
    }
    for(i=0;i<a;i++)
    {
        for(j=i+1;j<a;j++)
        {
            sum=c[i]+c[j];
            sum==count;
            break;
        }
    }
    if(sum==count)
    {
        printf("yes");
    }
    else
    {
            printf("no");
    }
    
     return 0;
}
