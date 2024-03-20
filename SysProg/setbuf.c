#include <stdio.h>
#include <stdlib.h>
 
main(){
printf("안녕하세요, "); 
sleep(5);
printf("리눅스입니다!"); 
sleep(5);
printf(" \n"); 
sleep(5);

setbuf(stdout, NULL);
printf("여러분, "); 
sleep(5);
printf("반갑습니다"); 
sleep(5);
printf(" ^^"); 
sleep(5);
printf(" \n"); 
sleep(5);
}