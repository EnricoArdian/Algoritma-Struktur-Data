#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PASIEN 100

// FUNGSI UTAMA PROGRAM
int main(){
    menuLogin();
    menuProgram();
return 0;
}
// ====================

// FUNGSI REGISTER LOGIN (OWEN)

char id[200];
char password[20];

void menuLogin(){

    int c;
        system("cls");
        printf("\t\t\t\t\t======================================\n");
        printf("\t\t\t\t\tSelamat Datang di Rumah Sakit Columbia\n");
        printf("\t\t\t\t\t======================================\n\n");
        printf("\t\t\t\t\tSilahkan Register atau Login\n");
        printf("\t\t\t\t\t1.Register\n");
        printf("\t\t\t\t\t2.Login\n");
        printf("\t\t\t\t\tPilihan anda : ");
        scanf("%d",&c);

        switch(c){
        case 1:
            reg();
            break;
        case 2:
            login();
            break;
        default:
            fflush(stdin);
            system("cls");
            printf("\t\t\t\t\tInput salah, silahkan kembali ke menu");
            getch();
            main();
        }
}
void reg(){
        char key;
        int i = 0;
        system("cls");
        printf("\t\t\t\t\tRegister ID = ");
        scanf(" %[^\n]s", &id);

        printf("\t\t\t\t\tRegister Password = ");
        while((key = getch())!= 13){
            if(i < 0)
                i = 0;
            if(key == 8){
                if(i == 0)
                    continue;
                else{
                    printf("\b\b");
                    i--;
                    continue;
                }
            }
            if(i == 8){
                continue;
            }
            printf("*");
            password[i] = key;
            i++;
        }
        printf("\n\t\t\t\t\tRegister Berhasil, Silahkan Login");
        getch();
        system("cls");
        main();
}
void login(){
    char nama[100];
    char pass[8];
    int ulang;
    char key;
    while(1){
        int i = 0;
        system("cls");
        printf("\t\t\t\t\tInput userName = ");
        scanf("\t\t\t\t\t %[^\n]s", &nama);

        printf("\t\t\t\t\tInput password = ");
        while((key = getch())!= 13){
            if(i < 0)
                i = 0;
            if(key == 8){
                if(i == 0)
                    continue;
                else{
                    printf("\b\b");
                    i--;
                    continue;
                }
            }
            if(i == 8){
                continue;
            }
            printf("*");
            pass[i] = key;
            i++;
        }
        pass[i]='\0';
        if(strcmp(id, nama)== 0 && strcmp(password,pass)==0)
        {
            system("cls");
            printf("\t\t\t\t\t==============\n");
            printf("\t\t\t\t\tSelamat datang\n");
            printf("\t\t\t\t\t==============");
            getch();
            system("cls");
            menuProgram();
            break;
        }
        else{
            int c;

            ulangLogin :
            system("cls");
            printf("\t\t\t\t\tIncorrect Username / Password\n");
            getch();
            printf("\t\t\t\t\t1. Silahkan kembali ke menu\n");
            printf("\t\t\t\t\t2. Kembali ke login\n");
            printf("\t\t\t\t\tPilihan anda : ");
            scanf("%d", &c);

            switch (c){
            case 1:
                system("cls");
                main();
                break;
            case 2:
                system("cls");
                login();
                break;
            default:
                fflush(stdin);
                system("cls");
                printf("\t\t\t\t\tInput salah");
                getch();
                goto ulangLogin;
            }
            sleep(2000);
        }

    }
}

// ====================

// FUNGSI HALAMAN AWAL MENU PROGRAM

void menuProgram(){

    int log;

    printf("\t\t\t\t\t======================\n");
    printf("\t\t\t\t\tCOLUMBIA ASIA HOSPITAL\n");
    printf("\t\t\t\t\t======================\n");
    printf("\t\t\t\t\t> Cek Kamar\n");
    printf("\t\t\t\t\t> Tambah Pasien\n");
    printf("\t\t\t\t\t> Pemesanan/Pembatalan Kamar\n");
    printf("\t\t\t\t\t> Pembelian Obat\n");
    printf("\t\t\t\t\t> Pembayaran\n");
    printf("\t\t\t\t\t> Exit\n");
    printf("\t\t\t\t\tInput : ");
    scanf("%d", &log);

    switch(log){
case 1 :
    system("cls");
    lihatKamar();
    break;

case 2 :
    system("cls");
    daftar();
    break;

case 3 :
    system("cls");
    pesanKamar();
    break;

case 4 :
    system("cls");
    menuObat();
    break;

case 5 :
    system("cls");
    totalHarga();
    break;

case 6 :
    system("cls");
    keluar();
    break;

    default:
        printf("\t\t\t\t\tMaaf Pilihan Tidak Tersedia");
        fflush(stdin);
        getch();
        system("cls");
        menuProgram();
    }
}

// =========================

// FUNGSI UNTUK PENAMPILAN DAN PEMESANAN KAMAR (MARCEL & ENRICO)

struct Kamar {
    int nomorKamar;
    int isDipesan;
};
struct Kamar listKamar[4] = {
    {1, 0},
    {2, 0},
    {3, 0},
    {4, 0}
};
void lihatKamar(){
    printf("\t\t\t\t\tDaftar Kamar\n");
    printf("\t\t\t\t\t1. Kamar A %s\n", listKamar[0].isDipesan ? "penuh" : "");
    printf("\t\t\t\t\t2. Kamar B %s\n", listKamar[1].isDipesan ? "penuh" : "");
    printf("\t\t\t\t\t3. Kamar C %s\n", listKamar[2].isDipesan ? "penuh" : "");
    printf("\t\t\t\t\t4. Kamar D %s\n", listKamar[3].isDipesan ? "penuh" : "");
    printf("\t\t\t\t\tPress any key to continue . . .");
    getch();
    system("cls");
    menuProgram();
}
void pesanKamar(){
int pilih;
printf("\t\t\t\t\tDaftar Kamar\n");
printf("\t\t\t\t\t1. Kamar A \n");
printf("\t\t\t\t\t2. Kamar B \n");
printf("\t\t\t\t\t3. Kamar C \n");
printf("\t\t\t\t\t4. Kamar D \n");
printf("\t\t\t\t\tKetik angka 5 untuk keluar ke menu utama \n");
printf("\t\t\t\t\tPilih kamar yang mau dipesan/dibatalkan (angka): ");
scanf("%d",&pilih);
fflush(stdin);

switch(pilih){
    case 1:
        system("cls");
        kamar1();
        break;
    case 2:
        system("cls");
        kamar2();
        break;
    case 3:
        system("cls");
        kamar3();
        break;
    case 4:
        system("cls");
        kamar4();
        break;
    case 5:
        system("cls");
        menuProgram();
        break;
    default:
        printf("\t\t\t\t\tPilihan Kamar Tidak Ada");
        getch();
        system("cls");
        pesanKamar();
}

if(listKamar[pilih-1].isDipesan){
    printf("\t\t\t\t\tMohon maaf, Kamar sudah dipesan.\n");
    printf("\t\t\t\t\tKetik angka 1 untuk membatalkan pesanan atau ketik angka 2 untuk ke menu utama \n");
    int pilihan;
    scanf("%d", &pilihan);
    fflush(stdin);
    switch(pilihan) {
        case 1:
            listKamar[pilih-1].isDipesan = 0;
            printf("\t\t\t\t\tPesanan kamar berhasil dibatalkan.\n");
            getch();
            break;
        case 2:
            system("cls");
            menuProgram();
            break;
        default:
            printf("\t\t\t\t\tPilihan tidak valid.\n");
            getch();
            system("cls");
            pesanKamar();
            break;
    }
} else {
    listKamar[pilih-1].isDipesan = 1;
    printf("\t\t\t\t\tKamar berhasil dipesan.\n");
    getch();
}
system("cls");
menuProgram();
}

struct kamar{
   char jeniskamar[30];
   int hargakamar;
};
int totalBiayaKamar1 = 0;
int totalBiayaKamar2 = 0;
int totalBiayaKamar3 = 0;
int totalBiayaKamar4 = 0;
void kamar1(){
    system("cls");
    struct kamar kamarpilihan1;
    int lamamenginap1;
    int totalbiaya1;
    strcpy(kamarpilihan1.jeniskamar, "Kamar A");
    kamarpilihan1.hargakamar = 200000;
    printf("\n\t\t\t\t\t=================================================");
    printf("\n\t\t\t\t\t=====================Kamar A=====================");
    printf("\n\t\t\t\t\t=================================================");
    printf("\n\t\t\t\t\t=Fasilitas :                                    =");
    printf("\n\t\t\t\t\t=1.Memiliki 6 bed(tempat tidur) di setiap kamar =");
    printf("\n\t\t\t\t\t=2.Memiliki 1 Kamar Mandi untuk Pasien          =");
    printf("\n\t\t\t\t\t=================================================");
    printf("\n\n\t\t\t\t\tHarga Kamar Per Hari RP.200.000");
    printf("\n\n\t\t\t\t\tMasukan Lama Menginap (dalam hari) : ");
    scanf ("%d",&lamamenginap1);
    fflush(stdin);
    system("cls");
    totalbiaya1 = kamarpilihan1.hargakamar * lamamenginap1;
    totalBiayaKamar1 = totalbiaya1;
    printf("\t\t\t\t\tTotal biaya Kamar A adalah Rp. %d\n", totalbiaya1);
    printf("\n\t\t\t\t\tAnda memesan %s dengan harga Rp. %d per malam.\n", kamarpilihan1.jeniskamar, kamarpilihan1.hargakamar);
    getch();
}
void kamar2(){
    system("cls");
    struct kamar kamarpilihan2;
    int lamamenginap2;
    int totalbiaya2;
    strcpy(kamarpilihan2.jeniskamar, "Kamar B");
    kamarpilihan2.hargakamar = 400000;
    printf("\n\t\t\t\t\t=================================================");
    printf("\n\t\t\t\t\t=====================Kamar B=====================");
    printf("\n\t\t\t\t\t=================================================");
    printf("\n\t\t\t\t\t=Fasilitas :                                    =");
    printf("\n\t\t\t\t\t=1.Memiliki 4 bed(tempat tidur) di setiap kamar =");
    printf("\n\t\t\t\t\t=2.Memiliki 1 Kamar Mandi untuk Pasien          =");
    printf("\n\t\t\t\t\t=================================================");
    printf("\n\n\t\t\t\t\tHarga Kamar Per Hari RP.400.000");
    printf("\n\n\t\t\t\t\tMasukan Lama Menginap (dalam hari) : ");
    scanf("%d",&lamamenginap2);
    fflush(stdin);
    system("cls");
    totalbiaya2 = kamarpilihan2.hargakamar * lamamenginap2;
    totalBiayaKamar2 = totalbiaya2;
    printf("\n\t\t\t\t\tTotal Biaya Kamar B anda adalah Rp.%d\n",totalbiaya2);
    printf("\t\t\t\t\tAnda memesan %s dengan harga Rp. %d per malam.\n", kamarpilihan2.jeniskamar, kamarpilihan2.hargakamar);
    getch();
}
void kamar3(){
    system("cls");
    struct kamar kamarpilihan3;
    int lamamenginap3;
    int totalbiaya3;
    strcpy(kamarpilihan3.jeniskamar, "Kamar C");
    kamarpilihan3.hargakamar = 1000000;
    printf("\n\t\t\t\t\t===========================================================");
    printf("\n\t\t\t\t\t==========================Kamar C==========================");
    printf("\n\t\t\t\t\t===========================================================");
    printf("\n\t\t\t\t\t=Fasilitas :                                              =");
    printf("\n\t\t\t\t\t=1.Memiliki 2 bed(tempat tidur) di setiap kamar           =");
    printf("\n\t\t\t\t\t=2.Memiliki 1 Kamar Mandi untuk Pasien                    =");
    printf("\n\t\t\t\t\t=3.Memiliki AC untuk kenyamanan Pasien dan keluarga Pasien=");
    printf("\n\t\t\t\t\t===========================================================");
    printf("\n\n\t\t\t\t\tHarga Kamar Per Hari RP.1.000.000");
    printf("\n\n\t\t\t\t\tMasukan Lama Menginap (dalam hari) : ");
    scanf("%d",&lamamenginap3);
    fflush(stdin);
    system("cls");
    totalbiaya3 = kamarpilihan3.hargakamar * lamamenginap3;
    totalBiayaKamar3 = totalbiaya3;
    printf("\n\t\t\t\t\tTotal Biaya Kamar C anda adalah Rp.%d\n",totalbiaya3);
    printf("\t\t\t\t\tAnda memesan %s dengan harga Rp. %d per malam.\n", kamarpilihan3.jeniskamar, kamarpilihan3.hargakamar);
    getch();
}
void kamar4(){
    struct kamar kamarpilihan4;
    int lamamenginap4;
    int totalbiaya4;
    strcpy(kamarpilihan4.jeniskamar, "Kamar D");
    kamarpilihan4.hargakamar = 2000000;
    printf("\n\t\t\t\t\t================================================================================================");
    printf("\n\t\t\t\t\t============================================Kamar D=============================================");
    printf("\n\t\t\t\t\t================================================================================================");
    printf("\n\t\t\t\t\t=Fasilitas :                                                                                   =");
    printf("\n\t\t\t\t\t=1.Memiliki 1 bed(tempat tidur) di setiap kamar                                                =");
    printf("\n\t\t\t\t\t=2.Memiliki 1 Kamar Mandi untuk Pasien                                                         =");
    printf("\n\t\t\t\t\t=3.Memiliki AC untuk kenyamanan Pasien dan keluarga Pasien                                     =");
    printf("\n\t\t\t\t\t=4.Ruang tamu untuk kenyamanan keluarga pasien maupun penjenguk pasien                         =");
    printf("\n\t\t\t\t\t=5.Kulkas untuk keperluan menyimpan makanan dan minuman bagi pasien maupun bagi keluarga pasien=");
    printf("\n\t\t\t\t\t================================================================================================");
    printf("\n\n\t\t\t\t\tHarga Kamar Per Hari RP.2.000.000");
    printf("\n\n\t\t\t\t\tMasukan Lama Menginap (dalam hari) : ");
    scanf("%d",&lamamenginap4);
    fflush(stdin);
    system("cls");
    totalbiaya4 = kamarpilihan4.hargakamar * lamamenginap4;
    totalBiayaKamar4 = totalbiaya4;
    printf("\n\t\t\t\t\tTotal Biaya Kamar D anda adalah Rp.%d\n",totalbiaya4);
    printf("\t\t\t\t\tAnda memesan %s dengan harga Rp. %d per malam.\n", kamarpilihan4.jeniskamar, kamarpilihan4.hargakamar);
    getch();
}

// ====================

// FUNGSI UNTUK TAMBAH DATA PASIEN (SHELMOND)

typedef struct data_pasien {
    char nama[100];
    int umur;
    char alamat[100];
    char penyakit[100];
} pasien;
void input_data(struct data_pasien *pasien, int jumlah_pasien) {
    for (int i = 0; i < jumlah_pasien; i++) {
        if (i >= MAX_PASIEN) {
            printf("\t\t\t\t\tJumlah maksimum pasien yang dapat diinput adalah %d\n", MAX_PASIEN);
            break;
        }
        printf("\t\t\t\t\tInput Data pasien : %d\n", i + 1);
        printf("\t\t\t\t\tNama pasien: ");
        scanf(" %[^\n]s", &pasien[i].nama);
        printf("\t\t\t\t\tUmur: ");
        scanf("%d", &pasien[i].umur);
        printf("\t\t\t\t\tAlamat: ");
        scanf(" %[^\n]s", &pasien[i].alamat);
        printf("\t\t\t\t\tKeluhan: ");
        scanf(" %[^\n]s", &pasien[i].penyakit);
        printf("\n");
    }
}
void tampilkan_data(struct data_pasien *pasien, int jumlah_pasien) {
    for (int i = 0; i < jumlah_pasien && i < MAX_PASIEN; i++) {
        printf("\t\t\t\t\tData pasien ke-%d\n", i + 1);
        printf("\t\t\t\t\tNama pasien: %s\n", pasien[i].nama);
        printf("\t\t\t\t\tUmur Pasien: %d\n", pasien[i].umur);
        printf("\t\t\t\t\tAlamat Pasien: %s\n", pasien[i].alamat);
        printf("\t\t\t\t\tPenyakit Yang Di Derita: %s\n", pasien[i].penyakit);
        printf("\n");
    }
}
void ganti_data(struct data_pasien *pasien, int jumlah_pasien) {
    int nomor_pasien;
    printf("\t\t\t\t\tMasukkan nomor pasien yang ingin diganti: ");
    scanf("%d", &nomor_pasien);
    if (nomor_pasien <= jumlah_pasien) {
        printf("\t\t\t\t\tNama pasien: ");
        scanf(" %[^\n]s", &pasien[nomor_pasien-1].nama);
        printf("\t\t\t\t\tUmur: ");
        scanf("%d", &pasien[nomor_pasien-1].umur);
        printf("\t\t\t\t\tAlamat: ");
        scanf(" %[^\n]s", &pasien[nomor_pasien-1].alamat);
        printf("\t\t\t\t\tKeluhan: ");
        scanf(" %[^\n]s", &pasien[nomor_pasien-1].penyakit);
        printf("\n\t\t\t\t\tData pasien berhasil diganti.\n");
    } else {
        printf("\t\t\t\t\tNomor pasien yang dimasukkan salah.\n");
    }
}
void hapus_data(struct data_pasien *pasien, int *jumlah_pasien) {
    int nomor_pasien;
    printf("\t\t\t\t\tMasukkan nomor pasien yang ingin dihapus: ");
    scanf("%d", &nomor_pasien);
    if (nomor_pasien <= *jumlah_pasien) {
        for (int i = nomor_pasien-1; i < *jumlah_pasien-1; i++) {
            strcpy(pasien[i].nama, pasien[i+1].nama);
            pasien[i].umur = pasien[i+1].umur;
            strcpy(pasien[i].alamat, pasien[i+1].alamat);
            strcpy(pasien[i].penyakit, pasien[i+1].penyakit);
        }
        (*jumlah_pasien)--;
        printf("\n\t\t\t\t\tData pasien berhasil dihapus.\n");
    } else {
        printf("\t\t\t\t\tNomor pasien yang dimasukkan salah.\n");
    }
}
void daftar() {
    static struct data_pasien pasien[MAX_PASIEN];
    static int jumlah_pasien = 0;
    int pilihan, menuPas;

    do {
        printf("\t\t\t\t\t===============================================\n");
        printf("\t\t\t\t\t======Pendaftaran Data Pasien Rumah Sakit======\n");
        printf("\t\t\t\t\t===============================================\n");

        printf("\t\t\t\t\t1. Input Data pasien\n");
        printf("\t\t\t\t\t2. Lihat Data pasien\n");
        printf("\t\t\t\t\t3. Hapus Data Pasien\n");
        printf("\t\t\t\t\t4. Ganti Data Pasien\n");
        printf("\t\t\t\t\t5. Exit\n");
        printf("\t\t\t\t\tMasukkan Pilihan : ");
        scanf("%d", &menuPas);

        switch(menuPas) {
            case 1 :
                system("cls");
                printf("\t\t\t\t\t==========================================\n");
                printf("\t\t\t\t\t===========Input Data pasien==============\n");
                printf("\t\t\t\t\t==========================================\n");
                printf("\t\t\t\t\tBerapa Data pasien Yang Ingin Di input: ");
                scanf("%d", &jumlah_pasien);
                input_data(pasien, jumlah_pasien);
                printf("\t\t\t\t\tTekan Apa Saja Untuk Kembali\n");
                getch();
                system("cls");
                break;

            case 2 :
                system("cls");
                if (jumlah_pasien == 0) {
                    printf("\t\t\t\t\tData pasien masih kosong, silahkan input data terlebih dahulu\n");
                } else {
                    tampilkan_data(pasien, jumlah_pasien);
                }
                printf("\t\t\t\t\tTekan Apa Saja Untuk Kembali\n");
                getch();
                system("cls");
                break;

            case 3 :
                system("cls");
                hapus_data(pasien, &jumlah_pasien);
                printf("\t\t\t\t\tTekan Apa Saja Untuk Kembali\n");
                getch();
                system("cls");
                break;

            case 4 :
                system("cls");
                ganti_data(pasien, jumlah_pasien);
                printf("\t\t\t\t\tTekan Apa Saja Untuk Kembali\n");
                getch();
                system("cls");
                break;

            case 5 :
                system("cls");
                printf("\t\t\t\t\tTerima Kasih, Data Anda Sudah Kami Terima\n");
                getch();
                system("cls");
                menuProgram();
                break;

            default:
                printf("\n\t\t\t\t\tMenu Tidak Tersedia");
                fflush(stdin);
                getch();
                system("cls");
                break;
        }

    } while (menuPas != 5);

    return 0;
}


//==================================

// FUNGSI OBAT (YESAYA)

int totalObat1 = 0;
int totalObat2 = 0;
int totalObat3 = 0;
int totalObat4 = 0;
void menuObat(){
    int pilih;

    printf("\t\t\t\t\t===============================\n");
    printf("\t\t\t\t\tDaftar Paket Obat Columbia Asia\n");
    printf("\t\t\t\t\t===============================\n");
    printf("\t\t\t\t\t> Paket Kanker\n");
    printf("\t\t\t\t\t> Paket Diabetes\n");
    printf("\t\t\t\t\t> Paket Hipertensi\n");
    printf("\t\t\t\t\t> Paket Kolestrol\n");
    printf("\t\t\t\t\t> Kembali ke Menu\n");
    printf("\t\t\t\t\tPesan Obat Anda : ");
    scanf("%d", &pilih);

    switch(pilih){
    case 1:
        system("cls");
        obat1();
        break;
    case 2:
        system("cls");
        obat2();
        break;
    case 3:
        system("cls");
        obat3();
        break;
    case 4:
        system("cls");
        obat4();
        break;
    case 5:
        system("cls");
        menuProgram();
        break;

    default:
        printf("\t\t\t\t\tMaaf Input Yang Anda Berikan Salah");
        fflush(stdin);
        getch();
        system("cls");
        menuObat();
    }

    return 0;
}
void obat1(){

    char pilih;
    float hargaObat1 = 2700000;
    totalObat1 = hargaObat1;
    printf("\t\t\t\t\tPaket Obat - Obatan Untuk Penderita Kanker\n");
    printf("\t\t\t\t\t� Agen Alkylating\n");
    printf("\t\t\t\t\t� Inhibitor Mitosis\n");
    printf("\t\t\t\t\t� Inhibitor Topoisomerase\n");
    printf("\t\t\t\t\tApakah anda yakin ingin memesan paket obat ini? \n");
    printf("\t\t\t\t\tJawaban ( y/n ) : ");
    scanf(" %c", &pilih);

    if(pilih == 'y'){
        printf("\t\t\t\t\tTerima kasih sudah membeli obat ini, semoga lekas pulih");
        getch();
        system("cls");
        menuObat();
    } else if (pilih == 'n') {
        printf("\t\t\t\t\tBaik, semoga anda lekas pulih meski tanpa obat kami");
        getch();
        system("cls");
        menuObat();
    } else {
        printf("\t\t\t\t\tMaaf Input Yang Anda Berikan Salah");
        fflush(stdin);
        getch();
        system("cls");
        obat1();
    }

}
void obat2(){

    char pilih;
    float hargaObat2 = 2500000;
    totalObat2 = hargaObat2;
    printf("\t\t\t\t\tPaket Obat - Obatan Untuk Penderita Diabetes\n");
    printf("\t\t\t\t\t� Metformin\n");
    printf("\t\t\t\t\t� Sulfonilurea\n");
    printf("\t\t\t\t\t� Meglitinide\n");
    printf("\t\t\t\t\tApakah anda yakin ingin memesan paket obat ini? \n");
    printf("\t\t\t\t\tJawaban ( y/n ) : ");
    scanf(" %c", &pilih);

    if(pilih == 'y'){
        printf("\t\t\t\t\tTerima kasih sudah membeli obat ini, semoga lekas pulih");
        getch();
        system("cls");
        menuObat();
    } else if (pilih == 'n') {
        printf("\t\t\t\t\tBaik, semoga anda lekas pulih meski tanpa obat kami");
        getch();
        system("cls");
        menuObat();
    } else {
        printf("\t\t\t\t\tMaaf Input Yang Anda Berikan Salah");
        fflush(stdin);
        getch();
        system("cls");
        obat2();
    }
}
void obat3(){

    char pilih;
    float hargaObat3 = 1750000;
    totalObat3 = hargaObat3;
    printf("\t\t\t\t\tPaket Obat - Obatan Untuk Penderita Hipertensi\n");
    printf("\t\t\t\t\t� Atorvastatin\n");
    printf("\t\t\t\t\t� Amblodipin\n");
    printf("\t\t\t\t\t� Diuretik\n");
    printf("\t\t\t\t\tApakah anda yakin ingin memesan paket obat ini? \n");
    printf("\t\t\t\t\tJawaban ( y/n ) : ");
    scanf(" %c", &pilih);

    if(pilih == 'y'){
        printf("\t\t\t\t\tTerima kasih sudah membeli obat ini, semoga lekas pulih");
        getch();
        system("cls");
        menuObat();
    } else if (pilih == 'n') {
        printf("\t\t\t\t\tBaik, semoga anda lekas pulih meski tanpa obat kami");
        getch();
        system("cls");
        menuObat();
    } else {
        printf("\t\t\t\t\tMaaf Input Yang Anda Berikan Salah");
        fflush(stdin);
        getch();
        system("cls");
        obat3();
    }
}
void obat4(){

    char pilih;
    float hargaObat4 = 1500000;
    totalObat4 = hargaObat4;
    printf("\t\t\t\t\tPaket Obat - Obatan Untuk Penderita Kolestrol\n");
    printf("\t\t\t\t\t� Bile Acid Sequestrants\n");
    printf("\t\t\t\t\t� Statin\n");
    printf("\t\t\t\t\t� Niacin\n");
    printf("\t\t\t\t\tApakah anda yakin ingin memesan paket obat ini? \n");
    printf("\t\t\t\t\tJawaban ( y/n ) : ");
    scanf(" %c", &pilih);

    if(pilih == 'y'){
        printf("\t\t\t\t\tTerima kasih sudah membeli obat ini, semoga lekas pulih");
        getch();
        system("cls");
        menuObat();
    } else if (pilih == 'n') {
        printf("\t\t\t\t\tBaik, semoga anda lekas pulih meski tanpa obat kami");
        getch();
        system("cls");
        menuObat();
    } else {
        printf("\t\t\t\t\tMaaf Input Yang Anda Berikan Salah");
        fflush(stdin);
        getch();
        system("cls");
        obat4();
    }
}


void totalHarga(){
    int pilihtotal;
    float biaya2, biaya3, biaya4, totalSemua;
    printf("\t\t\t\t\tTOTAL HARGA\n");
    printf("\t\t\t\t\t1. Kamar A \n");
    printf("\t\t\t\t\t2. Kamar B \n");
    printf("\t\t\t\t\t3. Kamar C \n");
    printf("\t\t\t\t\t4. Kamar D \n");
    printf("\t\t\t\t\tTotal harga yang ingin di pilih: ");
    scanf("%d",&pilihtotal);
    switch(pilihtotal){
        case 1:
            system("cls");
            totalSemua = totalBiayaKamar1 + totalObat1;
            printf("\t\t\t\t\tTotal Harga Yang Anda Harus Bayar beserta obat Adalah = %.0f", totalSemua);
            getch();
            system("cls");
            menuProgram();
            break;
        case 2:
            system("cls");
            totalSemua = totalBiayaKamar2 + totalObat2;
            printf("\t\t\t\t\tTotal Harga Yang Anda Harus Bayar beserta obat Adalah = %.0f", totalSemua);
            getch();
            system("cls");
            menuProgram();
            break;
        case 3:
            system("cls");
            totalSemua = totalBiayaKamar3 + totalObat3;
            printf("\t\t\t\t\tTotal Harga Yang Anda Harus Bayar  beserta obat Adalah = %.0f", totalSemua);
            getch();
            system("cls");
            menuProgram();
            break;
        case 4:
            system("cls");
            totalSemua = totalBiayaKamar4 + totalObat4;
            printf("\t\t\t\t\tTotal Harga Yang Anda Harus Bayar beserta obat  Adalah = %.0f", totalSemua);
            getch();
            system("cls");
            menuProgram();
            break;
        default:
            printf("\t\t\t\t\tPilihan Total Biaya Tidak Ada");
            getch();
            system("cls");
            totalHarga();
   }

}


// =====================================


// FUNGSI EXIT PROGRAM (OWEN)

void keluar(){

printf("\n\n\n\n\n\n\n                                            Dibuat Oleh :\n\n\n\n");
printf("                                 ");printf("N");Sleep(100);printf("a");Sleep(100);printf("m");Sleep(100);printf("a");Sleep(100);printf(":");Sleep(100);printf(" ");
Sleep(100);printf("S");Sleep(100);printf("H");Sleep(100);printf("E");Sleep(100);printf("L");Sleep(100);printf("M");Sleep(100);printf("O");printf("N"); printf("D");printf("\n");
printf("                                 ");printf("N");Sleep(100);printf("i");Sleep(100);printf("m");Sleep(100);printf(":");Sleep(100);printf(" ");Sleep(100);
printf("6");Sleep(100);printf("7");Sleep(100);printf("2");Sleep(100);printf("0");Sleep(100);printf("2");Sleep(100);printf("2");Sleep(100);printf("3");
Sleep(100);printf("0");Sleep(100);printf("0");Sleep(100);printf("\n\n");

printf("                                 ");printf("N");Sleep(100);printf("a");Sleep(100);printf("m");Sleep(100);printf("a");Sleep(100);printf(":");Sleep(100);printf(" ");
Sleep(100);printf("O");Sleep(100);printf("W");Sleep(100);printf("E");Sleep(100);printf("N");Sleep(100);printf("\n");
printf("                                 ");printf("N");Sleep(100);printf("i");Sleep(100);printf("m");Sleep(100);printf(":");Sleep(100);printf(" ");
Sleep(100);printf("6");Sleep(100);printf("7");Sleep(100);printf("2");Sleep(100);printf("0");Sleep(100);printf("2");Sleep(100);printf("2");Sleep(100);printf("1");
Sleep(100);printf("7");Sleep(100);printf("1");Sleep(100);printf("\n\n");

printf("                                 ");printf("N");Sleep(100);printf("a");Sleep(100);printf("m");Sleep(100);printf("a");Sleep(100);printf(":");Sleep(100);printf(" ");
Sleep(100);printf("Y");Sleep(100);printf("E");Sleep(100);printf("S");Sleep(100);printf("A");Sleep(100);printf("Y");Sleep(100);printf("A");printf("\n");
printf("                                 ");printf("N");Sleep(100);printf("i");Sleep(100);printf("m");Sleep(100);printf(":");Sleep(100);printf(" ");Sleep(100);
printf("6");Sleep(100);printf("7");Sleep(100);printf("2");Sleep(100);printf("0");Sleep(100);printf("2");Sleep(100);printf("2");Sleep(100);printf("1");
Sleep(100);printf("1");Sleep(100);printf("1");Sleep(100);printf("\n\n");

printf("                                 ");printf("N");Sleep(100);printf("a");Sleep(100);printf("m");Sleep(100);printf("a");Sleep(100);printf(":");Sleep(100);printf(" ");
Sleep(100);printf("E");Sleep(100);printf("N");Sleep(100);printf("R");Sleep(100);printf("I");Sleep(100);printf("C");printf("O");printf("\n");
printf("                                 ");printf("N");Sleep(100);printf("i");Sleep(100);printf("m");Sleep(100);printf(":");Sleep(100);printf(" ");Sleep(100);
printf("6");Sleep(100);printf("7");Sleep(100);printf("2");Sleep(100);printf("0");Sleep(100);printf("2");Sleep(100);printf("2");Sleep(100);printf("0");
Sleep(100);printf("3");Sleep(100);printf("8");Sleep(100);printf("\n\n");

printf("                                 ");printf("N");Sleep(100);printf("a");Sleep(100);printf("m");Sleep(100);printf("a");Sleep(100);printf(":");Sleep(100);printf(" ");
Sleep(100);printf("M");Sleep(100);printf("A");Sleep(100);printf("R");Sleep(100);printf("C");Sleep(100);printf("E");Sleep(100);printf("L");printf("\n");
printf("                                 ");printf("N");Sleep(100);printf("i");Sleep(100);printf("m");Sleep(100);printf(":");Sleep(100);printf(" ");Sleep(100);
printf("6");Sleep(100);printf("7");Sleep(100);printf("2");Sleep(100);printf("0");Sleep(100);printf("2");Sleep(100);printf("2");Sleep(100);printf("0");
Sleep(100);printf("1");Sleep(100);printf("8");Sleep(100);printf("\n\n");
printf("\n\n");
exit(0);
}

// =========================
