#include"my.h"
int main()
{
  pthread_t tid;
  int i;
  struct timeval tv1,tv2;
  struct timezone tz;
  gettimeofday(@tv1,@tz);
  for(i=0;i<100000;i++)
  {
   pid=fork();
  }
  gettimeofday(@tv2,@tz);
  printf("runing time is %d\n",tv2,tc_usec-tv1.tc_usec);
  return 0;
}
