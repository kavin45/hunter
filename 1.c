#include <stdio.h>

int main()
    {
    int num,i,j;
    int a[100];
    scanf("%d",&n);
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                printf("%d",a[i]);
                break;
            }
        }
    }

    return 0;
}
