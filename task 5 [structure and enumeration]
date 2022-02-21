#include <stdio.h>
#include <string.h>

struct price_list
{
    char destination[20];
    int number_ticket1;
    int number_ticket2;
    int pricelist_ticket;

};
enum discount_price
{
    echoice1=1,
    echoice2,
    echoice3,
    echoice4,
    echoice5,

};
enum duration_trip
{
    e1Minggu=1,
    e2Minggu,
};

void daftar_harga(struct price_list *price)
{
    printf("=> Tiket Trip to %s\n  - Jumlah tiket tersedia untuk pulau Jawa      : %d tiket\n  - Jumlah tiket tersedia untuk luar pulau Jawa : %d tiket\n  - Harga                                       : Rp %d per tiket\n\n",price->destination,price->number_ticket1,price->number_ticket2,price->pricelist_ticket);

}

int main(){

    int tiket_satu,tiket_dua,total_tiket;
    int tiket_tiga,tiket_empat;
    printf("\t\tPROGRAM LIBURAN KELILING INDONESIA\n");
    printf("_______________________________________________________________________\n");
    printf("_______________________________________________________________________\n");

    printf("------------------------------------------------------------------------\n");
    int duration_trip;
    printf("Berapa lama Anda akan liburan? (1 untuk 1 minggu, 2 untuk 2 minggu) : ");
    scanf("%d",&duration_trip);
    if(duration_trip==e1Minggu){
        printf("=> Anda akan liburan selama 1 minggu.\n");
    }else if (duration_trip == e2Minggu){
        printf("=> Anda akan liburan selama 2 minggu.\n");
    }
    int banyak_arr[5] = {1210000,1150000,2700000,3500000,2500000};
    printf("\nDaftar tiket per 28 September 2021 :\n");
    struct price_list list[5]=
    {
        {"Bali",200,100,1210000},
        {"Lombok",160,90,1150000},
        {"Bunaken",125,75,2700000},
        {"Raja Ampat",100,65,3500000},
        {"Wakatobi",90,50,2500000}

    };

    daftar_harga(&list[0]);
    daftar_harga(&list[1]);
    daftar_harga(&list[2]);
    daftar_harga(&list[3]);
    daftar_harga(&list[4]);

    printf("\nAnda bisa memilih 2 tiket dengan menuliskan angka :");
    printf("\n1 untuk tiket trip to Bali \n2 untuk tiket trip to Lombok \n3 untuk tiket trip to bunaken \n4 untuk tiket trip to Raja Ampat \n5 untuk tiket trip to Wakatobi");
    printf("\nPilih tiket liburan yang ingin Anda ambil : ");
    scanf("%d %d",&tiket_satu,&tiket_dua);
    printf("\nWaduh, ada 3 tiket yang harganya naik mendadak !!");
    printf("\nDaftar harga tiket terbaru :\n");
    list[0].pricelist_ticket=1500000;
    list[1].pricelist_ticket=1150000;
    list[2].pricelist_ticket=3000000;
    list[3].pricelist_ticket=3600000;
    list[4].pricelist_ticket=2500000;
    printf("=> Tiket trip to Bali       = Rp %d\n",list[0].pricelist_ticket);
    printf("=> Tiket trip to Lombok     = Rp %d\n",list[1].pricelist_ticket);
    printf("=> Tiket trip to Bunaken    = Rp %d\n",list[2].pricelist_ticket);
    printf("=> Tiket trip to Raja Ampat = Rp %d\n",list[3].pricelist_ticket);
    printf("=> Tiket trip to Wakatobi   = Rp %d\n",list[4].pricelist_ticket);

    int total_arr[4][3]=
    {
        {2250000,2550000,3300000},
        {1987500,3112500,3562500},
        {3000000,4125000,4575000},
        {3650000,25,50}
    };
    int choice1, choice2;
    printf("Pilih 2 tiket berbeda untuk liburan yang ingin Anda ambil : ");
    scanf("%d %d",&choice1,&choice2);

    if(choice1==echoice1 && choice2==echoice3 || choice1==echoice3 && choice2==echoice1){
        printf("\n=> Selamat, Anda mendapatkan diskon %d%% !!\n",total_arr[3][3]);
        printf("=> Total biaya yang harus Anda bayar : Rp %d",total_arr[0][0]);
    }else if(choice1==echoice1 && choice2==echoice4 || choice1==echoice4 && choice2==echoice1){
        printf("\n=> Selamat, Anda mendapatkan diskon %d%% !!\n",total_arr[3][3]);
        printf("=> Total biaya yang harus Anda bayar : Rp %d",total_arr[0][1]);
    }else if(choice1==echoice3 && choice2==echoice4 || choice1==echoice4 && choice2==echoice3){
        printf("\n=> Selamat, Anda mendapatkan diskon %d%% !!\n",total_arr[3][3]);
        printf("=> Total biaya yang harus Anda bayar : Rp %d",total_arr[0][2]);
    }else if(choice1==echoice2 && choice2==echoice1 || choice1==echoice1 && choice2==echoice2){
        printf("\n=> Selamat, Anda mendapatkan diskon %d%% !!\n",total_arr[3][1]);
        printf("=> Total biaya yang harus Anda bayar : Rp %d",total_arr[1][0]);
    }else if(choice1==echoice2 && choice2==echoice3 || choice1==echoice3 && choice2==echoice2){
        printf("\n=> Selamat, Anda mendapatkan diskon %d%% !!\n",total_arr[3][1]);
        printf("=> Total biaya yang harus Anda bayar : Rp %d",total_arr[1][1]);
    }else if(choice1==echoice2 && choice2==echoice4 || choice1==echoice4 && choice2==echoice2){
        printf("\n=> Selamat, Anda mendapatkan diskon %d%% !!\n",total_arr[3][1]);
        printf("=> Total biaya yang harus Anda bayar : Rp %d",total_arr[1][2]);
    }else if(choice1==echoice1 && choice2==echoice5 || choice1==echoice5 && choice2==echoice1){
        printf("\n=> Selamat, Anda mendapatkan diskon %d%% !!\n",total_arr[3][1]);
        printf("=> Total biaya yang harus Anda bayar : Rp %d",total_arr[2][0]);
    }else if(choice1==echoice3 && choice2==echoice5 || choice1==echoice5 && choice2==echoice3){
        printf("\n=> Selamat, Anda mendapatkan diskon %d%% !!\n",total_arr[3][1]);
        printf("=> Total biaya yang harus Anda bayar : Rp %d",total_arr[2][1]);
    }else if(choice1==echoice4 && choice2==echoice5 || choice1==echoice5 && choice2==echoice4){
        printf("\n=> Selamat, Anda mendapatkan diskon %d%% !!\n",total_arr[3][1]);
        printf("=> Total biaya yang harus Anda bayar : Rp %d",total_arr[2][2]);
    }else if(choice1==echoice2 && choice2==echoice5 || choice1==echoice5 && choice2==echoice2){
        printf("\n=> Maaf, Anda tidak mendapatkan diskon.\n");
        printf("=> Total biaya yang harus Anda bayar : Rp %d",total_arr[3][0]);
    }else{
        printf("Input Anda sama.");
    }
    printf("\n\n--------------------------HAVE A NICE TRIP--------------------------\n");
return 0;
}
