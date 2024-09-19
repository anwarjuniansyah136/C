#include <stdio.h>

char* nama(char name[]){
    char input;
    int i = 0;
    printf("input nama : ");
    while((input = getch()) && input != 13 || i < 3 || name[i-1] == 32){
        if((input >= 'A' && input <= 'Z' || input >= 'a' && input <= 'z'&& i != 0 || input == 32 && i > 3) && name[i-2] != input){
            printf("%c",input);
            name[i] = input;
            i++;
        }
        else if(input == 8 && i != 0){
            printf("\b \b");
            i--;
            name[i] = NULL;
        }
    }
    return name;
}

void main(){
    char name[30],name2[30];
    strcpy(name2,nama(name));
    FILE *conn = fopen("notepad.txt","a");
    strcat(name2,"\n");
    fprintf(conn,"%s",name2);
    fclose(conn);
}
// void faktorial(int angka){
//     int total = 0;
//     if(angka > 1){
//         printf("%d x ",angka);
//         total = (angka - 1) * angka;
//         faktorial(angka-1);
//     }
//     else{
//         printf("= %d",angka);
//     }
// }
// void main(){
//     int angka;
//     printf("Input angka : ");scanf("%d",&angka);
//     faktorial(angka);
// }