#include <stdio.h>


int main()

{

    
int i,n,len=0;
    
char str[100];
    
scanf("%s",&str);
    
len=strlen(str);
    
for(i=0;i<=len;i++)
    
{
        
if(i%2==0)
        
str[i]=str[i]-32;
    
}
    
printf("%s",str);

    
return 0;

}
