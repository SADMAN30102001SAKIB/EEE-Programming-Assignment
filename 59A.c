#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 100

int main() {
  char input[MAX_LENGTH];
  int i = 0;

  printf("Enter a line of uppercase text: ");
  fgets(input, MAX_LENGTH, stdin);

  // Convert the text to lowercase
  while (input[i]) {
    input[i] = tolower(input[i]);
    i++;
  }

  printf("Here is your text in lowercase: %s", input);

  return 0;
}
