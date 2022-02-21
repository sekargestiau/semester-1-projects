#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double luas_n_kolam_lele(double panjang_sisi, int n);
double jumlah_lele(double luas_total_kolam, int jumlah_kolam);

double luas_n_sawah(double panjang_sisi_sawah, int m);
double jumlah_bibit(double luas_total_sawah, int jumlah_sawah);

int main()
{
    int choice;
    printf("---------------------------------------------------------------------------------------------------------------\n");
    printf("\n\t\t\tSELAMAT DATANG DI PROGRAM PERENCANAAN USAHA PETERNAKAN/PERTANIAN\n\n");
    printf("---------------------------------------------------------------------------------------------------------------\n");
    printf("Informasi :\n=> Program ini akan membantu Anda merencanakan usaha di bidang peternakan/pertanian\n   dengan memberikan berbagai informasi terkait perencanaan usaha bidang peternakan/pertanian.");
    printf("\n\nDaftar pilihan rencana usaha :\n");
    printf("1. Peternakan (khususnya Ternak Ikan Lele)\n2. Pertanian  (khususnya Pertanian Padi)\n");
    printf("\nSilakan masukkan pilihan Anda terkait informasi perencanaan usaha yang ingin Anda ketahui \nJawab (1 atau 2) : ");
    scanf("%d",&choice);
    if (choice==1)
    {
    printf("______________________________________________________________________________________________________________\n\n");
    printf("\t\t\t\t\tPROGRAM RENCANA USAHA TERNAK LELE\n");
    printf("______________________________________________________________________________________________________________\n");

    char waktu[50];
    char hari[] = "Minggu", bulan[] = "Oktober";
    int tanggal = 17, tahun = 2021;
    sprintf(waktu, "%s, %d %s %d", hari, tanggal, bulan, tahun);
    printf("=> Program ini dibuat pada : %s\n", waktu);

    char sapa_kedua[] = "\nHalo, Anda berada di program rencana ternak lele !\n", sapa_pertama[80];
    strcpy(sapa_pertama, sapa_kedua);
    printf("%s\n", sapa_pertama);


    char password[] = "peternakan", input[50];
    printf("Masukkan password Anda \"%s\" : ", password);
    scanf("%s", input);
    if (!strcmp(password, input)) {
        printf("=> Password benar! Kamu boleh lanjut\n");
        char salam_pertama[80] = "\nSelamat Datang, Calon Pengusaha Muda! ", salam_kedua[] = "Apa kabar? Semoga senantiasa sehat dan bahagia ya!";
        strcat(salam_pertama, salam_kedua);
        printf("%s\n", salam_pertama);

        double sisi;
        int jumlah;
        double hasil;

        printf("\nMasukkan panjang sisi kolam yang Anda inginkan : ");
        scanf("%lf", &sisi);

        printf("Masukkan jumlah kolam yang Anda inginkan       : ");
        scanf("%d", &jumlah);

        hasil = luas_n_kolam_lele(sisi, jumlah);

        printf("=> Total luas kolam                            : %.0lf m2\n", hasil);

        double luas_total_kolam;
        int jumlah_kolam;
        double total_lele;

        printf("\nMasukkan total luas kolam yang sudah dihitung sebelumnya  : ");
        scanf("%lf", &luas_total_kolam);

        printf("Masukkan jumlah kolam yang sudah Anda masukkan sebelumnya : ");
        scanf("%d", &jumlah_kolam);

        total_lele = jumlah_lele(luas_total_kolam, jumlah_kolam);

        printf("\nBerikut ini adalah rincian informasi terkait perencanaan usaha ternak lele.\n");
        printf("=> Total lele yang bisa dimasukkan dalam kolam                    : %.0f ekor ikan lele\n", total_lele);
        printf("=> Jumlah lele yang bisa dimasukkan tiap kolam                    : %.0f ekor ikan lele/kolam\n", total_lele/jumlah_kolam);
        printf("=> Total jumlah pakan yang dibutuhkan untuk budidaya ikan lele    : %.0f kg\n", (total_lele*60)/1000);
        printf("=> Biaya pembuatan kolam yang dibutuhkan untuk budidaya ikan lele : Rp %.0f\n", (total_lele*1000000)/1000);
        printf("=> Biaya penyediaan benih lele unggulan budidaya ikan lele        : Rp %.0f\n", total_lele*100);
        printf("=> Biaya penyediaan pakan untuk budidaya ikan lele                : Rp %.0f\n", (total_lele*60*5000)/1000);
        printf("=> Biaya lain-lain untuk budidaya ikan lele                       : Rp %.0f\n", (total_lele/1000)*200000);
        printf("--------------------------------------------------------------------------------------------------------------\n");
        printf("=> TOTAL MODAL YANG DIBUTUHKAN UNTUK TERNAK LELE                  : Rp %.0f\n", ((total_lele*1000000)/1000)+(total_lele*100)+((total_lele*60*5000)/1000)+((total_lele/1000)*200000));

        printf("\n- Dengan asumsi ikan yang berhasil dipanen mencapai 90%% dari total benih ikan lele yang dimasukkan dalam kolam\n- Dengan asumsi ikan lele yang berhasil dipanen memiliki berat 250 gram\n- Dengan asumsi harga setiap kilogram ikan lele Rp 18000, maka :\n");
        printf("--------------------------------------------------------------------------------------------------------------\n");
        printf("=> KEUNTUNGAN KOTOR YANG ANDA DAPATKAN DARI TERNAK LELE  : Rp %.0f\n", (total_lele*90*250*18000)/100000);
        printf("=> KEUNTUNGAN BERSIH YANG ANDA DAPATKAN DARI TERNAK LELE : Rp %.0f\n", ((total_lele*90*250*18000)/100000) - (((total_lele*1000000)/1000)+(total_lele*100)+((total_lele*60*5000)/1000)+((total_lele/1000)*200000)));
        printf("\nItulah perkiraan modal yang dibutuhkan dan keuntungan yang didapatkan dari usaha peternakan ikan lele.\nAnda bisa mulai mempertimbangkannya.\n");

        int harga_lele[4];

        harga_lele[0] = 70000;
        harga_lele[1] = 80000;
        harga_lele[2] = 110000;
        harga_lele[3] = 120000;
        char choice2[10];
        char jawab1[10]="Ya";
        char jawab2[10]="Tidak";
        printf("\nApakah Anda ingin mengetahui daftar harga berbagai jenis benih ikan lele?\n");
        printf("Jawab (""%s" " atau " "%s"") : ",jawab1,jawab2);
        scanf("%s",choice2);

        if (!strcmp(choice2, jawab1)){
            printf("\nDaftar harga berbagai jenis benih ikan lele per 1000 ekor dengan ukuran 4-5 cm : \n");
            printf("\n1. Harga benih ikan lele Dumbo  : Rp %d - Rp %d\n",harga_lele[0],harga_lele[1]);
            printf("2. Harga benih ikan lele Lokal  : Rp %d - Rp %d\n",harga_lele[2],harga_lele[3]);
        }else if(!strcmp(choice2, jawab2)){
        }
        printf("\n");
        printf("______________________________________________________________________________________________________________\n");
        printf("--------------------------------------------------------------------------------------------------------------\n");
        int r;
        for(r=0;r<=2;r++){
        printf("  TERIMA KASIH SUDAH BERKUNJUNG\t");
        }
        printf("\n--------------------------------------------------------------------------------------------------------------\n");
        printf("______________________________________________________________________________________________________________\n");
        printf("\n");
        }
        else{
            printf("=> Password salah! Silakan, coba lagi!\n");
        }
}else if(choice==2){
    printf("\n");
    printf("______________________________________________________________________________________________________________\n\n");
    printf("\t\t\t\t\tPROGRAM RENCANA USAHA PERTANIAN PADI\n");
    printf("______________________________________________________________________________________________________________\n");

    char waktu2[50];
    char hari2[] = "Minggu", bulan2[] = "Oktober";
    int tanggal2 = 17, tahun2 = 2021;
    sprintf(waktu2, "%s, %d %s %d", hari2, tanggal2, bulan2, tahun2);
    printf("=> Program ini dibuat pada : %s\n", waktu2);

    char sapa_keempat[] = "\nHalo, Anda berada di program rencana pertanian padi !\n", sapa_ketiga[80];
    strcpy(sapa_ketiga, sapa_keempat);
    printf("%s\n", sapa_ketiga);

    char password2[] = "pertanian", input2[50];
    printf("Masukkan password Anda \"%s\" : ", password2);
    scanf("%s", input2);
    if (!strcmp(password2, input2)) {
        printf("=> Password benar! Kamu boleh lanjut\n");
        char salam_ketiga[80] = "\nSelamat Datang, Calon Pengusaha Muda! ", salam_keempat[] = "Apa kabar? Semoga senantiasa sehat dan bahagia ya!";
        strcat(salam_ketiga, salam_keempat);
        printf("%s\n", salam_ketiga);

        double sisi_sawah;
        int jumlah_sawah;
        double hasil_luas;

        printf("\nMasukkan panjang sisi sawah yang Anda inginkan : ");
        scanf("%lf", &sisi_sawah);

        printf("Masukkan jumlah sawah yang Anda inginkan       : ");
        scanf("%d", &jumlah_sawah);

        hasil_luas = luas_n_sawah(sisi_sawah, jumlah_sawah);

        printf("=> Total luas sawah                            : %.0lf m2\n", hasil_luas);

        double luas_total_sawah;
        int jumlah_sawah_dua;
        double total_bibit;

        printf("\nMasukkan total luas sawah yang sudah dihitung sebelumnya  : ");
        scanf("%lf", &luas_total_sawah);

        printf("Masukkan jumlah sawah yang sudah Anda masukkan sebelumnya : ");
        scanf("%d", &jumlah_sawah_dua);

        total_bibit = jumlah_bibit(luas_total_sawah, jumlah_sawah_dua);

        printf("\nBerikut ini adalah rincian informasi terkait perencanaan usaha pertanian padi.\n");
        printf("=> Total bibit padi yang dibutuhkan untuk pertanian padi di sawah seluas %.0f m2   : %.1f kg bibit padi\n", luas_total_sawah,total_bibit);
        printf("=> Jumlah bibit padi yang dibutuhkan tiap sawah                                  : %.1f kg bibit padi/sawah\n", total_bibit/jumlah_sawah_dua);
        printf("=> Biaya sewa lahan yang dibutuhkan untuk pertanian padi                         : Rp %.0f\n", (total_bibit*3500000)/16);
        printf("=> Biaya penyediaan bibit padi unggulan untuk pertanian padi                     : Rp %.0f\n", (total_bibit*500000)/16);
        printf("=> Biaya penyediaan pupuk dan pestisida untuk pertanian padi                     : Rp %.0f\n", (total_bibit*1900000)/16);
        printf("=> Biaya tenaga kerja untuk pertanian padi                                       : Rp %.0f\n", (total_bibit*2000000)/16);
        printf("=> Biaya lain-lain untuk pertanian padi                                          : Rp %.0f\n", (total_bibit*500000)/16);
        printf("--------------------------------------------------------------------------------------------------------------\n");
        printf("=> TOTAL MODAL YANG DIBUTUHKAN UNTUK PERTANIAN PADI                              : Rp %.0f\n", ((total_bibit*3500000)/16)+((total_bibit*500000)/16)+((total_bibit*1900000)/16)+((total_bibit*2000000)/16)+((total_bibit*500000)/16));
        printf("=> KEUNTUNGAN BERSIH YANG ANDA DAPATKAN DARI PERTANIAN PADI                      : Rp %.0f/bulan\n", (total_bibit*6000000)/16);
        printf("\nItulah perkiraan modal yang dibutuhkan dan keuntungan yang didapatkan dari pertanian padi.\nAnda bisa mulai mempertimbangkannya.\n");

        int harga_padi[5];

        harga_padi[0] = 130000;
        harga_padi[1] = 175000;
        harga_padi[2] = 75000;
        harga_padi[3] = 120000;
        harga_padi[4] = 120000;

        char choice3[10];
        char jawab3[]="Ya";
        char jawab4[]="Tidak";
        printf("\nApakah Anda ingin mengetahui daftar harga berbagai jenis bibit padi?\n");
        printf("Jawab (""%s" " atau " "%s"") : ",jawab3,jawab4);
        scanf("%s",choice3);

        if (!strcmp(choice3, jawab3)){
            printf("\nDaftar harga berbagai jenis bibit padi per 5 kilogram : \n");
            printf("\n1. Harga bibit padi Rojolele     : Rp %d\n",harga_padi[0]);
            printf("2. Harga bibit padi Pandan Wangi : Rp %d\n",harga_padi[1]);
            printf("3. Harga bibit padi Ciherang     : Rp %d\n",harga_padi[2]);
            printf("4. Harga bibit padi Sintanur     : Rp %d\n",harga_padi[3]);
            printf("5. Harga bibit padi Beras Merah  : Rp %d\n",harga_padi[4]);
        }else if(!strcmp(choice3, jawab4)){
        }
        printf("\n");
        printf("______________________________________________________________________________________________________________\n");
        printf("--------------------------------------------------------------------------------------------------------------\n");
        int r;
        for(r=0;r<=2;r++){
        printf("  TERIMA KASIH SUDAH BERKUNJUNG\t");
        }
        printf("\n--------------------------------------------------------------------------------------------------------------\n");
        printf("______________________________________________________________________________________________________________\n");
        printf("\n");
        }
        else{
            printf("=> Password salah! Silakan, coba lagi!\n");
        }

   return 0;
}
}


double luas_n_kolam_lele(double panjang_sisi, int n) {
	double total_luas_kolam_lele = 0.0;
	int i;

	for (i = 1; i <= n; i++) {

		double luas_satu_kolam = panjang_sisi * panjang_sisi;

		total_luas_kolam_lele = total_luas_kolam_lele + luas_satu_kolam;
	}

	return total_luas_kolam_lele;
}

double jumlah_lele(double luas_total_kolam, int jumlah_kolam){
	double total_lele = 0.0;
	int k;
    /*Catatan : dengan asumsi menggunakan kolam lele dengan sistem sirkulasi dan
    ketinggian air kolam 0,75 m, sehingga padat tebar yang dianjurkan 200 ekor/m2.*/
	for (k = 1; k <= jumlah_kolam; k++) {

		double jumlah_lele = luas_total_kolam*200;

		total_lele = jumlah_lele;
	}

	return total_lele;
}

double luas_n_sawah(double panjang_sisi_sawah, int m) {
	double total_luas_sawah = 0.0;
	int q;

	for (q = 1; q <= m; q++) {

		double luas_satu_sawah = panjang_sisi_sawah * panjang_sisi_sawah;

		total_luas_sawah = total_luas_sawah + luas_satu_sawah;
	}

	return total_luas_sawah;
}

double jumlah_bibit(double luas_total_sawah, int jumlah_sawah){
	double total_bibit = 0.0;
	int p;
    /*Catatan : dengan asumsi menggunakan kolam lele dengan sistem sirkulasi dan
    ketinggian air kolam 0,75 m, sehingga padat tebar yang dianjurkan 200 ekor/m2.*/
	for (p = 1; p <= jumlah_sawah; p++) {

		double jumlah_bibit = (luas_total_sawah/10000)*16;

		total_bibit = jumlah_bibit;
	}

	return total_bibit;
}


