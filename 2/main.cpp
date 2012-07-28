/*
���� � ��� ��������� ����������� �����.

����� � �� ����������� (������������ ��������� ����� ������ � ����� ������� ��� ����������) ��� ����� empty, ���� ����������� �����.
��������� A={a1, a2, ..., an} � B={b1, b2, ..., bk} �� ����� ������������ ��� ������������������ ����������� �����, ����������� ��������, � ������������� ������ -1 � ��������������� �����.
�������� ���������� ���������, ������� ���� ���������. ������� �������� ������ 1000. ���� ����� ������ 10^6.

����#1
6 7 8 1 2 3 -1
4 3 2 1 1 -1
�����#1
1 2 3
����#2
1 2 3 -1
4 4 5 5 6 6 -1
�����#2
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