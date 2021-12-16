#include <stdio.h>

int main()
{
	int p, q, w, s, nim;
	float h;
	float i;
	char nama[30];
	char kelas;
	
	// Menginput nilai
	
	printf("Masukkan Nama anda : ");
	gets(nama);
	
	printf("Masukkan Kelas anda : ");
	scanf("%c", &kelas);
	
	printf("Masukkan NIM anda : ");
	scanf("%d", &nim);
	
	printf("Masukkan Nilai Pemrograman Dasar : ");
	scanf("%d", &p);
	
	printf("Masukkan Nilai Kalkulus : ");
	scanf("%d", &q);
	
	printf("Masukkan Nilai PTI : ");
	scanf("%d", &w);
	
	printf("Masukkan Nilai Orkom : ");
	scanf("%d", &s);

	i = p+q+w+s;		//operator aritmatika
	h =(p+q+w+s) / 4;

	printf("\nNama anda adalah : %s", nama);	//NAMA
	printf("\nKelas anda adalah : %c", kelas);	//KELAS
	printf("\nNIM anda adalah : %d", nim);		//NIM
	
	printf("\n\nTotal nilai anda adalah : %2.f", i);	 //Total nilai
	printf("\nRata-rata nilai anda adalah : %2.f", h);	 //Rata-rata nilai
	
	if(h>=75){
		printf("\n\nKamu lulus!\n");
	}else{
		printf("\nKamu tidak lulus!\n\n");
	}

    return 0;
}
