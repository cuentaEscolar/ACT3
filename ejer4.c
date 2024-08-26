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
char **get_input(char*);
int main(int argc, char *argv[])
{
  char **command; 
  char *input;
  pid_t child_pid;
  int stat_loc;

  back:
    input = readline("");
    command = get_input(input);
    child_pid = fork();
    if (child_pid < 0){
      KILL("fork fail");
    }
    else if (child_pid == 0) {
      system(command[0]); 
    }
    free(input);
    free(command);
    
  goto back;
  printf("Fin\n");
}
char **get_input(char *input) {
    
    char *separator = " ";
    char *parsed;
    int count;
    int index = 0;
    int prev = 0;
    
    char **command = malloc( 8 * sizeof(char *));
    if (command==NULL){KILL("malloc failure");}
    parsed = strtok(input, separator);
    index = 0;
    while (parsed != NULL) {
        command[index] = parsed;
        index++;
        parsed = strtok(NULL, separator);
    }
    command[index] = NULL;
    return command;
}
