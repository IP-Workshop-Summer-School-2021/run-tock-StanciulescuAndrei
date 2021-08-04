/* vim: set sw=2 expandtab tw=80: */
#include <stdio.h>
#include "hello.h"

int main(void) {
  if(hello_is_present()){
    printf("Hello driver present \r\n");
  }
  else{
    printf("Hello driver not present \r\n");
  }
  return 0;
}
