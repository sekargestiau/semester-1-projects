#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Menyimpan informasi lagu berupa judul lagu dan penyanyi dalam bentuk struct.
struct MusicPlayer
{
    char SongTitle [100];
    char SongArtist [100];
    struct MusicPlayer *nextPtr;
}; typedef struct MusicPlayer MpPlayer; typedef MpPlayer *MpPtr;

MpPtr start = NULL;
MpPtr end = NULL;

//Pendeklarasian berbagai fungsi dalam program
void ShowPlaylist(void);
void AddSong(char SongTitle[], char SongArtist[]);
void EnqueueMusic(void);
void DequeueMusic(void);
void SavePlaylist(void);
void imp(void);
void SkipSong(int number);
void Space(int total);

int main()
{
    int login = 0;
    char name[100];
    int menu = 0;
    imp();

    while(login != 2)
    {
        printf("....................................................................................."
               "\n ==================================================================================\n"
               "|                            WELCOME TO MUSIC PLAYER PROGRAM                        |\n"
               "| __________________________________________________________________________________|\n"
               "|1. Login Program                                                                   |\n"
               "|2. Exit Program                                                                    |\n"
               " ===================================================================================\n"
               ".....................................................................................\n"
               "Write your choice : ");
        scanf("%d", &login);
        switch(login)
        {
            case 1 :
                printf("\nPlease write your name : ");
                scanf("%s", &name);
                printf("\nHi, %s !! ENJOY YOUR DAY WITH MUSIC PLAYER!\n", &name);
                break;
            case 2 :
                exit(0);
                break;
        }
        break;
    }

    /*
    Pada menu ini akan memuat opsi atau pilihan berbagai fitur pada program.
    Setelah input dimasukkan, switch akan melakukan pemilihan input.
    Kemudian program akan memanggil function yang ada dan program akan menjalankan menu yang diminta.
    */
    while(menu != 5)
    {
        ShowPlaylist();
        printf(
               "..................................................................................."
               "\n =================================================================================\n"
               "|                                MUSIC PLAYER MENU                                |\n"
               "|_________________________________________________________________________________|\n"
               "|1. Add Song to Playlist then Show Playlist                                                          |\n"
               "|2. Play and Finish The Song                                                      |\n"
               "|3. Save Playlist                                                                 |\n"
               "|4. Skip 1 Song and Play The Next Song [Playlist must consist of more than 1 song]|\n"
               "|5. Exit Program                                                                  |\n"
               " =================================================================================\n"
               "...................................................................................\n"
               "Write your choice : ");
        scanf("%d", &menu);
        switch(menu)
        {
            case 1:
                EnqueueMusic();
                break;
            case 2:
                DequeueMusic();
                break;
            case 3:
                SavePlaylist();
                break;
            case 4:
                SkipSong(2);
                break;
            case 5:
                break;
        }
        Space(10);
    }
    return 0;
}

//Ini merupakan function untuk menampilkan playlist.
void ShowPlaylist(void)
{
    MpPtr awal = start;
    //Jika playlist kosong, maka perintah ini dijalankan.
    if(awal == NULL)
    {
        printf("_________________________________________________________________________________\n"
               "There are no songs to play in the queue.\n"
               "_________________________________________________________________________________\n");
         return;
    }
    //Jika terdapat isi pada playlist, maka perintah berikut ini dijalankan dan akan menampilkan isi playlist yang ada.
    else
    {
        printf("_________________________________________________________________________________\n"
               "Playlist Songs\n");
        for(int i = 1; awal != NULL; ++i)
        {
            printf("|%d.| %s by %s", i, awal->SongTitle, awal->SongArtist);
            awal = awal->nextPtr;
            if(awal != NULL)
            {
                printf("\n");
            }
        }
        printf("\n_________________________________________________________________________________\n");
    }
}
//Ini merupakan function untuk memerintahkan supaya menyimpan lagu yang telah diinputkan.
void AddSong(char SongTitle[], char SongArtist[])
{
    MpPtr new = (MpPtr) malloc(sizeof(MpPlayer));
    strcpy(new->SongTitle, SongTitle);
    strcpy(new->SongArtist, SongArtist);
    new->nextPtr = NULL;

    if(start == NULL)
    {
        start = new;
        end = new;
    } else
    {
        end->nextPtr = new;
        end = new;
    }
}
//Ini merupakan function untuk menambahkan lagu ke dalam playlist.
void EnqueueMusic(void)
{
    char title[100];
    char artist[100];

    printf("_________________________________________________________________________________\n"
           "Note : Please, don't use spaces in writing song title and song artist !!\n"
           "\nAdd song title  : ");
    scanf("%s", title);
    printf("Add song artist : ");
    scanf("%s", artist);

    AddSong(title,artist);
    printf("=> \"%s\" song by %s successfully added.\n", title, artist);
    printf("_________________________________________________________________________________\n");
}

//Ini merupakan function untuk memutar dan menyelesaikan lagu dalam playlist.
void DequeueMusic(void)
{
    if(start != NULL)
    {
        MpPtr delete = start;
        start = start->nextPtr;
        free(delete);
    } else
    {
        printf("_________________________________________________________________________________\n"
               "There are no songs to play in the queue.\n"
               "_________________________________________________________________________________\n\n");
    }
}
//Ini merupakan function untuk menyimpan data lagu dalam bentuk file (binary) dengan nama MusicPlayer.bin.
void SavePlaylist(void)
{
    FILE *file;

    MpPlayer temp;
    MpPtr current = start;

    file = fopen("MusicPlayer.bin", "wb");
    while(current != NULL)
    {
        strcpy(temp.SongTitle, current->SongTitle);
        strcpy(temp.SongArtist, current->SongArtist);
        fwrite(&temp, sizeof(MpPlayer), 1, file);
        current = current->nextPtr;
    }
    fclose(file);
    file = NULL;
}

//Ini merupakan function yang akan menampilkan hasil write dalam file MusicPlayer.bin.
void imp(void)
{
    FILE *file;

    MpPlayer temp;

    file = fopen("MusicPlayer.bin", "rb");
    if(file != NULL)
    {
        while(!feof(file))
        {
            fread(&temp, sizeof(MpPlayer), 1, file);
            if(!feof(file))
            {
                AddSong(temp.SongTitle, temp.SongArtist);
            } else
            {
                break;
            }
        }
    }
    fclose(file);
    file = NULL;
}
//Function ini bekerja seperti dequeue. Namun, function ini akan menjalankan 2x dequeue sehingga dapat berfungsi untuk skip lagu.
void SkipSong(int number)
{
    for(int i = 0; i < number; ++i)
    {
        DequeueMusic();
    }
}
//Function ini bekerja sebagai enter sehingga terdapat space kosong setelah program dijalankan.
void Space(int total)
{
    for(int i = 0; i < total; ++i)
    {
        puts("");
    }
}
