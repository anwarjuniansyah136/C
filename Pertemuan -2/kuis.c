#include<stdio.h>

void main(){
    int batas;
    printf("Input Batas : ");scanf("%d",&batas);
    int angka[batas];
    int idx = 0,tamp = 0;
    FILE* data = fopen("kuis.txt","a");
    for(int i = 0; i < batas; i++){
        printf("Input angka ke %d : ",i+1);scanf("%d",&angka[i]);
        fprintf(data,"%d\n",angka[i]);
    }
    fclose(data);
    for(int i = 0; i < batas; i++){
        for(int j = i+1; j < idx; j++){
            if(angka[j] < angka[i]){
                tamp = angka[j];
                angka[j] = angka[i];
                angka[i] = tamp;
            }
        }
    }
    printf("Urutan angka : ");
    for(int i = 0; i < batas; i++){
        printf("%d ",angka[i]);;
    }
}