#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
    FILE *fpIn, *fpOut;
    char x;
    int a,b,y;
    fpIn=fopen("argv3","r");
    fpOut=fopen("argv4",'r");
    x=fgetc(fpIn);
    while (x!=EOF){
        if(x=' '){
            fputc(x,fpOut);
            x=fgetc(fpIn);
        else
                x=tolower(x);
                y='A' +(a*x+b)%26;
                fputc(y,fpOut);
                y=fgetc(fpIn);
        }
    }
    fclose(fpIn);
    fclose(fpOut);
    return 0;
}
