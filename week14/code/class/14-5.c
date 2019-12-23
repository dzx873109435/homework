#include"my.h"
void *fun(void *arg)
{
 int k=(int)arg;
 printf("worker---%d : pthread_self return %p\n",k,(void*)pthread_self());
 pthread_exit(NULL);
 return NULL;
}
int main()
{
  pthread_t tid[NUM];
  int ret[],i
}
