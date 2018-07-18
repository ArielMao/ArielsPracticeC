#include <stdio.h>

extern int count2;

void write_extern(){
  printf("count2 is %d\n", count2);
}
