#include <stdio.h>
#include <stdlib.h>
int main(){
char buff[10];
char buff2[10] = "dir"; //works on windows and linux!
scanf("%s", buff);
printf("A secure compiler should not execute this code in case of overflow.\n");
system(buff2);
}
