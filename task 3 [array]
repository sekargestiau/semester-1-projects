#include <stdio.h>
#include <string.h>

void daftar_harga_new(int arr[], int arr_jumlah, int indeks, int nilai_baru)
{
    if(indeks < arr_jumlah){
        arr[indeks] = nilai_baru;
    }else{
        printf("indeks array tidak valid\n");
    }
}
void daftar_harga(int arr[], int arr_jumlah)
{
    printf("1. Tiket Trip to Bali       = Rp %d\n",arr[0]);
    printf("2. Tiket Trip to Lombok     = Rp %d\n",arr[1]);
    printf("3. Tiket Trip to Bunaken    = Rp %d\n",arr[2]);
    printf("4. Tiket Trip to Raja Ampat = Rp %d\n",arr[3]);
    printf("5. Tiket Trip to Wakatobi   = Rp %d\n",arr[4]);

}
void tiket_tersedia(int tersedia_arr[3][2])
{
    printf("Jumlah tiket yang tersedia untuk trip to Bali       = %d tiket untuk pulau Jawa dan %d tiket untuk luar pulau Jawa\n",tersedia_arr[0][0],tersedia_arr[0][1]);
    printf("Jumlah tiket yang tersedia untuk trip to Lombok     = %d tiket untuk pulau Jawa dan %d tiket untuk luar pulau Jawa\n",tersedia_arr[1][0],tersedia_arr[1][1]);
    printf("Jumlah tiket yang tersedia untuk trip to Bunaken    = %d tiket untuk pulau Jawa dan %d tiket untuk luar pulau Jawa\n",tersedia_arr[2][0],tersedia_arr[2][1]);
    printf("Jumlah tiket yang tersedia untuk trip to Raja Ampat = %d tiket untuk pulau Jawa dan %d tiket untuk luar pulau Jawa\n",tersedia_arr[3][0],tersedia_arr[3][1]);
    printf("Jumlah tiket yang tersedia untuk trip to Wakatobi   = %d tiket untuk pulau Jawa dan %d tiket untuk luar pulau Jawa\n",tersedia_arr[4][0],tersedia_arr[4][1]);
}

int main(void){

    int tiket_satu,tiket_dua,total_tiket;
    int tiket_tiga,tiket_empat;
    printf("\t\tPROGRAM LIBURAN KELILING INDONESIA\n");
    printf("_______________________________________________________________________\n");
    printf("_______________________________________________________________________\n");

    printf("------------------------------------------------------------------------\n");
    int banyak_arr[5] = {1210000,1150000,2700000,3500000,2500000};
    printf("Daftar harga tiket per 28 September 2021 :\n");
    daftar_harga(banyak_arr, 5);
    int tersedia_arr[6][2]=
    {
        {200,100},
        {160,90},
        {125,75},
        {100,65},
        {90,50},
        {60,30}
    };
    printf("Jumlah tiket tersedia :\n");
    tiket_tersedia(tersedia_arr);
    printf("\nAnda bisa memilih 2 tiket dengan menuliskan angka :");
    printf("\n1 untuk tiket trip to Bali \n2 untuk tiket trip to Lombok \n3 untuk tiket trip to bunaken \n4 untuk tiket trip to Raja Ampat \n5 untuk tiket trip to Wakatobi");
    printf("\nPilih tiket liburan yang ingin Anda ambil : ");
    scanf("%d %d",&tiket_satu,&tiket_dua);
    printf("\nWaduh, ada 3 tiket yang harganya naik mendadak !!");
    daftar_harga_new(banyak_arr,5,0,1500000);
    daftar_harga_new(banyak_arr,5,2,3000000);
    daftar_harga_new(banyak_arr,5,3,3600000);
    printf("\nDaftar harga tiket terbaru :\n");
    daftar_harga(banyak_arr,5);
    int total_arr[4][3]=
    {
        {2250000,2550000,3300000},
        {1987500,3112500,3562500},
        {3000000,4125000,4575000},
        {3650000,25,50}
    };
    printf("Pilih 2 tiket berbeda untuk liburan yang ingin Anda ambil : ");
    scanf("%d %d",&tiket_tiga,&tiket_empat);
    if(tiket_tiga==1 && tiket_empat==3 || tiket_tiga==3 && tiket_empat==1){
        printf("\n=> Selamat, Anda mendapatkan diskon %d persen!!\n",total_arr[3][3]);
        printf("=> Total biaya yang harus Anda bayar : Rp %d",total_arr[0][0]);
    }else if(tiket_tiga==1 && tiket_empat==4 || tiket_tiga==4 && tiket_empat==1){
        printf("\n=> Selamat, Anda mendapatkan diskon %d persen!!\n",total_arr[3][3]);
        printf("=> Total biaya yang harus Anda bayar : Rp %d",total_arr[0][1]);
    }else if(tiket_tiga==3 && tiket_empat==4 || tiket_tiga==4 && tiket_empat==3){
        printf("\n=> Selamat, Anda mendapatkan diskon %d persen!!\n",total_arr[3][3]);
        printf("=> Total biaya yang harus Anda bayar : Rp %d",total_arr[0][2]);
    }else if(tiket_tiga==2 && tiket_empat==1 || tiket_tiga==1 && tiket_empat==2){
        printf("\n=> Selamat, Anda mendapatkan diskon %d persen!!\n",total_arr[3][1]);
        printf("=> Total biaya yang harus Anda bayar : Rp %d",total_arr[1][0]);
    }else if(tiket_tiga==2 && tiket_empat==3 || tiket_tiga==3 && tiket_empat==2){
        printf("\n=> Selamat, Anda mendapatkan diskon %d persen!!\n",total_arr[3][1]);
        printf("=> Total biaya yang harus Anda bayar : Rp %d",total_arr[1][1]);
    }else if(tiket_tiga==2 && tiket_empat==4 || tiket_tiga==4 && tiket_empat==2){
        printf("\n=> Selamat, Anda mendapatkan diskon %d persen!!\n",total_arr[3][1]);
        printf("=> Total biaya yang harus Anda bayar : Rp %d",total_arr[1][2]);
    }else if(tiket_tiga==1 && tiket_empat==5 || tiket_tiga==5 && tiket_empat==1){
        printf("\n=> Selamat, Anda mendapatkan diskon %d persen!!\n",total_arr[3][1]);
        printf("=> Total biaya yang harus Anda bayar : Rp %d",total_arr[2][0]);
    }else if(tiket_tiga==3 && tiket_empat==5 || tiket_tiga==5 && tiket_empat==3){
        printf("\n=> Selamat, Anda mendapatkan diskon %d persen!!\n",total_arr[3][1]);
        printf("=> Total biaya yang harus Anda bayar : Rp %d",total_arr[2][1]);
    }else if(tiket_tiga==4 && tiket_empat==5 || tiket_tiga==5 && tiket_empat==4){
        printf("\n=> Selamat, Anda mendapatkan diskon %d persen!!\n",total_arr[3][1]);
        printf("=> Total biaya yang harus Anda bayar : Rp %d",total_arr[2][2]);
    }else if(tiket_tiga==2 && tiket_empat==5 || tiket_tiga==5 && tiket_empat==2){
        printf("\n=> Maaf, Anda tidak mendapatkan diskon.\n");
        printf("=> Total biaya yang harus Anda bayar : Rp %d",total_arr[3][0]);
    }else{
        printf("Input Anda sama.");
    }
    printf("\n\n--------------------------HAVE A NICE TRIP--------------------------\n");
}
