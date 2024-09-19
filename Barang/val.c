#include <stdio.h>

char* valtelp(char* nomor){
    char telp[100] = {};
    char input;
    int idx = 0,sum = 0;
    while((input = getch()) && input != 13 || idx < 12){
        if(idx < 14 && sum < 3 && (idx == 0 && input == '0' || idx == 1 && input == '8' && telp[0] == '0' 
        || idx == 0 && input == '+' || input == '6' && idx == 1 && telp[0] == '+' 
        || input == '2' && idx == 2 && telp[1] == '6' && telp[0] == '+' && telp[1] != '8' && telp[0] != '0'
        || input == '8' && idx == 3 && telp[1] == '6' && telp[0] == '+' && telp[2] == '2'
        || input >= '0' && input <= '9' && idx >= 4 && telp[1] == '6' && telp[0] == '+' && telp[2] == '2' && telp[3] == '8'
        || input >= '0' && input <= '9' && idx >= 2 && telp[1] == '8' && telp[0] == '0') || input != telp[idx-1] && idx < 14 && input != 8){
            printf("%c",input);
            telp[idx] = input;
            if(input == telp[idx - 1]){
                sum++;
            }
            else{
                sum = 0;
            }
            idx++;
        }
        else if(input == 8 && idx != 0){
            printf("\b \b");
            idx--;
            if(telp[idx] == telp[idx - 1]){
                sum--;
            }
            telp[idx] = '\0';
        }
    }
    return strcpy(nomor,telp);
}

void main(){
    printf("Input No telp : ");
    char noTel[30];
    strcpy(noTel,valtelp(noTel));
    printf("%s",noTel);
}