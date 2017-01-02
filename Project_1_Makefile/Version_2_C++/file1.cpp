#include <stdio.h>
#include "file1.h"

void tool1(char *str){
    printf("This is file1 print: %s\n",str);
}

void tool1(const char *str){
    printf("This is file1 print: %s\n",str);
}
