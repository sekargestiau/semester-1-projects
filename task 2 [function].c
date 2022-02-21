#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double luas_n_kolam_lele(double panjang_sisi, int n);
double jumlah_lele(double luas_total_kolam, int jumlah_kolam);
double lele_perkolam(double luas_total_kolam_dua, int jumlah_kolam_dua);
double pakan_lele(double luas_total_kolam_tiga);
double pakan_lele_dua(double total_pakan_dua);

int main(){
    printf("\t\tPROGRAM RENCANA TERNAK LELE\n");
    printf("_____________________________________________________________\n");
    printf("_____________________________________________________________\n");

    char waktu[50];
    char hari[] = "Selasa", bulan[] = "September";
    int tanggal = 16, tahun = 2021;
    sprintf(waktu, "%s, %d %s %d", hari, tanggal, bulan, tahun);
    printf("=> Program ini dibuat pada : %s\n", waktu);

    char sapa_kedua[] = "\nHalo, Anda berada di program rencana ternak lele !\n", sapa_pertama[80];
    strcpy(sapa_pertama, sapa_kedua);
    printf("%s\n", sapa_pertama);


    char password[] = "ternak lele", input[50];
    printf("Masukkan password Anda \"%s\" : ", password);
    scanf("%[^\n]*%c", input);
    if (!strcmp(password, input)) {
        printf("Password benar! Kamu boleh lanjut\n");
    }
    else{
        printf("Password salah! Tapi kamu tetap boleh masuk, silakan\n");
    }

    char salam_pertama[80] = "\nSelamat Datang, Calon Pengusaha Muda! ", salam_kedua[] = "Apa kabar? Semoga senantiasa sehat dan bahagia ya!";
    strcat(salam_pertama, salam_kedua);
    printf("%s\n", salam_pertama);

	double sisi;
	int jumlah;
	double hasil;

	printf("\nMasukkan panjang sisi kolam yang Anda inginkan : ");
	scanf("%lf", &sisi);

	printf("Masukkan jumlah kolam yang Anda inginkan : ");
	scanf("%d", &jumlah);

	hasil = luas_n_kolam_lele(sisi, jumlah);

	printf("=> Luas kolam total : %.0lf m2\n", hasil);

	double luas_total_kolam;
	int jumlah_kolam;
	double total_lele;

	printf("\nMasukkan luas kolam total yang sudah dihitung sebelumnya : ");
	scanf("%lf", &luas_total_kolam);

	printf("Masukkan jumlah kolam yang sudah Anda masukkan sebelumnya : ");
	scanf("%d", &jumlah_kolam);

	total_lele = jumlah_lele(luas_total_kolam, jumlah_kolam);

	printf("=> Total lele yang bisa dimasukkan dalam kolam : %.0f ekor ikan lele\n", total_lele);

	double luas_total_kolam_dua;
	int jumlah_kolam_dua;
	double total_lele_perkolam;
    /*Catatan : dengan asumsi menggunakan kolam lele dengan sistem sirkulasi dan
    ketinggian air kolam 0,75 m, sehingga padat tebar yang dianjurkan 200 ekor/m2.*/
	printf("\nMasukkan jumlah total lele yang sudah dihitung sebelumnya : ");
	scanf("%lf", &luas_total_kolam_dua);

	printf("Masukkan jumlah kolam yang sudah Anda masukkan sebelumnya : ");
	scanf("%d", &jumlah_kolam_dua);

	total_lele_perkolam = lele_perkolam(luas_total_kolam_dua, jumlah_kolam_dua);

	printf("=> Jumlah lele yang bisa dimasukkan tiap kolam : %.0lf ekor ikan lele/kolam\n", total_lele_perkolam);

	double total_lele_tiga;
	int jumlah_kolam_tiga;
	double total_pakan;

	printf("\nMasukkan jumlah total lele yang sudah dihitung sebelumnya : ");
	scanf("%lf", &total_lele_tiga);

	total_pakan = pakan_lele(total_lele_tiga);

	printf("=> Total jumlah pakan yang dibutuhkan untuk budidaya ikan lele : %.0f gram/hari\n", total_pakan);

	double total_pakan_dua;
	double total_pakan_perbulan;

	printf("\nMasukkan total jumlah pakan lele yang sudah dihitung sebelumnya : ");
	scanf("%lf", &total_pakan_dua);

    total_pakan_perbulan = pakan_lele_dua(total_pakan_dua);

	printf("=> Total biaya pakan yang dibutuhkan untuk budidaya ikan lele : Rp %.0f/bulan\n", total_pakan_perbulan);

	printf("\nItulah biaya yang harus Anda keluarkan untuk pakan ikan lele tiap bulannya. Anda bisa mulai mempertimbangkannya.\n");


	return 0;
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

 double lele_perkolam(double luas_total_kolam_dua, int jumlah_kolam_dua){
	double total_lele_perkolam = 0.0;
	int j;

	for (j = 1; j <= jumlah_kolam_dua; j++) {

		double lele_perkolam = luas_total_kolam_dua/jumlah_kolam_dua;
        total_lele_perkolam = lele_perkolam;
	}

	return total_lele_perkolam;
}
 double pakan_lele(double total_lele_tiga){
	double total_pakan = 0.0;
    /*Catatan : dengan asumsi 800 gram pakan per hari per 1000 ekor ikan lele*/
		double pakan_lele = total_lele_tiga*800/1000;
        total_pakan = pakan_lele;

	return total_pakan;
 }

 double pakan_lele_dua(double total_pakan_dua){
	double total_pakan_perbulan = 0.0;
    /*Catatan : dengan asumsi harga pakan Rp 7500/500 gram*/
		double pakan_lele_dua = (total_pakan_dua*30*7500)/500;
        total_pakan_perbulan = pakan_lele_dua;

	return total_pakan_perbulan;
 }
