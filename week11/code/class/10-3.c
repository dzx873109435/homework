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
    exit(120);
  }
  else
  {
    printf("parent waiting child %d to exit!\n",pid);
    r=wait(&status);
    printf("child %d is finished.return code=%d\n",r,WEXITSTATUS(status));
    printf("parent %d is running!\n",getpid());
    return 0;
  }
}

