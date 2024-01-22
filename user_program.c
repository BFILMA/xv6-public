#include "types.h"
#include "stat.h"
#include "user.h"

#define NUM_STRUCTS 10

struct mystruct {
    int value1;
    char value2[16];
};

int main(void) {

    struct mystruct struct_array[NUM_STRUCTS];
    struct mystruct *p;

    int return_val = mycall2( NUM_STRUCTS*sizeof(struct mystruct), &struct_array);
    p = &struct_array[0];

    while(p != &struct_array[NUM_STRUCTS]){
        if(p->value1 != 0){
            printf(1,"pid : %d  \t name: %s \n",p->value1, p->value2);
        p++;
        }
    }

    printf(1, "Program %d \n", return_val);
    exit();
}
