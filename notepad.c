#include <stdio.h>

void main(){
    char nama[100],nama2[100];
    int i = 0;
    FILE *connect = fopen("notepad.txt","r");
    fgets(nama,255,connect);
    printf("%s",nama);
    while(fscanf(connect,"%[^#]#%[^\n]\n",&nama,&nama2)){
        printf("%s %s\n",nama,nama2);
        i++;
    }
    // printf("Input Nama : ");gets(nama);
    // strcat(nama,"\n");
    // fprintf(connect,"%s",nama);
    fclose(connect);
}