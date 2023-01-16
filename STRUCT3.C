#include<stdio.h>
#include<conio.h>
struct detail_kaos
{
 char size;
 char warna[10];
 float harga;
};

struct data_barang
{
 char merk[15];
 struct detail_kaos tipe;
 int qty;
}KAOS;

main()
{
 clrscr();
 printf("Merek Kaos			= "); scanf("%s",&KAOS.merk); fflush(stdin);
 printf("Ukuran	[S/M/L/XL/XXL]		= "); scanf("%s",&KAOS.tipe.size); fflush(stdin);
 printf("Warna  [Merah/Kuning/Hijau]	= "); scanf("%s",&KAOS.tipe.warna); fflush(stdin);
 printf("Harga satuan			= Rp."); scanf("%f",&KAOS.tipe.harga); fflush(stdin);
 printf("Jumlah				= "); scanf("%d",&KAOS.qty); fflush(stdin);

 //menampilkan data barang yang telah diinput
 puts("DATA BARANG TERSEBUT ADALAH : ");
 printf("MEREK KAOS 	= %s\n",KAOS.merek);
 printf("UKURAN		= %s\n",KAOS.tipe.size);
 printf("WARNA		= %s\n",KAOS.tipe.warna);
 printf("HARGA SATUAN	= Rp.%.2f\n",KAOS.tipe.harga);
 printf("JUMLAH 	= %d BUAH",KAOS.qty);

 getch();
 return 0;
}