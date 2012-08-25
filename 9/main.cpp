/*Числа Фибоначчи определяются рекурентной формулой
Fn=Fn-1 + Fn-2 F0=1, F1=1

Вход: Число n < 1000.
Выход: Число Фибоначчи Fn.

ВХОД #1:
0
ВЫХОД #1:
1

ВХОД #2:
5
ВЫХОД #2:
8

ВХОД #3:
200
ВЫХОД #3:
453973694165307953197296969697410619233826
*/
#include <iostream>
#include <string.h>
using namespace std;
void summ(char* a, char* b);
void rev(char* a);
char temp[1000]="";

int main(void)
{
  int N, i;
  cin>>N;
  char a[1000]="0";
  char b[1000]="1";
  for(i=0;i<N;i++)
  {
    summ(a, b);
    strcpy(a, b);
    strcpy(b, temp);
  }
  cout<<b;
  return 0;
}

void summ(char*a, char* b)
{
  strcpy(temp, "");
  rev(a);
  rev(b);
  int raz = 0;
  int t = 0, i;
  int m = (strlen(a) > strlen(b)) ? strlen(a) : strlen(b);
  for(i = 0; i < m; i++)
  {
    t = raz;
    if(strlen(a) > i)
    {
      t += a[i] - '0';
    }
    if(strlen(b) > i)
    {
      t += b[i] - '0';
    }
    temp[i] = t % 10 + '0';
    raz = t / 10;
  }
  if(raz != 0)
  {
    temp[i] = raz + '0';
    temp[i+1] = '\0';
  }
  else
  {
    temp[i] = '\0';
  }
  rev(b);
  rev(temp);
}

void rev(char* a)
{
  int l = strlen(a);
  char t;
  for(int i = 0; i < l/2; i++)
  {
    t = a[i];
    a[i] = a[l-1-i];
    a[l-1-i]=t;
  }
}