#include <iostream>
#include <string.h>

char str[4010];

int main(void)
{
  char q;
  int top=0;
  scanf("%s",str);
  for(int i=0;i<strlen(str);i++)
  {
    q=str[i];
    if(q=='(')
      top++;
    else
    {
      if( top > 0 )
        top--;
      else
      {
        std::cout<<"NO";
        return 0;
      }
    }
  }
  top == 0 ? std::cout<<"YES" : std::cout<<"NO";
  return 0;
}