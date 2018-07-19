#include <stdio.h>

extern int count2;

void write_extern(){
  printf("从support.cpp定义的函数输出：\ncount2 is %d\n", count2);
}
