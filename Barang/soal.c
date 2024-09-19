#include <stdio.h>

void soal1(){
    int batas;
    printf("Input Batas : ");scanf("%d",&batas);
    for(int i = 0; i < batas; i++){
        for(int j = 0; j < batas; j++){
            if(i % 2 == 0 && j % 2 == 1){
                printf("%d ",i+batas);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
void soal2(){
    int batas;
    printf("Input Batas : ");scanf("%d",&batas);
    for(int i = 0; i < batas; i++){
        for(int j = 0; j < batas; j++){
            if(i == j || batas / 2 == j && i < batas/2){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
void soal3(){
    int batas;
    printf("Input Batas : ");scanf("%d",&batas);
    for(int i = 0; i < batas; i++){
        for(int j = 0; j < batas; j++){
            if((i == 0 || j == 0) && i < batas / 2 && j < batas/2 ||( i == batas - 1 || j == batas - 1) && i > batas/2 -1 && j > batas/2 -1){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
void soal4(){
    int batas, x = 0;
    printf("Input Batas : ");scanf("%d",&batas);
    for(int i = 0; i < batas; i++){
        printf("Urutan Angka ke %d : ",i + 1);
        for(int j = 0; j < 10; j++){
            x += i + j;
            printf("%d ",x);
        }
        printf("\n");
    }
}
void soal5(){
    int batas;
    printf("Input Batas : ");scanf("%d",&batas);
    for(int i = 0; i < batas; i++){
        for(int j = 0; j < batas; j++){
            if(i + j >= batas - 1){
                printf("* ");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
void soal6(){
    int batas;
    printf("Input Batas : ");scanf("%d",&batas);
    for(int i = 0; i < batas; i++){
        for(int j = 0; j < batas; j++){
            if((i == j || i + j == batas - 1) && i < batas / 2){
                printf("* ");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
void soal7(){
    int batas,x = 0,y = 1;
    printf("Input Batas : ");scanf("%d",&batas);
    for(int i = 0; i < batas; i++){
        if(i % 2 == 0){
            printf("%d ",x);
            y+=x;
        }
        else{
            printf("%d ",y);
            x+=y;
        }
    }
}
void main(){
    // soal1();
    // soal2();
    // soal3();
    // soal4();
    // soal5();
    // soal6();
    soal7();
}