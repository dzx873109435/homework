#include"my.h"
int main(){
  pid_t  pid;
  pid=fork();
  if(pid<0)
  {
    perror("falied fork!\n");
    return 0;
  }
  else if(pid==0)
  {
    printf("child %d is running!\n",getpid());
    printf("child will exit!\n");
    exit(120);
  }
  else
  {
    sleep(100);
    printf("parent %d is running!\n",getpid());
    return 0;
  }
}

