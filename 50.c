#include <stdio.h>
#include<string.h>

int main()
{
  int num1,num2,i=0;
  scanf("%d%d",&num1,&num2);
  while(num1>=num2)
  {
      num1=num1-num2;
      i++;
  }
  printf("%d",i);
    return 0;
}
