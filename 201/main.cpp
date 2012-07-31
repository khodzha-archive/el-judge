/*
Найдите количество решений уравнения
x1 + 2x2 + 3x3+ 4x4= n,     где n и xi — неотрицательные целые числа.

Вход: одна строка, содержащая число n < 1000.
Выход: одна строка, содержащая количество решений уравнения
*/
#include<iostream>
using namespace std;

int main()
{
  int a, b, c, d;
  int N, am=0;
  cin>>N;
  for(a=0; a<=1000; a++)
  {
    if(4*a>N)
      break;
    for(b=0; b<=1000; b++)
    {
      if((4*a+3*b)>N)
        break;
      for(c=0; c<=1000; c++)
      {
        if((4*a+3*b+2*c)>N)
          break;
        for(d=0; d<=1000; d++)
        {
          if((4*a+3*b+2*c+d)==N)
          {
            am++;
            break;
          }
        }
      }
    }
  }
  cout<<am<<"\n";
  return 0;
}