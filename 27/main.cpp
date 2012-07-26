#include <iostream>

char array[1000000];

int main(void)
{
  int temp;
  int N, i = 0;
  std::cin >> N;
  while(i++ < N)
  {
    std::cin >> temp;
      array[temp]++;
  }
  
  for(i=0;;i++)
    if(array[i]%2 != 0)
    {
      std::cout << i;
      break;
    }
  
  return 0;
}