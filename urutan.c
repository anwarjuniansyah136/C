// void pattern(){
//     int batas;
//     printf("Input Batas : ");scanf("%d",&batas);
//     char nama[100],tamp[100];
//     int nilai[batas],terendah;
//     getchar();
//     for(int i = 0; i < batas; i++){
//         printf("Input nama : ");gets(nama);
//         printf("Input Nilai : ");scanf("%d",&nilai[i]);
//         getchar();
//         if(i == 0){
//             strcpy(tamp,nama);
//             terendah = nilai[i];
//         }
//         else if(terendah > nilai[i]){
//             strcpy(tamp,nama);
//             terendah = nilai[i];
//         }
//     }
//     printf("Nilai atas nama %s dengan nilai %d",tamp,terendah);
// }
#include <stdio.h>
#include <conio.h>
#include <windows.h>


char* inputan(){
    char nama[100] = " ";
    int i = 0;
    char input;
    printf("Input Nama : ");
    while((input = getch()) && input != 13){
        if(input >= 'A' && input <= 'Z' || input >= 'a' && input <= 'z' || input == 32){
            printf("%c",input);
            nama[i] = input;
            i++;
        }
    }
    printf("%s",nama);
    return nama;
}
void main(){
    char buff[255];
    FILE *fptr;
    // read
    fptr = fopen("text.txt","r");
    // fgets(buff,255,fptr);
    // fscanf(fptr,"%[^#]",&buff);
    fprintf(fptr,"%s",inputan());
    printf("%s",buff);
    fclose(fptr);

}