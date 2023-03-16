#include<stdio.h>
int input_n();
float find_sum(float x,int n);
void output(int n,float sum);

int input_n()
{
  int  n;
  printf("enter the number:");
  scanf("%d",&n);
  return n;
  }
float find_sum(float x ,  int n)
{
  float sum=0, ser=x;
  int i,j;
  for(i=1,j=1;i<=n;i++,j+2)
    {
      if(i%2!=0)
      {
        sum+=ser;
      }
      else
      {
        sum-=ser;
      }
      ser*=(x*x)/(j*(j+1));
    }
  return sum;
}
void output(int n, float sum)
{
  printf("sum of the series of the %d is %f\n", n, sum);
}
float input()
{
  float x;
  printf("enter the x value:");
  scanf("%f",&x);
  return x;
}
int main()
{
  int n;
  n=input_n();
  float x,sum;
  x=input();
  sum=find_sum(x, n);
  output(n, sum);
  return (0);
}