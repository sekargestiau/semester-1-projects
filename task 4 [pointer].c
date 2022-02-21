#include <stdio.h>

void suhu_malam17(int *suhu_ptr17, int suhu17);
void suhu_malam18(int *suhu_ptr18, int suhu18);
void suhu_malam19(int *suhu_ptr19, int suhu19);
void suhu_malam20(int *suhu_ptr20, int suhu20);
void suhu_malam21(int *suhu_ptr21, int suhu21);

int main()
{
    printf("PRAKIRAAN SUHU KOTA SURAKARTA PADA 17-21 OKTOBER 2021\n\n");
    int suhu17 = 34,suhu18 = 36, suhu19 = 37, suhu20 = 37, suhu21 = 34;
    float rerata1,rerata2,rerata3,rerata4;
    printf("1. Suhu 17 Oktober 2021 pada siang hari : %d derajat Celcius\n",suhu17);
    printf("2. Suhu 18 Oktober 2021 pada siang hari : %d derajat Celcius\n",suhu18);
    printf("3. Suhu 19 Oktober 2021 pada siang hari : %d derajat Celcius\n",suhu19);
    printf("4. Suhu 20 Oktober 2021 pada siang hari : %d derajat Celcius\n",suhu20);
    printf("5. Suhu 21 Oktober 2021 pada siang hari : %d derajat Celcius\n",suhu21);
    rerata1 = (suhu17 + suhu18 + suhu19 + suhu20 + suhu21);
    rerata2 = rerata1/5;
    printf("\nSuhu rata-rata 17-21 Oktober 2021 di Kota Surakarta pada siang hari : %.1f derajat Celcius\n",rerata2);
    printf("\nKetika malam hari, suhu turun.\nBerdasarkan prakiraan penurunan suhu, berikut ini adalah daftar suhu di Kota Surakarta pada malam hari.\n");
    suhu_malam17(&suhu17, 9);
    printf("\n1. Suhu 17 Oktober 2021 pada malam hari : %d derajat Celcius\n", suhu17);
    suhu_malam18(&suhu18, 11);
    printf("2. Suhu 18 Oktober 2021 pada malam hari : %d derajat Celcius\n", suhu18);
    suhu_malam19(&suhu19, 13);
    printf("3. Suhu 19 Oktober 2021 pada malam hari : %d derajat Celcius\n", suhu19);
    suhu_malam20(&suhu20, 13);
    printf("4. Suhu 20 Oktober 2021 pada malam hari : %d derajat Celcius\n", suhu20);
    suhu_malam21(&suhu21, 9);
    printf("5. Suhu 21 Oktober 2021 pada malam hari : %d derajat Celcius\n", suhu21);
    rerata3 = 25 + 25 + 24 + 24 + 25;
    rerata4 = rerata3/5;
    printf("\nSuhu rata-rata 17-21 Oktober 2021 di Kota Surakarta pada malam hari : %.1f derajat Celcius\n",rerata4);
    return 0;
}

void suhu_malam17(int *suhu_ptr17, int suhu17)
{
    *suhu_ptr17 = (*suhu_ptr17 - suhu17);
}
void suhu_malam18(int *suhu_ptr18, int suhu18)
{
    *suhu_ptr18 = (*suhu_ptr18 - suhu18);
}
void suhu_malam19(int *suhu_ptr19, int suhu19)
{
    *suhu_ptr19 = (*suhu_ptr19 - suhu19);
}
void suhu_malam20(int *suhu_ptr20, int suhu20)
{
    *suhu_ptr20 = (*suhu_ptr20 - suhu20);
}
void suhu_malam21(int *suhu_ptr21, int suhu21)
{
    *suhu_ptr21 = (*suhu_ptr21 - suhu21);
}
