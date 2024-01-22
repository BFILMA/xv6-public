#include "types.h"
#include "stat.h"
#include "user.h"
#include "hotdbg.h"

int hotdbg(void){
    printf(1, "Background service started ... \n");
    while(1){
        sleep(5);
    }
    return 0;
}
