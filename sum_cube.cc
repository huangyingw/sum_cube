#include"stdio.h"
#include"stdlib.h"
#include"math.h"
#include<iostream>

using namespace std;

int* f(int len)
{
  int *result=new int[len];
  int *nav=result;
  int sum=0;
  int temp=0;
  int cal=0;
  for (int i=1;i<=len;i++)
  {
    sum=0;
    cal=i;
    while (cal)
    {
      sum+=pow((cal%10),3);
      cal/=10;
    }
    if (sum == i)
      *nav++=sum;
  }
  return result;
}

int main() 
{
  int *toPrint=f(20000);
  while(*toPrint)
  {
    cout<<*toPrint++<<endl;
  }
  /*
     1
     153
     370
     371
     407
     */
  return 0;
}
