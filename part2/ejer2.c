#include <stdio.h> 
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h> 
#include <unistd.h>
int main(int argc, char *argv[])
{
  unsigned int n;
  scanf("%d",&n);
  n++;
  int i = n ;
  int toPrint = 0;
  if (i<=0) return 1;
  back:
    printf("%d\n",toPrint);
    usleep(100000);
    pid_t p = fork();
    toPrint++;
    i--;
  if (i!=0) goto back;
}
