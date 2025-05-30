#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 5

int pilih;

struct Stack {
    int data[MAX];
    int top;
}stack;

int main(){
    stack.top = -1;
    printf("============================\n");
    printf("====Quiz Stack and Queue====\n");
    printf("============================\n");
    printf("=1.Stack String            =\n");
    printf("=2.Queue Integer           =\n");
    printf("=3.Penjelasan Stack        =\n");
    printf("=4.Penjelasan Queue        =\n");
    printf("=5.Exit                    =\n");
    printf("============================\n");
    printf("Input Pilihan Anda: ");
    scanf("%d", &pilih);

    switch(pilih){
    case 1:
        system("cls");
        menustack();
        break;

    case 2:
        system("cls");
        menuqueue();
        break;

    case 3:
        system("cls");
        artistack();
        break;

    case 4:
        system("cls");
        artiqueue();
        break;

    case 5:
        system("cls");
        printf("Terima Kasih telah mencoba Program Saya :) ");
        getch();
        break;

        default:

            fflush(stdin);
            printf("ANDA SALAH INPUT");
            getch();
            system("cls");
            main();
    }
}
    void menustack(){
        printf("===========================\n");
        printf("===========Stack=========== \n");
        printf("===========================\n");
        printf("=1.Push Stack             =\n");
        printf("=2.Pop Stack              =\n");
        printf("=3.Print Stack            =\n");
        printf("=4.Delete Stack           =\n");
        printf("=5.Kembali Main Menu      =\n");
        printf("===========================\n");
        printf("Input Pilihan Anda : ");
        scanf("%d", &pilih);

        switch(pilih){
        case 1:
            system("cls");
            push();
            break;

        case 2:
            system("cls");
            pop();
            break;

        case 3:
            system("cls");
            printstack();
            break;

        case 4:
            system("cls");
            hapusstack();
            break;

        case 5:
            system("cls");
            main();
            break;

        default:

                 printf("ANDA SALAH INPUT");
                 fflush(stdin);
                getch();
                system("cls");
                menustack();
        }
    }
void push() {
    int data;
    if (stack.top == MAX - 1) {
        printf("Stack Penuh");
        getch();
        system("cls");
        menustack();
    } else {
        printf("Masukkan Data : ");
        scanf("%d", &data);
        stack.top++;
        stack.data[stack.top] = data;
        printf("%d Berhasil di push ke dalam Stack", data);
        getch();
        system("cls");
        menustack();
    }
}
void pop() {
    if (stack.top == -1) {
        printf("Stack Kosong");
        getch();
        system("cls");
        menustack();
    } else {
        printf("%d dihapus dari Stack", stack.data[stack.top]);
        stack.top--;
        getch();
        system("cls");
        menustack();
    }
}
void printstack() {
    if (stack.top == -1) {
        printf("Stack Kosong");
        getch();
        system("cls");
        menustack();
    } else {
        printf("Stack : ");
        for (int i = stack.top; i >= 0; i--) {
            printf("%d ", stack.data[i]);
        }
        printf("\n");
        getch();
        system("cls");
        menustack();
    }
}
void hapusstack() {
    stack.top = -1;
    printf("Stack Berhasil Dihapus");
    getch();
    system("cls");
    menustack();
}

struct Queue {
    int front;
    int rear;
    char data[MAX][50];
}q;
    void menuqueue(){
        printf("============================\n");
        printf("============Queue===========\n");
        printf("============================\n");
        printf("=1.Enqueue Int             =\n");
        printf("=2.Dequeue Int             =\n");
        printf("=3.Print Queue             =\n");
        printf("=4.Delete Queue            =\n");
        printf("=5.Kembali Main Menu       =\n");
        printf("============================\n");
        printf("Input Pilihan Anda : ");
        scanf("%d", &pilih);

        switch(pilih){
        case 1:
            system("cls");
            enqueue();
            break;

        case 2:
            system("cls");
            dequeue();
            break;

        case 3:
            system("cls");
            printqueue();
            break;

        case 4:
            system("cls");
            deletequeue();
            break;

        case 5:
            system("cls");
            main();
            break;

            default:
                fflush(stdin);
                printf("ANDA SALAH INPUT");
                getch();
                system("cls");
                menuqueue();
        }
    }
void enqueue() {
    char temp[50];
    if(q.rear == MAX) {
        printf("Queue Penuh");
        getch();
        system("cls");
        menuqueue();
    }else{
        printf("Masukkan data : ");
        scanf("%s", temp);
        strcpy(q.data[q.rear], temp);
        q.rear++;
        printf("Data Berhasil Ditambahkan ke Dalam Queue");
        getch();
        system("cls");
        menuqueue();
    }
}
void dequeue() {
    if(q.front == q.rear){
        printf("Queue tidak ada");
        getch();
        system("cls");
        menuqueue();
    }else{
        printf("Data %s Dihapus Dari Queue", q.data[q.front]);
        for(int i = q.front; i < q.rear - 1; i++){
            strcpy(q.data[i], q.data[i+1]);
        }
        q.rear--;
        getch();
        system("cls");
        menuqueue();
    }
}
void printqueue() {
    if(q.front == q.rear){
        printf("Queue tidak ada");
        getch();
        system("cls");
        menuqueue();
    }else{
        printf("Data Dalam Queue : ");
        for(int i = q.front; i < q.rear; i++){
            printf("%s ", q.data[i]);
        }
        printf("\n");
        getch();
        system("cls");
        menuqueue();
    }
}
void deletequeue(){
    q.front = 0;
    q.rear = 0;
    printf("Queue Dihapus");
    getch();
        system("cls");
        menuqueue();
}
void artistack(){

    printf("Sesuai namanya, stack berarti tumpukan yang merupakan struktur data linier yang \n");
    printf("mengikuti prinsip Last In First Out (LIFO). Artinya elemen terakhir yang dimasukan\n");
    printf("akan menjadi elemen pertama yang akan keluar. Stack memiliki basic operation seperti : \n\n");
    printf("Push : Menyisipkan elemen ke bagian atas stack\n");
    printf("Pop: Menghapus elemen atas dari stack\n");
    printf("IsEmpty: Memeriksa apakah stack kosong berarti bernilai true\n");
    printf("IsFull: Memeriksa apakah stack sudah penuh\n\n");
    system("pause");
    system("cls");
    main();
}
void artiqueue(){

    printf("Queue adalah struktur data linier yang menerapkan prinsip operasi dimana elemen data yang masuk\n");
    printf("pertama akan keluar lebih dulu. Prinsip ini dikenal dengan istilah FIFO (First In, First Out). Contohnya \n");
    printf("dalam kehidupan sehari-hari adalah barisan orang yang menunggu untuk membeli tiket di gedung bioskop.\n");
    printf("Orang yang baru datang akan bergabung dengan barisan dari ujung dan orang yang berdiri di depan akan\n");
    printf("menjadi yang pertama mendapatkan tiket dan meninggalkan barisan. Demikian pula dalam struktur data queue, \n");
    printf("data yang ditambahkan terlebih dahulu akan meninggalkan antrian terlebih dahulu.\n\n");
    printf("Operasi - operasi dasar pada Queue antara lain : \n\n");
    printf("Enqueue: Berfungsi untuk menambahkan elemen ke akhir antrian\n");
    printf("Dequeue: Berfungsi untuk menghapus elemen dari depan antrian\n");
    printf("IsEmpty: Memeriksa apakah antrian kosong\n");
    printf("IsFull : Memeriksa apakah antrian penuh\n");
    system("pause");
    system("cls");
    main();
}
