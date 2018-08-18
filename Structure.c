#include <stdio.h>

typedef struct test{
    int a;
    int b;
    char c;
    char d;
}test;

void send(test *a, char lon)
{
    char i;
    char *v = (char*)a;
    for(i = 0; i < lon; i++)
    {
        printf("%c",*v);
        v++;
    }
    printf("\n");
}

void main(void)
{
  test my;
  my.a = 'a';
  my.b = 'b';
  my.c = 'c';
  my.d = 'd';
  printf("%d\n",sizeof(my));
  printf("%s\n",&my);
  send(&my,sizeof(my));
}

