/*
Вавилонцы решили построить удивительную башню — расширяющуюся к верху и содержащуюю бесконечное число этажей и комнат. Она устроена следующим образом — на первом этаже одна комната, затем идет два этажа на каждом из которых по две комнаты, затем идёт три этажа, на каждом из которых по три комнаты и так далее.
Эту башню решили оборудовать лифтом --- и вот задача: нужно научится по номеру комнаты определять, на каком этаже она находится и какая она по счету слева на этом этаже.
Вход В первой строчке задан номер комнаты N, 1 <= N <= 2 000 000 000.
Выход Два целых числа — номер этажа и порядковый номер слева на этаже.

Вход#1
1
Выход#1
1 1
Вход#2
5
Выход#2
3 2
Вход#3
8
Выход#3
4 3

*/
#include <iostream>

int func(int N, int i);
int func2(int N, int i);

int main(void)
{
  int N,i=1;
  std::cin >> N;
  if(N==1)
  {
    std::cout<<"1 1";
    return 0;
  }
  for(int j=0;;j++)
  {
    //std::cout<<"debug J value "<<j<<"\n";
    if(N > i*i)
    {
      N-=i*i;
      i++;
    }
    else 
    {
      //std::cout<<"debug\t"<<N<<"\t"<<i<<"\n";
      std::cout<<func(N,i)<<" "<<func2(N,i);
      return 0;
    }
  }
  return 0;
}

int func(int N, int i)
{
  int k=0;
  for(int j=1;j<i;j++)
  {
    k+=j;
  }
  while(N>0)
  {
    k++;
    N-=i;
  }
  return k;
}

int func2(int N, int i)
{
  while(N>i)
    N-=i;
  return N;
}