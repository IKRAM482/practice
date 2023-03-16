#include<stdio.h>

void input(float *radius, float *height);
float find_volume(float radius, float height);
void output(float radius,float height,float volume);

void input(float *radius, float *height)
{
  printf("enter the size of the radius: ");
  scanf("%f",radius);
  printf("enter the height:");
  scanf("%f",height);
}
float find_volume(float radius, float height)
{
  float volume;
  float   PI=3.14;
  
  volume=2*PI * radius * height;
  return volume;
}
void output(float radius,float height,float volume)
{
  printf("the volume of the rasgulla with the %.2f and %.2f is %.2f",radius , height, volume);
}
int main()
{
  float volume,radius, height;
  input(&radius,&height);
  volume=find_volume(radius,height);
  output(radius, height, volume);
  return (0);
}