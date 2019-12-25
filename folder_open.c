#include <stdio.h>
#include <string.h>
int main(){

    FILE *fp;
    char yazi[100];
    fp = fopen("write.txt", "w");
    strcpy(yazi, "Hello There!");
    fprintf(fp, "%s\n", yazi);
    fclose(fp);

    int c;
    fp = fopen("write.txt", "r");

    if (fp == NULL){
        printf("Boyle bir dosya yok.\n");
    }
    else{
        do{
            c = getc(fp);
            putchar(c);
        }
        while (c != EOF);
    }
    fclose(fp);

    return 0;
}