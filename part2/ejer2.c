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
  pid_t p = fork();
  printf("%d\n",i);
  i--;
  if (i!=0) goto a;
}
