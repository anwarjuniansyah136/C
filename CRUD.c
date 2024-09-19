#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include "validasi.c"

void menu();

void add(){
    system("cls");
    char nama[100],alamat[100],umur[100];
    printf("Input Nama : ");strcpy(nama,valName(nama));
    printf("\n");
    printf("Input Alamat : ");strcpy(alamat,valAlamat(alamat));
    printf("\n");
    printf("Input Umur : ");strcpy(umur,valUmur(umur));
    printf("\n");
    FILE* data = fopen("CRUD.txt","a");
    fprintf(data,"%s$%s$%s\n",nama,alamat,umur);
    fclose(data);
    printf("Data Berhasil Ditambahkan\n");
    Sleep(2000);
    menu();
}

void update(){
    system("cls");
    char nama[100],alamat[100],umur[100];
    char tampnama[100][100],tampalamat[100][100],tampumur[100][100];
    int pilih,idx = -1,i = 0;
    printf("1.Update Name\n2.Update Alamat\n3.Update Umur\n4.Kembali\nPilih : ");scanf("%d",&pilih); 
    if(pilih == 1){
        FILE* data = fopen("CRUD.txt","r");
        printf("Cari nama sebelumnya : ");strcpy(nama,valName(nama));
        while(fscanf(data,"%[^$]$%[^$]$%[^\n]\n",&tampnama[i],&tampalamat[i],&tampumur[i]) != EOF){
            if(strcmp(nama,tampnama[i]) == 0){
                idx = i;
            }
            i++;
        }
        fclose(data);
        if(idx != -1){
            printf("\n");
            printf("Input Nama : ");strcpy(nama,valName(nama));
            FILE* data2 = fopen("CRUD.txt","w");
            for(int j = 0; j < i; j++){
                if(idx == j){
                    fprintf(data2,"%s$%s$%s\n",nama,tampalamat[j],tampumur[j]);
                }
                else{
                    fprintf(data2,"%s$%s$%s\n",tampnama[j],tampalamat[j],tampumur[j]);
                }
            }
            fclose(data2);
            printf("\nData Berhasil Di Update\n");
            Sleep(2000);
            system("cls");
            menu();
        }
        else{
            printf("\nData Tidak Ditemukan\n");
            Sleep(2000);
            system("cls");
            menu();
        }
    }
    else if(pilih == 2){
        FILE* data = fopen("CRUD.txt","r");
        printf("Cari nama sebelumnya : ");strcpy(nama,valName(nama));
        while(fscanf(data,"%[^$]$%[^$]$%[^\n]\n",&tampnama[i],&tampalamat[i],&tampumur[i]) != EOF){
            if(strcmp(nama,tampnama[i]) == 0){
                idx = i;
            }
            i++;
        }
        fclose(data);
        if(idx != -1){
            printf("\n");
            printf("Input Alamat : ");strcpy(alamat,valAlamat(alamat));
            FILE* data2 = fopen("CRUD.txt","w");
            for(int j = 0; j < i; j++){
                if(idx == j){
                    fprintf(data2,"%s$%s$%s\n",tampnama[j],alamat,tampumur[j]);
                }
                else{
                    fprintf(data2,"%s$%s$%s\n",tampnama[j],tampalamat[j],tampumur[j]);
                }
            }
            fclose(data2);
            printf("\nData Berhasil Di Update\n");
            Sleep(2000);
            system("cls");
            menu();
        }
        else{
            printf("\nData Tidak Ditemukan\n");
            Sleep(2000);
            system("cls");
            menu();
        }
    }
    else if(pilih == 3){
        FILE* data = fopen("CRUD.txt","r");
        printf("Cari nama sebelumnya : ");strcpy(nama,valName(nama));
        while(fscanf(data,"%[^$]$%[^$]$%[^\n]\n",&tampnama[i],&tampalamat[i],&tampumur[i]) != EOF){
            if(strcmp(nama,tampnama[i]) == 0){
                idx = i;
            }
            i++;
        }
        fclose(data);
        if(idx != -1){
            printf("\n");
            printf("Input Umur : ");strcpy(umur,valUmur(umur));
            FILE* data2 = fopen("CRUD.txt","w");
            for(int j = 0; j < i; j++){
                if(idx == j){
                    fprintf(data2,"%s$%s$%s\n",tampnama[j],tampalamat[j],umur);
                }
                else{
                    fprintf(data2,"%s$%s$%s\n",tampnama[j],tampalamat[j],tampumur[j]);
                }
            }
            fclose(data2);
            printf("\nData Berhasil Di Update\n");
            Sleep(2000);
            system("cls");
            menu();
        }
        else{
            printf("\nData Tidak Ditemukan\n");
            Sleep(2000);
            system("cls");
            menu();
        }
    }
    else if(pilih == 4){
        menu();
    }
    else{
        update();
    }
}

void delete(){
    system("cls");
    char nama[100];
    char tampnama[100][100],tampalamat[100][100],tampumur[100][100];
    int idx = -1,i = 0;
    FILE* data = fopen("CRUD.txt","r");
    printf("Input Nama : ");strcpy(nama,valName(nama));
    while(fscanf(data,"%[^$]$%[^$]$%[^\n]\n",&tampnama[i],&tampalamat[i],&tampumur[i]) != EOF){
        if(strcmp(nama,tampnama[i]) == 0){
            idx = i;
        }
        i++;
    }
    fclose(data);
    if(idx == -1){
        printf("\nData Tidak Ditemukan\n");
        Sleep(2000);
        menu();
    }
    else{
        FILE* data2 = fopen("CRUD.txt","w");
        for(int j = 0; j < i; j++){
            if(idx != j){
                fprintf(data2,"%s$%s$%s\n",tampnama[j],tampalamat[j],tampumur[j]);
            }
        }
        fclose(data2);
        printf("\nData Berhasil Di Update\n");
        Sleep(2000);
        menu();
    }
}
void show(){
    system("cls");
    char nama[100],alamat[100],umur[100],input;
    int i = 0;
    FILE* data = fopen("CRUD.txt","r");
    printf("Data Saat Ini\n");
    printf("\nNo\tNama\t\tAlamat\t\tUmur\n");
    while(fscanf(data,"%[^$]$%[^$]$%[^\n]\n",&nama,&alamat,&umur) != EOF){
        i++;
        printf("\n%d.\t%s\t%s\t%s",i,nama,alamat,umur);
    }
    printf("\nTekan >> 0 << untuk kembali");
    input = getch();
    if(input == '0'){
        menu();
    }
    else{
        show();
    }
}

void menu(){
    system("cls");
    int pilih;
    printf("1.Add Data\n2.Update Data\n3.Delete Data\n4.Show Data\n5.Exit\nPilih : ");scanf("%d",&pilih);
    if(pilih == 1){
        add();
    }
    else if(pilih == 2){
        update();
    }
    else if(pilih == 3){
        delete();
    }
    else if(pilih == 4){
        show();
    }
    else if(pilih == 5){
        exit(0);
    }
    else{
        printf("Pilihan Tidak Ditemukan\n");
        Sleep(2000);
        menu();
    }
}

void main(){
    menu();
}