#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<error.h>
#include<signal.h>
#include<unistd.h>
#include<sys/types.h>
#include<wait.h>
void sigfun(int signo)
{
  switch(signo)
  {
    case 1:
          printf("catch SIGHUP\n");
          signal(1,SIG_DFL);
          break;
    case 2:
          printf("catch SIGINT\n");
          break;
    case 3:
          printf("catch QUIT\n");
          break;
  }
}
int main()
{
  signal(1,sigfun);
  signal(2,sigfun);
  signal(3,sigfun);
  printf("test pid [%d]\n",getpid());
  while(1);
  signal(1,SIG_DFL);
  return 0;
}
