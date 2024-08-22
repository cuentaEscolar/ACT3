#include <stdio.h> 
#include <sys/wait.h>
#include <sys/types.h> 
#include <unistd.h>
int main(int argc, char *argv[])
{
  unsigned int n;
  scanf("%d",&n);
  for (unsigned int i=0; i<n; i++){
    pid_t p = fork();
    printf("%d\n",i);
    if (p !=0) {
      wait(NULL);
    }
    exit(1);
  }
}
