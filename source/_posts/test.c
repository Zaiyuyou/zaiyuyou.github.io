#include<stdio.h>
#include<stdlib.h>
struct temp{
    char a;
    int b;
    short c;
}TempS;

int main(){

    printf("Size of char:%d\n",sizeof(char));
    printf("Size of int:%d\n",sizeof(int));
    printf("Size of short:%d\n",sizeof(short));

    printf("Size of Struct:%d\n",sizeof(TempS));
    return 0;
}