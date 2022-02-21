#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ticketTrip
{
    char nama[20];
    int tanggal;
    int jumlah;
};

struct ticketTrip Ticket[5]={
    {"iron man",9,200},
    {"spider man",31,160},
    {"black widow",12,125},
    {"hawkeye",15,100},
    {"hulk",20,90}
};

unsigned int option();
void writeData();
void readData();
void updateData();
void showList();

int main(){

    unsigned int optChoice;

    do{
        optChoice = option();
        switch (optChoice)
        {
        case 1:
            writeData();
            break;
        case 2:
            readData();
            break;
        case 3:
            updateData();
            break;
        case 4:
            showList();
            break;
        }
        if(optChoice == 5){
            printf("Terima kasih!\n");
        }
    }

    while(optChoice != 5);

    return 0;
}

unsigned int option(){
    unsigned int optChoice;
    printf("________________________________________________\n");
    printf("    DATA PEMESANAN TIKET PERJALANAN KE BULAN\t");
    printf("\n________________________________________________\n");
    printf("Daftar opsi fitur dalam program :\n");
    printf("1 untuk write data ke binary file\n");
    printf("2 untuk read data dari binary file\n");
    printf("3 untuk update objek dalam array\n");
    printf("4 untuk lihat list data tiket\n");
    printf("5 untuk keluar dari program\n\n");
    printf("=> Masukkan opsi yang Anda pilih : ");
    scanf("%u", &optChoice);

    if(optChoice < 1 && optChoice > 5){
        printf("Opsi yang Anda masukkan salah!\n\n");
        main();
    }

    return optChoice;
}

void writeData(){
    FILE *f = fopen("Ticket.bin", "wb");
    if(f != NULL){
            rewind(f);
            for(int i = 0; i < 5; i++){
                fwrite(&Ticket[i], sizeof(struct ticketTrip), 1, f);
            }
            fclose(f);
            printf("File berhasil dikonversi ke dalam bentuk binary file dengan nama Ticket.bin !\n\n\n");
    }
    else{
        printf("File tidak tersedia.\n\n\n");
    }
}

void readData(){
    FILE *f = fopen("Ticket.bin", "rb");
    if(f != NULL){
        rewind(f);
        printf("%-10s %-20s %-10s %-10s\n", "Stok", "Nama Pemesan", "Jumlah", "Tanggal");
        for(int i = 0; i < 5; i++){
            fread(&Ticket[i], sizeof(struct ticketTrip), 1, f);
            printf("%-10d %-20s %-10d %-10d\n", i+1, Ticket[i].nama, Ticket[i].tanggal, Ticket[i].jumlah);
        }
        fclose(f);
        printf("\n\n\n");
    }
    else{
        printf("File tidak tersedia.\n\n\n");
    }
}

void updateData(){
    printf("%-10s %-20s %-10s %-10s\n", "Nomor", "Nama Pemesan", "Jumlah", "Tanggal");
    for(int i = 0; i < 5; i++){
        printf("%-10d %-20s %-10d %-10d\n", i+1, Ticket[i].nama, Ticket[i].jumlah, Ticket[i].tanggal);
        }

    int inputChange;
    printf("Masukkan nomor tiket yang datanya ingin Anda update: ");
    scanf("%d", &inputChange);

    struct ticketTrip input;

    printf("1 untuk Nama Pemesan\n");
    printf("2 untuk Jumlah\n");
    printf("3 untuk Tanggal\n");
    printf("4 untuk Semua Data\n\n");
    printf("Masukkan opsi yang Anda pilih : ");
    int dataType;
    scanf("%d", &dataType);
    switch (dataType)
    {
    case 1:
        printf("Masukkan nama pemesan yang baru : ");
        scanf("%s", input.nama);
        strcpy(Ticket[inputChange-1].nama, input.nama);
        break;
    case 2:
        printf("Masukkan jumlah tiket yang baru : ");
        scanf("%d", &input.jumlah);
        Ticket[inputChange-1].jumlah = input.jumlah;
        break;
    case 3:
        printf("Masukkan tanggal tiket yang baru : ");
        scanf("%d", &input.tanggal);
        Ticket[inputChange-1].tanggal = input.tanggal;
        break;
    case 4:
        printf("Masukkan nama pemesan yang baru : ");
        scanf("%s", input.nama);
        printf("Masukkan jumlah tiket yang baru : ");
        scanf("%d", &input.jumlah);
        printf("Masukkan tanggal tiket yang baru : ");
        scanf("%d", &input.tanggal);
        Ticket[inputChange-1] = input;
        break;
    default:
        printf("Input yang Anda masukkan salah !\n\n");
        main();
        break;
    }
    printf("Data tiket Anda berhasil diubah!\n\n\n");
}

void showList(){
    printf("%-10s %-20s %-10s %-10s\n", "Nomor", "Nama Pemesan", "Jumlah", "Tanggal");
    for(int i = 0; i < 5; i++){
        printf("%-10d %-20s %-10d %-10d\n", i+1, Ticket[i].nama, Ticket[i].jumlah, Ticket[i].tanggal);
    }
    printf("\n\n\n");
}
