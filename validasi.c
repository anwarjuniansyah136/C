char* valName(char name[]){
    char nama[100] = {},input;
    int idx = 0;
    while((input = getch()) && input != 13 || idx < 2 || nama[idx-1] == 32){
        if(idx < 30 && input != 13 && (input >= 'a' && input <= 'z' && idx != 0 && input != nama[idx -1] 
            || input >= 'A' && input <= 'Z' && input != nama[idx - 1]
            || input == 32 && idx > 2 && nama[idx-1] != input))
        {
            printf("%c",input);
            nama[idx] = input;
            idx++;
        }
        else if(input == 8 && idx != 0){
            printf("\b \b");
            idx--;
            nama[idx] = '\0';
        }
    }
    return strcpy(name,nama);
}
char* valAlamat(char alamat[]){
    char alm[100] = {},input;
    int idx = 0;
    while((input = getch()) && input != 13 || idx < 2 || alm[idx-1] == 32){
        if(idx < 40 && (input >= 'a' && input <= 'z' || input >= 'A' && input <= 'Z' 
        || input == 32 && idx > 2 && alm[idx - 1] != 32 || input >= '0' && input <= '9' && idx >= 5
        || input == '.' && alm[idx-1] != '.' && idx > 6)){
            printf("%c",input);
            alm[idx] = input;
            idx++;
        }
        else if(input == 8 && idx != 0){
            printf("\b \b");
            idx--;
            alm[idx] = '\0';
        }
    }
    return strcpy(alamat,alm);
}
char* valUmur(char ur[]){
    char umur[100] = {},input;
    int idx = 0;
    while((input = getch()) && input != 13 || idx < 2){
        if(idx < 3 && (input >= '1' && input <= '9' || input == '0' && idx != 0)){
            printf("%c",input);
            umur[idx] = input;
            idx++;
        }
        else if(input == 8 && idx != 0){
            printf("\b \b");
            idx--;
            umur[idx] = '\0';
        }
    }
    return strcpy(ur,umur);
}