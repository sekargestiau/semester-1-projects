#include<stdlib.h>
#include<string.h>
#include<stdio.h>

struct queueNode {
   int data;
   struct queueNode *nextPtr;
};

typedef struct queueNode QueueNode;
typedef QueueNode *QueueNodePtr;


void printQueue(QueueNodePtr currentPtr);
int isEmpty(QueueNodePtr headPtr);
char dequeue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr);
void enqueue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr, int value);
void instructions(void);
struct stackNode {
   int data;
   struct stackNode *nextPtr;
};

typedef struct stackNode StackNode;
typedef StackNode *StackNodePtr;


void push(StackNodePtr *topPtr, int info);
int pop(StackNodePtr *topPtr);
int isEmpty2(StackNodePtr topPtr);
void printStack(StackNodePtr currentPtr);
void instruction(void);

struct Mahasiswa
{
    int nim;
    char nama[100];
    float ipk;
    struct Mahasiswa *next;

}* siswa;

void insert(int nim, char* nama,float ipk)
{

    struct Mahasiswa * student = (struct Mahasiswa *) malloc(sizeof(struct Mahasiswa));
    student->nim = nim;
    strcpy(student->nama, nama);
    student->ipk = ipk;
    student->next = NULL;

    if(siswa==NULL){
        siswa = student;
    }
    else{
        student->next = siswa;
        siswa = student;
    }

}

void search(int nim)
{
    struct Mahasiswa * temp = siswa;
    while(temp!=NULL){
        if(temp->nim==nim){
            printf("Nama : %s\n", temp->nama);
            printf("NIM  : %d\n", temp->nim);
            printf("IPK  : %f\n", temp->ipk);
            return;
        }
        temp = temp->next;
    }
    printf("Mahasiswa dengan nim %d tidak ditemukan !!!\n", nim);
}

void update(int nim)
{

    struct Mahasiswa * temp = siswa;
    while(temp!=NULL){

        if(temp->nim==nim){
            printf("Data mahasiswa dengan NIM %d ditemukan !!!\n", nim);
            printf("Masukkan nama baru: ");
            scanf("%s", temp->nama);
            printf("Masukkan ipk baru: ");
            scanf("%f",&temp->ipk);
            printf("Update Successful!!!\n");
            return;
        }
        temp = temp->next;
    }
    printf("Mahasiswa dengan nim %d tidak ditemukan !!!\n", nim);

}

void Delete(int nim)
{
    struct Mahasiswa * temp1 = siswa;
    struct Mahasiswa * temp2 = siswa;
    while(temp1!=NULL){

        if(temp1->nim==nim){

            printf("Data mahasiswa dengan NIM %d ditemukan !!!\n", nim);

            if(temp1==temp2){
                siswa = siswa->next;
                free(temp1);
            }
            else{
                temp2->next = temp1->next;
                free(temp1);
            }

            printf("Data mahasiswa berhasil dihapus !!!\n");
            return;

        }
        temp2 = temp1;
        temp1 = temp1->next;

    }
    printf("Mahasiswa dengan nim %d tidak ditemukan !!!\n", nim);

}

void display()
{
    struct Mahasiswa * temp = siswa;
    while(temp!=NULL){

        printf("Nama : %s\n", temp->nama);
        printf("NIM  : %d\n", temp->nim);
        printf("IPK  : %f\n\n", temp->ipk);
        temp = temp->next;

    }
}


int main()
{
    siswa = NULL;
    int choice;
    char nama[100];
    int nim;
    float ipk;
    QueueNodePtr headPtr = NULL;
    QueueNodePtr tailPtr = NULL;
    int nimthree;
    StackNodePtr stackPtr = NULL;
    int value;


    printf("1 untuk memasukkan data mahasiswa\n");
    printf("2 untuk mencari data mahasiswa\n");
    printf("3 untuk menghapus data mahasiswa\n");
    printf("4 untuk mengupdate data mahasiswa\n");
    printf("5 untuk menampilkan semua data mahasiswa\n");
    printf("6 untuk operasi queue\n");
    printf("7 untuk operasi stack\n");
    printf("0 untuk keluar dari program\n");

    do
    {
        printf("\n\nMasukkan Pilihan: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("\nMasukkan 3 angka terakhir NIM Anda : ");
                scanf("%d", &nim);
                printf("Masukkan nama panggilan Anda : ");
                scanf("%s", nama);
                printf("Masukkan IPK Anda : ");
                scanf("%f", &ipk);
                insert(nim, nama, ipk);
                break;
            case 2:
                printf("Masukkan 3 angka terakhir NIM untuk mencari: ");
                scanf("%d", &nim);
                search(nim);
                break;
            case 3:
                printf("Masukkan 3 angka terakhir NIM untuk menghapus: ");
                scanf("%d", &nim);
                Delete(nim);
                break;
            case 4:
                printf("Masukkan 3 angka terakhir NIM untuk mengupdate: ");
                scanf("%d", &nim);
                update(nim);
                break;
            case 5:
                display();
                break;
            case 6:

               instructions();
               printf("%s", "? ");
               unsigned int choice2;
               scanf("%u", &choice2);
               while (choice2 != 3) {

                switch(choice2) {

                 case 1:
                    printf("%s", "Masukkan 3 angka terakhir NIM Anda : ");
                    scanf("\n%d", &nimthree);
                    enqueue(&headPtr, &tailPtr, nimthree);
                    printQueue(headPtr);
                    break;
                 case 2:

                    if (!isEmpty(headPtr)) {
                       nimthree = dequeue(&headPtr, &tailPtr);
                       printf("%d has been dequeued.\n", nimthree);
                    }

                    printQueue(headPtr);
                    break;
                 default:
                    puts("Invalid choice.\n");
                    instructions();
                    break;
                    break;
                 case 7:
                    instruction();
                       printf("%s", "? ");
                       unsigned int choice3;
                       scanf("%u", &choice3);

                       while (choice3 != 2) {

              switch (choice3) {
                 case 1:
                    printf("%s", "Masukkan 3 angka terakhir NIM Anda: ");
                    scanf("%d", &value);
                    push(&stackPtr, value);
                    printStack(stackPtr);
                    break;
                 case 2:
                    if (!isEmpty2(stackPtr)) {
                       printf("NIM yang dikeluarkan adalah %d.\n", pop(&stackPtr));
                    }

                    printStack(stackPtr);
                    break;
                 default:
                    puts("Invalid choice.\n");
                    instruction();
                    break;
      }

      printf("%s", "? ");
      scanf("%u", &choice);
   }

   puts("End of run.");
      }

      printf("%s", "? ");
      scanf("%u", &choice2);
   }

   puts("End of run.");
        }

    }
    while (choice != 0);
}
void instructions(void)
{
   printf ("Masukkan pilihan Anda:\n"
           "   1 untuk memasukkan 3 angka terakhir NIM Anda\n"
           "   2 untuk menghapus NIM dari antrian\n"
           "   3 untuk keluar dari program\n");
}

void enqueue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr, int value)
{
   QueueNodePtr newPtr = malloc(sizeof(QueueNode));

   if (newPtr != NULL) {
      newPtr->data = value;
      newPtr->nextPtr = NULL;

      if (isEmpty(*headPtr)) {
         *headPtr = newPtr;
      }
      else {
         (*tailPtr)->nextPtr = newPtr;
      }

      *tailPtr = newPtr;
   }
   else {
      printf("%d not inserted. No memory available.\n", value);
   }
}

char dequeue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr)
{
   char value = (*headPtr)->data;
   QueueNodePtr tempPtr = *headPtr;
   *headPtr = (*headPtr)->nextPtr;

   if (*headPtr == NULL) {
      *tailPtr = NULL;
   }

   free(tempPtr);
   return value;
}


int isEmpty(QueueNodePtr headPtr)
{
   return headPtr == NULL;
}


void printQueue(QueueNodePtr currentPtr)
{

   if (currentPtr == NULL) {
      puts("Queue is empty.\n");
   }
   else {
      puts("The queue is:");


      while (currentPtr != NULL) {
         printf("%d --> ", currentPtr->data);
         currentPtr = currentPtr->nextPtr;
      }

      puts("NULL\n");
   }
}
void instruction(void)
{
   puts("Masukkan pilihan Anda :\n"
      "1 untuk memasukkan data NIM dalam tumpukan\n"
      "2 untuk mengeluarkan data NIM dari tumpukan\n"
      "3 untuk keluar dari program");
}


void push(StackNodePtr *topPtr, int info)
{
   StackNodePtr newPtr = malloc(sizeof(StackNode));
   if (newPtr != NULL) {
      newPtr->data = info;
      newPtr->nextPtr = *topPtr;
      *topPtr = newPtr;
   }
   else {
      printf("NIM %d not inserted. No memory available.\n", info);
   }
}


int pop(StackNodePtr *topPtr)
{
   StackNodePtr tempPtr = *topPtr;
   int popValue = (*topPtr)->data;
   *topPtr = (*topPtr)->nextPtr;
   free(tempPtr);
   return popValue;
}


void printStack(StackNodePtr currentPtr)
{

   if (currentPtr == NULL) {
      puts("Tumpukan data NIM kosong.\n");
   }
   else {
      puts("Tumpukan data NIM:");
      while (currentPtr != NULL) {
         printf("%d --> ", currentPtr->data);
         currentPtr = currentPtr->nextPtr;
      }

      puts("NULL\n");
   }
}


int isEmpty2(StackNodePtr topPtr)
{
   return topPtr == NULL;
}
