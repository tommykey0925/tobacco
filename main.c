# include <stdio.h>

# define RED "\x1b[31m"
# define RESET "\x1b[0m"

int main(void) {
  char ln1[64] = "";
  char ln2[64] = "";
  char ln3[64] = "";
  char ln4[64] = "";
  char ln5[64] = "======|" RED "=" RESET;

  printf(ln5);
  return 0;
}
