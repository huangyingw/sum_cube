#include"stdio.h"
#include"stdlib.h"
#include<iostream>

using namespace std;

int f(int len)
{
  int sum=0;
  int temp=0;
  int cal=0;
  for (int i=1;i<=len;i++)
  {
    sum=0;
    cal=i;
    while (cal)
    {
      temp=cal%10;
      sum+=temp*temp*temp;
      cal/=10;
    }
    if (sum == i)
      cout<<sum<<endl;
  }
  return 1;
}

int main() 
{
  f(20000);
  return 0;
}
