/*
Пусть скобочные структуры состоят из четырех различных пар скобок: () [] {} <> 
Открывающая и закрывающая скобки должны быть одного типа.
Ваша задача -- определить правильная ли скобочная структура.

Вход: последовательность указанных скобок; размер входных данных не превосходит 100Кб.
Выход: YES в случае если структура правильная и NO, если неправильная.

ВХОД #1:
{)
ВЫХОД #1:
NO

ВХОД #2:
[({<>})]
ВЫХОД #2:
YES

ВХОД #3:
><
ВЫХОД #3:
NO
*/
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
void push(char t);
char pop();
char str[100000];
int top = 0;
char buf[100000];
int main(void)
{
  char q, p;
  for(int i=0;(scanf("%c", &q)) != EOF ;i++)
  {
    if(q == '\n')
      break;
    if(q=='(' || q=='{' || q=='[' || q=='<')
      push(q);
    else
    {
      if( top > 0 )
      {
        p = pop();
        if(q==')' && p != '('){
          cout<<"NO";
          return 0;
        }
        else if(q=='}' && p != '{'){
          cout<<"NO";
          return 0;
        }
        else if(q==']' && p != '['){
          cout<<"NO";
          return 0;
        }
        else if(q=='>' && p != '<'){
          cout<<"NO";
          return 0;
        }
      }
      else
      {
        cout<<"NO";
        return 0;
      }
    }
  }
  top == 0 ? cout<<"YES" : cout<<"NO";
  return 0;
}

void push(char t)
{
  str[top] = t;
  top++;
}

char pop()
{
  return str[--top];
}