#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<error.h>
#include<signal.h>
#include<unistd.h>
#include<sys/types.h>
#include<wait.h>
int main()
{
  printf("test pid [%d]\n",getpid());
  while(1);
  return 0;
}
