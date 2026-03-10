#include <stdio.h>
#include <string.h>
 
int main() {
  char str1[20] = "Macha ";
  char str2[] = "Raghavi";
  strcat(str1, str2);
  printf("%s", str1);
 
  return 0;
}