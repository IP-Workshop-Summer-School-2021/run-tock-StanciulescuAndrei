#include "hello.h"
#include <tock.h>

bool hello_is_present(void){
    syscall_return_t res = command(HELLO_DRIVER_NUMBER, 0, 0, 0);
    return (res.type == TOCK_SYSCALL_SUCCESS);
}