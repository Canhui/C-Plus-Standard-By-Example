#include <stdio.h>
#include "file2.h"

void tool2(char *str){
    printf("This is file2 print: %s\n",str);
}

void tool2(const char *str){
    printf("This is file2 print: %s\n",str);
}
