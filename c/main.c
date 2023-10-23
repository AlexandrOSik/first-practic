#include <stdio.h>

int main(int argc, char ** argv, char ** env) {
  for (int i = 0; i < argc; ++i) {
    printf("args[%d] = '%s'\n", i, argv[i]);
  }
  for (char ** e = env; *e != NULL; ++e) {
    printf("%s\n", *e);
  }
  return 0;
}

