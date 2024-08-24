#include <stdio.h> 
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h> 
#include <unistd.h>
#define CUSTOMEXIT 5
int main(int argc, char *argv[])
{
  unsigned int n;
  scanf("%d",&n);
  n++;
  unsigned i = n;
  if (i==0) return 0;
  back:
    pid_t p = fork();
    pid_t cpid;
    if (p==0){
      exit(CUSTOMEXIT);
    }else{
      cpid = wait(NULL);
      printf("%d", i);

    }
    i--;
  if (i!=0) goto back;
}
