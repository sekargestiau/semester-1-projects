#include <stdio.h>
#include <string.h>

void displayBits(unsigned int value);
union Industry_Stark {
    char stark1[50];
    char stark2[50];
    char stark3[50];
};
int main(){
    typedef struct hooman{
    char *nama;
    unsigned int umur;
    char *pekerjaan;
    struct hooman *Ayah;
    struct hooman *Ibu;
    }hooman;

//struct manusia hooman;
typedef enum pekerjaan{
eIScientist=1,
eEngineer,
eScientist
}jobs;

jobs tonyjob = 1;
char *job[] = {"","Engineer","Inventor dan Scientist","Scientist"};

hooman Tony, Ayah, Ibu;
hooman hoomanlist[3]={
{"Anthony Edward Stark",21,job[tonyjob],&Ayah,&Ibu},
{"Howard Anthony Stark",52},
{"Maria Stark",50}
};

Tony = hoomanlist[0];
Ayah = hoomanlist[1];
Ibu = hoomanlist[2];

union Industry_Stark industry;

    strcpy(industry.stark1,"Avengers Industries");
    strcpy(industry.stark2,"Avengers Team");
    strcpy(industry.stark3,"Stark Industries");
    printf("INDUSTRI KELUARGA STARK : %s\n", industry.stark1, industry.stark2, industry.stark3);
    printf("\nBiodata Keluarga Stark \n");
    printf("Nama      : %s\nUmur      : %u tahun\nPekerjaan : %s\nNama Ayah : %s\nUmur Ayah : %u tahun\nNama Ibu  : %s\nUmur Ibu  : %d tahun\n\n",Tony.nama,Tony.umur,Tony.pekerjaan,Ayah.nama,Ayah.umur,Ibu.nama,Ibu.umur);

    //BITWISE
    printf("Bilangan biner dari umur Anthony Edward Stark :\n");
    displayBits(Tony.umur);
    printf("Bilangan biner dari umur Howard Anthony Stark :\n");
    displayBits(Ayah.umur);
    printf("Bilangan biner dari umur Maria Stark          :\n");
    displayBits(Ibu.umur);
    printf("\n\nBilangan biner dari umur Howard Anthony Stark OR bilangan biner dari umur Maria Stark :\n");
    displayBits(Ayah.umur | Ibu.umur);
    printf("Bilangan biner dari umur Howard Anthony Stark AND bilangan biner dari umur Maria Stark:\n");
    displayBits(Ayah.umur & Ibu.umur);
    printf("Bilangan biner dari umur Howard Anthony Stark XOR bilangan biner dari umur Maria Stark:\n");
    displayBits(Ayah.umur ^ Ibu.umur);
return 0;
}
void displayBits(unsigned int value)
{
    // declare displayMask and left shift 31 bits
    unsigned int displayMask = 1 << 31;

    printf("%10u = ", value);

    // loop through bits
    for (unsigned int c = 1; c <= 32; ++c)
    {
        putchar(value & displayMask ? '1' : '0');
        value <<= 1; //shift value left by 1

        if (c % 8 == 0)
        {
            putchar(' ');
        }
    }

    putchar('\n');
}
