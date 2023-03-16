#include<stdio.h>
typedef struct rasgulla{
float radius,height;
char color;
} Rasgulla;

int input_num_of_ras();
float find_perimeter(Rasgulla r);
float find_n_perimeter(int n,Rasgulla r[n]);
void output(int n, Rasgulla r[n], float perimeter);

  int input_num_of_ras()
{
  int n;
  printf("enter the number:");
  scanf("%d",&n);
  return n;
}
float find_perimeter(Rasgulla r)
{
  float rasgulla;
  float PI = 3.14;
  float radius, height;
  if(r.color=='W')
  {
    rasgulla=2*(radius/height)*PI;
  }
  else if(r.color=='B')
  {
    rasgulla=2*(height/radius)^2*PI;
  }
  return rasgulla;
}
float find_n_perimeter(int n,Rasgulla r[n])
{
  float total=0;
  int i;
  for(i=0;i<n;i++)
    {
      total+=find_perimeter(r[i]);
    }
  return total;
}
void output(int n, Rasgulla r[n], float perimeter)
{
  float rasgulla;
  for(int i=0;i<n;i++)
    {
      printf("the perimeter of the rasgullas %d with color %c has perimerter %.2f\n",i+1),r[i].color,find_perimeter(r[i]);
    }
  printf("the sum of the perimeter is %.2f\n",rasgulla);
}
int main()
{
  int n= input_num_of_ras();
  Rasgulla r[n];
  for(int i=0;i<n;i++)
    {
      printf("enter the height radius and color of the rasgulla %d:",i+1);
      scanf("%f%f%c",&r[i].radius, &r[i].height, &r[i].color);
    }
  float rasgulla;
  rasgulla=find_n_perimeter(n,r);
  output(n,r, rasgulla);
  return(0);
}