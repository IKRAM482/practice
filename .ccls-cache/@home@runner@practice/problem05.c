#include<stdio.h>
#include<math.h>

void input(float *milk, float *sugar, float *dry_fruits);
float weight_kalakand(float milk, float sugar, float dry_fruits);
void output(float milk , float sugar, float dry_fruits, float weight);

void input(float *milk, float *sugar, float *dry_fruits)
{
  printf("enter the quantity of milk:");
  scanf("%f",milk);
  printf("enter the quantity of sugar:");
  scanf("%f", sugar);
  printf("enter the quantity of dry fruits:");
  scanf("%f",dry_fruits);
}
float weight_kalakand(float milk, float sugar, float dry_fruits)
{
float weight;
  weight=0.8*milk+sugar/4+0.8*dry_fruits;
  return weight;
}
void output(float milk, float sugar, float dry_fruits, float weight)
{
  printf("the given volume of the kalakand with milk:%.2f, sugar:%.2f, and dryfruits:%.2f is %.2f",milk, sugar, dry_fruits, weight);
}
int main()
{
  float milk, sugar, dry_fruits, weight;
  input(&milk, &sugar, & dry_fruits);
  weight=weight_kalakand(milk, sugar, dry_fruits);
  output(milk, sugar, dry_fruits, weight);
  return(0);
}
