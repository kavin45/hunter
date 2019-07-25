#include <stdio.h>
#include <string.h>
 
int main()
{
  	int a,b,i,count=0;
  	scanf("%d%d",&a,&b);
  	while(b<=a)
  	{
  	    count=0;
  	    for(i=2;i<=b/2;i++)
  	    {
  	        if(b%i==0)
  	        {
  	            count=1;
  	            break;
  	        }
  	    }
  	    if(count==0)
  	    {
  	        printf("%d ",b);
  	    }
  	    b++;
  	}
  	
  	return 0;
    }
