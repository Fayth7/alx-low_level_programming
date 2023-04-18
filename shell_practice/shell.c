#include <stdio.h>
#include <stdlib.h>

int main() {
  char command[100];
  printf("$ ");
  fflush(stdout); // flush the output buffer to make sure "$ " gets printed
  fgets(command, sizeof(command), stdin); // read a line of input from the user
  printf("%s", command); // print the user's command
  return (0);
}
