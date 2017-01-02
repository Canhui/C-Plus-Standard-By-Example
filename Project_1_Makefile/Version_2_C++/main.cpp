#include <stdio.h>
#include <stdlib.h>
#include "file1.h"
#include "file2.h"



int main(){
	
    char str1[] = "hello";
    tool1(str1);
    const char str1_c[] = "hello";
    tool1(str1_c);

    char str2[] = "hello";
    tool2(str2);
    const char str2_c[] = "hello";    
    tool2(str2_c);
}
