// WORK IN PROGRESS
#include <iostream>

int total=0;
int func(int k);

int main(void)
{
  int N;
  std::cin>>N;
  func(N);
  std::cout<<total;
}

int func(int k)
{
  if(k==0) { total++; return 0; }
  int j;
  for(j=((k<4)?k:4);j>0;j--)
  {
    if((k-j)>=0)
    {
      std::cout<<"debug k and j "<<k<<" "<<j<<"\n";
      func(k%j);
    }
  }
  return 0;
}