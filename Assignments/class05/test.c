#include "test.h"

static void inline hello();

void hellon(int n){
    for (int i = 0 ; i < n ; i++){
        hello();
    }
}

static void inline hello(){
    printf("hello,world\n");
}

