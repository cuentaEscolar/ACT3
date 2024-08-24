#include <stdio.h> 
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h> 
#include <unistd.h>
int main(int argc, char *argv[])
{
  unsigned int n;
  scanf("%d",&n);
  int i = n;
  if (i<=0) return 1;
  a:
  printf("%d\n",i);
  usleep(100000);
  pid_t p = fork();
  i--;
  if (i!=0) goto a;
}
