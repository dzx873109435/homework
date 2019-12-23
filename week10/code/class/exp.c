#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
static void callback1()
{
  printf("------callback1------\n");
}
static void callback2()
{
  printf("------callback2------\n");
}
static void __attribute__((constructor)) bedore_main(void)
{
  printf("------before main------");
}
static void __attribute__((destructor)) after_main(void)
{
  printf("------after main------");
}
int main(void)
{
  atexit(callback1);
  atexit(callback2);
  FILE *fp;
  char buf[]={"hello word\n"};
  if((fp=fopen("test.dat","w+"))==NULL)
  {
    perror("failed to createfile!\n");
    return -1;
  }
  if(fputs(buf,fp)==EOF)
  {
    perror("failed to fputs file!\n");
  }
  printf("test message!\n");
  exit(0);
  //_exit(0);
  //return 0;
}
