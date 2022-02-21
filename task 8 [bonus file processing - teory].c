#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct FormMahasiswa
{
    unsigned int NIM;
    char Nama[30];
    double IpkMahasiswa;
};

unsigned int OptData(void), OptByte(void), OptSeq(void);
int RawByte(), SeqData();
void AddDat(FILE *fPtr), DelDat(FILE *fPtr), UpData(FILE *fPtr), ListDat(FILE*fPtr), ConvertToTxt(FILE *fPtr);
void AddTxt(FILE *fPtr), DelTxt(FILE *fPtr), ListTxt(FILE*fPtr), ConvertToDat(FILE *fPtr);

int main(void){
    unsigned int OptFile;
    while((OptFile = OptData()) != 0){
        switch(OptFile){
        case 1:
                RawByte();
                break;
        case 2:
                SeqData();
                break;
        default:
                puts("Opsi yang Anda masukkan salah !");
                break;
        }
    }
}

unsigned int OptData(void){
    unsigned int OptFile;
    printf("%s", "\nDaftar opsi file yang dapat Anda gunakan :\n1 untuk Raw Byte (.dat)\n2 untuk Sequential Data (.txt)\n0 untuk Keluar\n=> Masukkan opsi yang Anda pilih :");
    scanf("%u", &OptFile);
    return OptFile;
}

int RawByte(){
    FILE *cfPtr;
    if((cfPtr = fopen("Mahasiswa.dat", "rb+")) == NULL){
        if((cfPtr = fopen("Mahasiswa.dat", "wb")) == NULL){
            puts("File Anda tidak tersedia.");
        }else{
            struct FormMahasiswa BlankClient = {0, "", 0.0};
            for(unsigned int k=1; k<=1000; ++k)
            {
                fwrite(&BlankClient, sizeof(struct FormMahasiswa), 1, cfPtr);
            }
            RawByte();
        }
        }else{
        unsigned int Option;
        while((Option = OptByte()) != 0){
            switch(Option){
                case 1:
                    AddDat(cfPtr);
                    break;
                case 2:
                    DelDat(cfPtr);
                    break;
                case 3:
                    UpData(cfPtr);
                    break;
                case 4:
                    ListDat(cfPtr);
                    break;
                case 5:
                    ConvertToTxt(cfPtr);
                    break;
                default:
                    puts("Opsi yang Anda masukkan salah !");
                    break;
            }
        }
        fclose(cfPtr);
    }
}

unsigned int OptByte(void){
    unsigned int Option;
    printf("%s", "\nDaftar opsi fitur yang dapat Anda gunakan :\n1 untuk Tambah Data Mahasiswa\n2 untuk Hapus Data Mahasiswa\n3 untuk Lihat Data Mahasiswa\n4 untuk Konversi file .dat ke file .txt\n0 untuk Keluar\n=> Masukkan opsi yang Anda pilih :");
    scanf("%u", &Option);
    return Option;
}

int SeqData(){
    FILE *cfPtr;
    if((cfPtr = fopen("Mahasiswa.txt", "a+")) == NULL){
        puts("File Anda tidak tersedia.");
    }else{
        unsigned int Option;
        while((Option = OptSeq()) != 0){
            switch(Option){
                case 1:
                    AddTxt(cfPtr);
                    break;
                case 2:
                    DelTxt(cfPtr);
                    break;
                case 3:
                    ListTxt(cfPtr);
                    break;
                case 4:
                    ConvertToDat(cfPtr);
                    break;
                default:
                    puts("Opsi yang Anda masukkan salah !");
                    break;
            }
        }
        fclose(cfPtr);
    }
}

unsigned int OptSeq(void){
    unsigned int Option;
    printf("%s", "\n\nDaftar opsi fitur yang dapat Anda gunakan :\n1 untuk Tambah Data Mahasiswa\n2 untuk Hapus Data Mahasiswa\n3 untuk Lihat Data Mahasiswa\n4 untuk Konversi file .dat ke file .txt\n0 untuk Keluar\n=> Masukkan opsi yang Anda pilih :");
    scanf("%u", &Option);
    return Option;
}

void AddDat(FILE *addPtr){
    printf("%s", "Masukkan NIM dengan ketentuan (angka 1-100) :");
    unsigned int NIM;
    scanf("%d", &NIM);
    fseek(addPtr, (NIM-1) * sizeof(struct FormMahasiswa), SEEK_SET);
    struct FormMahasiswa client = {0, "", 0.0};
    fread(&client, sizeof(struct FormMahasiswa), 1, addPtr);
    printf("%s", "Masukkan Nama, IPK : \n? ");
    scanf("%29s %lf", &client.Nama, &client.IpkMahasiswa);
    client.NIM = NIM;
    fseek(addPtr, (client.NIM-1) * sizeof(struct FormMahasiswa), SEEK_SET);
    fwrite(&client, sizeof(struct FormMahasiswa), 1, addPtr);
}

void DelDat(FILE *deletePtr){
    printf("%s", "Masukkan NIM yang akan Anda hapus dengan ketentuan (angka 1 - 100) :");
    unsigned int NIM;
    scanf("%u", &NIM);
    struct FormMahasiswa client;
    fseek(deletePtr, (NIM - 1) * sizeof(struct FormMahasiswa), SEEK_SET);
    fread(&client, sizeof(struct FormMahasiswa), 1, deletePtr);
    if (client.NIM != NIM){
        printf("Data #%d tidak tersedia di dalam file.\n", NIM);
    }else{
        fseek(deletePtr, (NIM - 1) * sizeof(struct FormMahasiswa), SEEK_SET);
        struct FormMahasiswa BlankClient;
        BlankClient.NIM = 0;
        strcpy(BlankClient.Nama, "");
        BlankClient.IpkMahasiswa = 0;
        fwrite(&BlankClient,
               sizeof(struct FormMahasiswa), 1, deletePtr);
        printf("Data dari NIM #%d telah dihapus.\n", NIM);
    }
}

void UpData(FILE *updatePtr){
    printf("%s", "Masukkan NIM dengan ketentuan <1-100> :");
    unsigned int NIM;
    scanf("%d", &NIM);
    fseek(updatePtr, (NIM - 1) * sizeof(struct FormMahasiswa), SEEK_SET);
    struct FormMahasiswa client = {0, "", 0.0};
    fread(&client, sizeof(struct FormMahasiswa), 1, updatePtr);
    if (client.NIM == 0){
        printf("Data #%d tidak tersedia di dalam file.\n", NIM);
    }else{
        printf("%-10d%-29s%10.2f\n\n", client.NIM, client.Nama, client.IpkMahasiswa);
        printf("%s", "Masukkan Nama, IPK yang ingin Anda update : \n? ");
        scanf("%29s %lf", &client.Nama, &client.IpkMahasiswa);
        printf("%-10d%-29s%10.2f\n\n", client.NIM, client.Nama, client.IpkMahasiswa);
        fseek(updatePtr, (NIM - 1) * sizeof(struct FormMahasiswa), SEEK_SET);
        fwrite(&client, sizeof(struct FormMahasiswa), 1, updatePtr);
    }
}

void ListDat(FILE *readPtr){
    printf("%-10s%-29s%10s\n", "NIM", "Nama", "IPK");
    rewind(readPtr);
    while (!feof(readPtr)){
        struct FormMahasiswa client = {0, "", 0.0};
        int result = fread(&client, sizeof(struct FormMahasiswa), 1, readPtr);
        if (result != 0 && client.NIM != 0){
            printf("%-10d%-29s%10.2f\n", client.NIM, client.Nama, client.IpkMahasiswa);
        }
    }
}

void ConvertToTxt(FILE *convertPtr){
    FILE *txtPtr;
    if ((txtPtr = fopen("Mahasiswa.txt", "w")) == NULL){
        puts("File Anda tidak tersedia.");
    }else{
        rewind(convertPtr);
        while (!feof(convertPtr)){
            struct FormMahasiswa client = {0, "", 0.0};
            int result = fread(&client, sizeof(struct FormMahasiswa), 1, convertPtr);
            if (result != 0 && client.NIM != 0){
                fprintf(txtPtr, "%-10d%-29s%10.2f\n", client.NIM, client.Nama, client.IpkMahasiswa);
            }
        }
        puts("File telah dikonversi ke dalam bentuk sequential file (.txt) dengan nama  file Mahasiswa.txt ! Ganti pada file yang sudah ada !");
        fclose(txtPtr);
    }
}

void AddTxt(FILE *addPtr){
    puts("Masukkan NIM Nama IPK Anda dan masukkan EOF untuk berhenti :");
    printf("%s", "? ");
    struct FormMahasiswa client = {0, "", 0.0};
    struct FormMahasiswa check = {0, "", 0.0};
    scanf("%d%29s%lf", &client.NIM, client.Nama, &client.IpkMahasiswa);
    rewind(addPtr);
    fscanf(addPtr, "%d%29s%lf", &check.NIM, check.Nama, &check.IpkMahasiswa);
    printf("%s", "? ");
    fprintf(addPtr, "%-10d%-29s%10.2f\n", client.NIM, client.Nama, client.IpkMahasiswa);
    scanf("%d%29s%lf", &client.NIM, client.Nama, &client.IpkMahasiswa);
    rewind(addPtr);
    }

void DelTxt(FILE *deletePtr){
    printf("%s", "Masukkan NIM yang akan Anda hapus dengan ketentuan (angka 1 - 100) :");
    unsigned int NIM;
    scanf("%d", &NIM);
    struct FormMahasiswa client = {0, "", 0.0};
    rewind(deletePtr);
    FILE *TemporaryPtr;
    if ((TemporaryPtr = fopen("Temporary.txt", "w")) == NULL){
        puts("File Anda tidak tersedia.");
    }else{
        fscanf(deletePtr, "%10d%29s%lf", &client.NIM, client.Nama, &client.IpkMahasiswa);
        while (!feof(deletePtr)){
            if (client.NIM != NIM){
                fprintf(TemporaryPtr, "%-10d%-29s%10.2f\n", client.NIM, client.Nama, client.IpkMahasiswa);
            }
            fscanf(deletePtr, "%d%29s%lf", &client.NIM, client.Nama, &client.IpkMahasiswa);
        }
        fclose(deletePtr);
        fclose(TemporaryPtr);
        remove("Mahasiswa.txt");
        rename("Temporary.txt", "Mahasiswa.txt");
        printf("Data pada NIM #%d telah berhasil dihapus !\n", NIM);
        deletePtr = fopen("Mahasiswa.txt", "r+");
    }
}

void ListTxt(FILE *readPtr){
    struct FormMahasiswa client = {0, "", 0.0};
    printf("%-10s%-29s%-10s\n", "NIM", "Nama", "IPK");
    rewind(readPtr);
    fscanf(readPtr, "%d%29s%lf", &client.NIM, client.Nama, &client.IpkMahasiswa);
    while (!feof(readPtr)){
        printf("%-10d%-29s%-10.2f\n", client.NIM, client.Nama, client.IpkMahasiswa);
        fscanf(readPtr, "%d%29s%lf", &client.NIM, client.Nama, &client.IpkMahasiswa);
    }
}

void ConvertToDat(FILE *convertPtr){
    FILE *datPtr;
    struct FormMahasiswa client = {0, "", 0.0};
    if ((datPtr = fopen("Mahasiswa.dat", "wb")) == NULL){
        puts("File Anda tidak tersedia.");
    }else{
        rewind(convertPtr);
        while (!feof(convertPtr)){
            fscanf(convertPtr, "%d%29s%lf", &client.NIM, client.Nama, &client.IpkMahasiswa);
            fseek(datPtr, (client.NIM - 1) * sizeof(struct FormMahasiswa), SEEK_SET);
            fwrite(&client, sizeof(struct FormMahasiswa), 1, datPtr);
        }
        puts("File telah berhasil dikonversi ke dalam bentuk raw byte file (.dat) dengan nama Mahasiswa.dat");
    }
    fclose(datPtr);
}
