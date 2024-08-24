#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h>
int main(int argc, char *argv[])
{
  pid_t p = fork();
  if (p!=0)
  {
    printf("Soy el padre\n");
    printf("Soy el padre\n");
    printf("Soy el padre\n");
    printf("Soy el padre\n");
    printf("Soy el padre\n");
    printf("Soy el padre\n");
    printf("Soy el padre\n");
    printf("Soy el padre\n");
    printf("Soy el padre\n");
    printf("Soy el padre\n");
  }
  else {
    printf("Soy el el hijo\n");
    printf("Soy el el hijo\n");
    printf("Soy el el hijo\n");
    printf("Soy el el hijo\n");
    printf("Soy el el hijo\n");
    printf("Soy el el hijo\n");
    printf("Soy el el hijo\n");
    printf("Soy el el hijo\n");
    printf("Soy el el hijo\n");
    printf("Soy el el hijo\n");
  }

}
