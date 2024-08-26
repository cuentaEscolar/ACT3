#include <stdio.h> 
#include <readline/readline.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h> 
#include <unistd.h>
#include <string.h>
#define CUSTOMEXIT 5
/* Realizado por Regalado */
/*
 * */
#define KILL(msg) perror(msg);exit(1)
int main(int argc, char *argv[])
{
  char *input;
  pid_t child_pid;
  int stat_loc;

  mainLoop:
    input = readline("");
    if (strcmp(input, "exit")==0){
      free(input);
      return 1;
    }

    child_pid = fork();
    if (child_pid < 0){
      KILL("fork fail");
    }
    else if (child_pid == 0) {
      system(input); 
      exit(1);
  }
    free(input);
    
  goto mainLoop;
  printf("Fin\n");
}

