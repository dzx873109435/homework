#include"my.h"
void fun(void *arg)
{
  int TID=syscall(SYS-gettid);
  printf("worker---%d : gettid return %d\n",TID,TID);
  printf("worker---%d : gettid return %d\n",TID,TID);
  printf("worker---%d : gettid return %d\n",TID,TID);
}
