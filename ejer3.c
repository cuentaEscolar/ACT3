#include <stdio.h> 
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h> 
#include <unistd.h>
#define CUSTOMEXIT 5
/* Realizado por Regalado */
int main(int argc, char *argv[])
{
  unsigned int n;
  scanf("%d",&n);
  unsigned i = n;
  if (i==0) return 0;
  n++;
  back:
    pid_t p = fork();
    pid_t cpid;

    if (p==0) exit(CUSTOMEXIT);
    cpid = wait(NULL);

    printf("Proceso hijo %d\n", n -i);
    
    i--;
  if (i!=0) goto back;
  printf("Fin\n");
}
