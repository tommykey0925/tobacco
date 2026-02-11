# include <stdio.h>

# define RED "\x1b[31m"
# define RESET "\x1b[0m"

int main(void) {
  char ln1[64] = "        *\n";
  char ln2[64] = "        *\n";
  char ln3[64] = "        *\n";
  char ln4[64] = "        *\n";
  char ln5[64] = "======" RED "=" RESET;

  printf(ln1);
  printf(ln2);
  printf(ln3);
  printf(ln4);
  printf(ln5);
  return 0;
}
