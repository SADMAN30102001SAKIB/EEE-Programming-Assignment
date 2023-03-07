#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
  char input[MAX_LENGTH];
  int i = 0;

  printf("Enter a line of mixed text: ");
  fgets(input, MAX_LENGTH, stdin);

  // Reverse case of letters, replace digits with '0', and replace other characters with "*"
  while (input[i]) {
    if (isdigit(input[i])) {
      input[i] = '0';
    } else if (isalpha(input[i])) {
      if (isupper(input[i])) {
        input[i] = tolower(input[i]);
      } else {
        input[i] = toupper(input[i]);
      }
    } else {
      input[i] = '*';
    }
    i++;
  }

  printf("Here is your modified text: %s", input);

  return 0;
}
