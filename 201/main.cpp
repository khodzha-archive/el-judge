// WORK IN PROGRESS : works right, but timelimit exceeded, need to rewrite in another way
#include <iostream>

int total=0;
int func(int k, int max);

int main(void)
{
  int N;
  std::cin>>N;
  func(N, 4);
  std::cout<<total;
}

int func(int k, int max)
{
  if(k==0||k==1) { total++; return 0; }
  int j;
  for(j=max;j>0;j--)
  {
    if((k-j)>=0)
    {
      //std::cout<<"debug k and j "<<k<<" "<<j<<"\n";
      func(k-j,j);
    }
  }
  return 0;
}