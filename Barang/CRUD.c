void addBarang(){
    FILE *data = fopen("barang.txt","a");
    char nama[30];
    int stok,harga;
    printf("Nama Barang : ");gets(nama);
    printf("Stok Barang : ");scanf("%d",&stok);
    printf("Harga Barang : ");scanf("%d",&harga);
    fprintf(data,"%s#%d#%d\n",nama,stok,harga);
    fclose(data);
}