#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
  pid_t pid = fork();

  if (pid == -1) {
    printf("Unable to fork!");
    return -1;
  }
  
  if (pid == 0) {
    // This is a child process.
    int status = execl("/little_shell", "irrelevant", NULL);
    
    if (status == -1) {
      printf("Forked process cannot start the little_shell");
      return -2;
    }
  }

  int count = 1;
  
  while (1) {
    printf("Hello from the original init! %d\n", count);
    count++;
    sleep(10);
  }
  
  return 0;
}
