/*
Некоторые скобочные структуры правильные, другие — неправильные. Ваша задача — определить правильная ли скобочная структура.

Вход: Слово в алфавите из двух круглых скобочек ( и ). Длина слова меньше 4001.
Выход: Либо 'NO', либо 'YES' без кавычек.

ВХОД #1:
()
ВЫХОД #1:
YES

ВХОД #2:
)(
ВЫХОД #2:
NO

ВХОД #3:
()(())()
ВЫХОД #3:
YES
*/
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