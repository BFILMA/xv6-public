#include "types.h"
#include "stat.h"
#include "user.h"

int main(void){
printf(1, "start of kernel = %p\n", getkernelstartaddr());
printf(1, "end of kernel = %p\n", getkernelendaddr());
printf(1, "addr of kernel variable = %p\n", getkernelvariaddr());
int x = getsystemcalladdr();
printf(1, "Addr of sys_fork function = %p\n", x);
exit();
}
