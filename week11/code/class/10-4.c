#include"my.h"
int main(){
  pid_t  pid;
  int r,status;
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
    while(1);
    exit(120);
  }
  else
  {
    printf("parent waiting child %d to exit!\n",pid);
    while(r=wait(&status)!=-1)
    {
      if(WIFEXITED(status))
        printf("child %d is finished with exit mode. exit code=%d\n",r,WEXITSTATUS(status));
      else if(WIFEXITED(status))
        printf("child %d is finished with signal mode. signal code=%d\n",r,WIFEXITED(status));
      else
        printf("unknow mode!\n");
    }
    printf("parent %d is running!\n",getpid());
    return 0;
  }
}

