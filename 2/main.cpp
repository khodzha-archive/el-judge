/*
Вход — два множества натуральных чисел.

Выход — их пересечение (перечисление элементов через пробел в любом порядке без повторений) или слово empty, если пересечение пусто.
Множества A={a1, a2, ..., an} и B={b1, b2, ..., bk} на входе представлены как последовательности натуральных чисел, разделенных пробелом, и завершающиеся числом -1 — идентификатором конца.
Возможны повторения элементов, которые надо исключить. Размеры множеств меньше 1000. Сами числа меньше 10^6.

Вход#1
6 7 8 1 2 3 -1
4 3 2 1 1 -1
Выход#1
1 2 3
Вход#2
1 2 3 -1
4 4 5 5 6 6 -1
Выход#2
empty
*/
#include <iostream>

bool uniq(int *arr, int t, int len);

int main(void)
{
  int array[1000], result[1000];
  int temp, i=0, j=0, k=0;
  while(true)
  {
    std::cin >> temp;
    if(temp!=-1)
      array[i++]=temp;
    else break;
  }
  while(true)
  {
    std::cin >> temp;
    if(temp==-1)
      break;
      
    for(j=0;j<i;j++)
      if(array[j]==temp && uniq(result, temp, k) == true)
      {
        result[k++]=temp;
         break;
      }
  }
  if(k>0)
  {
    for(i=0;i<k;i++)
      std::cout << result[i] << " ";
  }
  else std::cout<<"empty";
  
  return 0;
}

bool uniq(int *arr, int t, int len)
{
  for(int i=0;i<len;i++)
  {
    if(arr[i]==t)
      return false;
  }
  return true;
}