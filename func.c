#include <stdio.h>

void main(){
    char barang[30],tamp[30];
    int harga, stok,tampharga,tampstok,ubah;
    printf("Input nama barang : ");gets(barang);
    printf("input harga barng : ");scanf("%d",&harga);
    printf("Input stok barang : ");scanf("%d",&stok);
    getchar();
    FILE* data = fopen("func.txt","a");
    fprintf(data,"%s#%d#%d\n",barang,harga,stok);
    fclose(data);
    data = fopen("func.txt","r");
    fscanf(data,"%[^#]#%d#%d\n",&tamp,&tampharga,&tampstok);
    fclose(data);
    printf("Input jumlah barang yg mau di beli : ");scanf("%d",&ubah);
    tampstok -= ubah;
    data = fopen("func.txt","w");
    fprintf(data,"%s#%d#%d",tamp,tampharga,ubah);
    fclose(data);
}