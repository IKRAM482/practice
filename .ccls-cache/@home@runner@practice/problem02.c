#include<stdio.h>
#include<string.h>
void input_string(char* string);
void capitalise(char* string);
void output(char *string);

void input_string(char* string)
{
  printf("enter the string char:");
  scanf("%s", string);
}
void capitalise(char* string)
{
  int i;
  for(i=0;string[i]!='\0';i++)
    {
      if(i==0|| string[i-1]=='.')
      {
        string[i]=(string[i]);
      }
    }
}
void output(char *string)
{
  printf("the give string is %s",string);
}
int main()
{
  char string[100];
  input_string(string);
  capitalise(string);
  output(string);
  return 0;
  }
