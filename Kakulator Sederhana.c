#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int pilih1,pilih2,pilih3,pilih4;
void main()
{
    system("cls");
    printf("===================================\n");
    printf("==========Tugas Kakulator==========\n");
    printf("===================================\n");
    printf(" \n1.PingPoroLanSudo                 ");
    printf(" \n2.SinCosTan                       ");
    printf(" \n3.Hitung Keliling dan Luas        ");
    printf(" \n4.Hitung Akar Kuadrat             ");
    printf(" \n5.Exit                            ");
    printf("\nMasukan Pilihan : ");
    scanf("%d",&pilih1);
    fflush(stdin);
    switch(pilih1)
        {
        case 1:
            system("cls");
            menu1();
            break;
        case 2:
            system ("cls");
            menu2();
            break;
        case 3:
            system("cls");
            menu3();
            break;
        case 4:
            system("cls");
            kuadrat();
            break;
        case 5:
            system ("cls");
            exit(0);
        default:
            printf("Menu tidak ada");
            system("pause");
            main(0);
    }
}
void menu1()
{
    system ("cls");
            printf("============================\n");
            printf("=====Ping Poro Lan Sudo=====\n");
            printf("============================\n");
            printf(" \n1.Perkalian                ");
            printf(" \n2.Pembagian                ");
            printf(" \n3.Penjumlahan              ");
            printf(" \n4.Pengurangan              ");
            printf(" \n5.Return Menu Utama        ");
            printf("\nMasukan Pilihan : ");
            scanf("%d",&pilih2);
            fflush(stdin);
            switch(pilih2)
             {
                case 1:
                    system("cls");
                    perkalian();
                    break;
                case 2:
                    system("cls");
                    pembagian();
                    break;
                case 3:
                    system("cls");
                    penjumlahan();
                    break;
                case 4:
                    system("cls");
                    pengurangan();
                    break;
                case 5:
                    system ("cls");
                    main();
                    break;
                default:
                    printf("menu tidak ada");
                    system("pause");
                    main();
             }
}
void menu2()
{
            fflush(stdin);
            system ("cls");
            printf("==================================\n");
            printf("============Sin Cos Tan===========\n");
            printf("==================================\n");
            printf(" \n1. Sinus                         ");
            printf(" \n2. Cosinus                       ");
            printf(" \n3. Tangen                        ");
            printf(" \n4. Return Menu Utama             ");
            printf(" \nMasukan Pilihan : ");
            scanf("%d",&pilih3);
            switch(pilih3)
            {
                case 1:
                    system("cls");
                    sinus();
                    break;
                case 2:
                    system("cls");
                    cosinus();
                    break;
                case 3:
                    system("cls");
                    tangen();
                    break;
                case 4:
                    system("cls");
                    main();
                    break;
                default:
                    printf("Menu tidak ada");
                    system("pause");
                    main();
            }
}
void menu3()
{
            fflush(stdin);
            system("cls");
            printf("==================================\n");
            printf("=======Keliling Luas Volume=======\n");
            printf("==================================\n");
            printf(" \n1. Hitung Keliling Bangun Datar  ");
            printf(" \n2. Hitung Luas Bangun Datar      ");
            printf(" \n3. Hitung Volume Bangun Ruang    ");
            printf(" \n4. Return Menu Utama             ");
            printf(" \nMasukan Pilihan : ");
            scanf("%d",&pilih4);
            switch(pilih4)
            {
                case 1:
                    system("cls");
                    kelmen1();
                    break;
                case 2:
                    system("cls");
                    kelmen2();
                    break;
                case 3:
                    system("cls");
                    kelmen3();
                    break;
                case 4:
                    system("cls");
                    main();
                    break;
                default:
                    printf("Menu Tidak Ada");
                    system("pause");
                    main(0);
        }
}
    void perkalian()
    {
        fflush(stdin);
        system("cls");
        float angka1,angka2,hasil;
        printf("Masukan Angka Pertama : ");
        scanf("%f",&angka1);
        printf("Masukan Angka Kedua   : ");
        scanf("%f",&angka2);
        hasil=angka1*angka2;
        printf("Hasil Perkalian dari %.2f * %.2f adalah %.2f\n",angka1,angka2,hasil);
        printf("Pencet Tombol Apapun  \n");
        getch();
        tanyakali();
    }
        void tanyakali()
        {
            fflush(stdin);
            system("cls");
            int nanyakali;
            printf("============================================================\n");
            printf("=======================INGIN MENGULANG?=====================\n");
            printf("============================================================\n");
            printf("tekan 1 jika ingin mengulang Menghitung Perkalian           \n");
            printf("tekan 2 jika ingin kembali ke menu                          \n");
            printf("============================================================\n");
            printf("Pilih Opsi : ");
            scanf("%d",&nanyakali);
            switch(nanyakali)
            {
            case 1:
                perkalian();
                break;
            case 2:
                menu1();
                break;
            default:
                system("cls");
                printf("Input Salah\n         ");
                printf("Pencet Tombol Apapun\n");
                getch();
                tanyakali();
        }
    }
    void pembagian()
    {
        fflush(stdin);
        system ("cls");
        float angka1,angka2,hasil;
        printf("Masukan Angka Pertama : ");
        scanf("%f",&angka1);
        printf("Masukan Angka Kedua   : ");
        scanf("%f",&angka2);
        hasil=angka1/angka2;
        printf("Hasil Pembagian dari %.2f + %.2f adalah %.2f\n", angka1,angka2,hasil);
        printf("Pencet Tombol Apapun    ");
        getch();
        tanyabagi();
    }
        void tanyabagi()
        {
            fflush(stdin);
            system("cls");
            int nanyabagi;
            printf("============================================================\n");
            printf("=======================INGIN MENGULANG?=====================\n");
            printf("============================================================\n");
            printf("tekan 1 jika ingin mengulang Menghitung Pembagian           \n");
            printf("tekan 2 jika ingin kembali ke menu                          \n");
            printf("============================================================\n");
            printf("Pilih Opsi : ");
            scanf("%d",&nanyabagi);
            switch(nanyabagi)
            {
            case 1:
                pembagian();
                break;
            case 2:
                menu1();
                break;
            default:
                system("cls");
                printf("Input Salah\n         ");
                printf("Pencet Tombol Apapun\n");
                getch();
                tanyabagi();
            }
        }
    void penjumlahan()
    {
        fflush(stdin);
        system ("cls");
        int angka1,angka2,hasil;
        printf("Masukan Angka Pertama : ");
        scanf("%d",&angka1);
        printf("Masukan Angka Kedua   : ");
        scanf("%d",&angka2);
        hasil=angka1+angka2;
        printf("Hasil Penjumlahan dari %d + %d adalah %d\n", angka1, angka2, hasil);
        printf("Pencet Tombol Apapun    ");
        getch();
        tanyanambah();
    }
        void tanyanambah()
        {
            fflush(stdin);
            system("cls");
            int nanyanambah;
            printf("============================================================\n");
            printf("=======================INGIN MENGULANG?=====================\n");
            printf("============================================================\n");
            printf("tekan 1 jika ingin mengulang Menghitung Penambahan          \n");
            printf("tekan 2 jika ingin kembali ke menu                          \n");
            printf("============================================================\n");
            printf("Pilih Opsi : ");
            scanf("%d",&nanyanambah);
            switch(nanyanambah)
            {
            case 1:
                penjumlahan();
                break;
            case 2:
                menu1();
                break;
            default:
                system("cls");
                printf("Input Salah\n         ");
                printf("Pencet Tombol Apapun\n");
                getch();
                tanyanambah();
            }
        }
    void pengurangan()
    {
        fflush(stdin);
        system ("cls");
        int angka1,angka2,hasil;
        printf("Masukan Angka Pertama : ");
        scanf("%d",&angka1);
        printf("Masukan Angka Kedua   : ");
        scanf("%d",&angka2);
        hasil=angka1-angka2;
        printf("Hasil Pengurangan dari %d - %d adalah %d\n", angka1, angka2, hasil);
        printf("Pencet Tombol Apapun    ");
        getch();
        tanyakurang();
    }
        void tanyakurang()
        {
            fflush(stdin);
            system("cls");
            int nanyakurang;
            printf("============================================================\n");
            printf("=======================INGIN MENGULANG?=====================\n");
            printf("============================================================\n");
            printf("tekan 1 jika ingin mengulang Menghitung Pengurangan         \n");
            printf("tekan 2 jika ingin kembali ke menu                          \n");
            printf("============================================================\n");
            printf("Pilih Opsi : ");
            scanf("%d",&nanyakurang);
            switch(nanyakurang)
            {
            case 1:
                pengurangan();
                break;
            case 2:
                menu1();
                break;
            default:
                system("cls");
                printf("Input Salah\n         ");
                printf("Pencet Tombol Apapun\n");
                getch();
                tanyakurang();
            }
        }
    void sinus()
    {
        fflush(stdin);
        system ("cls");
        double x,sin_x;
        printf("Masukan Derajat Sinus :");
        scanf("%lf",&x);
        sin_x = sin(x);
        printf("Hasil Sinus adalah sin(%lf) = %lf\n",x,sin_x);
        printf("Pencet Tombol Apapun   ");
        getch();
        tanyasinus();
    }
        void tanyasinus()
        {
            fflush(stdin);
            system("cls");
            int nanyasinus;
            printf("============================================================\n");
            printf("=======================INGIN MENGULANG?=====================\n");
            printf("============================================================\n");
            printf("tekan 1 jika ingin mengulang Menghitung Sinus               \n");
            printf("tekan 2 jika ingin kembali ke menu                          \n");
            printf("============================================================\n");
            printf("Pilih Opsi : ");
            scanf("%d",&nanyasinus);
            switch(nanyasinus)
            {
            case 1:
                sinus();
                break;
            case 2:
                menu2();
                break;
            default:
                system("cls");
                printf("Input Salah\n         ");
                printf("Pencet Tombol Apapun\n");
                getch();
                tanyakurang();
            }
        }
    void cosinus()
    {
        fflush(stdin);
        system ("cls");
        double x,cos_x;
        printf("Masukan Derajat Cosinus :");
        scanf("%lf",&x);
        cos_x = cos(x);
        printf("Hasil Cosinus adalah Cos(%lf) = %lf,x\n",x,cos_x);
        printf("Pencet Tombol Apapun   ");
        getch();
        tanyacosinus();
    }
        void tanyacosinus()
        {
            fflush(stdin);
            system("cls");
            int nanyacosinus;
            printf("============================================================\n");
            printf("=======================INGIN MENGULANG?=====================\n");
            printf("============================================================\n");
            printf("tekan 1 jika ingin mengulang Menghitung Cosinus             \n");
            printf("tekan 2 jika ingin kembali ke menu                          \n");
            printf("============================================================\n");
            printf("Pilih Opsi : ");
            scanf("%d",&nanyacosinus);
            switch(nanyacosinus)
            {
            case 1:
                cosinus();
                break;
            case 2:
                menu2();
                break;
            default:
                system("cls");
                printf("Input Salah\n         ");
                printf("Pencet Tombol Apapun\n");
                getch();
                tanyacosinus();
            }
        }
    void tangen()
    {
        fflush(stdin);
        system("cls");
        double x,tan_x;
        printf("Masukan Derajat tangen :");
        scanf("%lf",&x);
        tan_x = tan(x);
        printf("Hasil Tangen adalah tan(%lf) = %lf,x\n",x,tan_x);
        printf("Pencet Tombol Apapun   ");
        getch();
        tanyatangen();
    }
        void tanyatangen()
        {
            fflush(stdin);
            system("cls");
            int nanyatangen;
            printf("============================================================\n");
            printf("=======================INGIN MENGULANG?=====================\n");
            printf("============================================================\n");
            printf("tekan 1 jika ingin mengulang Menghitung Tangen              \n");
            printf("tekan 2 jika ingin kembali ke menu                          \n");
            printf("============================================================\n");
            printf("Pilih Opsi : ");
            scanf("%d",&nanyatangen);
            switch(nanyatangen)
            {
            case 1:
                tangen();
                break;
            case 2:
                menu2();
                break;
            default:
                system("cls");
                printf("Input Salah\n         ");
                printf("Pencet Tombol Apapun\n");
                getch();
                tanyatangen();
            }
        }
    void kuadrat()
    {
        fflush(stdin);
        system("cls");
        float angka,hasil;
        printf("Masukan Bilangan Akar :");
        scanf("%f",&angka);
        hasil = sqrt(angka);
        printf("Hasil Akar Kuadrat dari %.2f adalah %2.f\n",angka,hasil);
        printf("Pencet Tombol Apapun   ");
        getch();
        tanyakuadrat();
    }
        void tanyakuadrat()
        {
            fflush(stdin);
            system("cls");
            int nanyakuadrat;
            printf("============================================================\n");
            printf("=======================INGIN MENGULANG?=====================\n");
            printf("============================================================\n");
            printf("tekan 1 jika ingin mengulang Menghitung Kuadrat             \n");
            printf("tekan 2 jika ingin kembali ke menu                          \n");
            printf("============================================================\n");
            printf("Pilih Opsi : ");
            scanf("%d",&nanyakuadrat);
            switch(nanyakuadrat)
            {
            case 1:
                kuadrat();
                break;
            case 2:
                main();
                break;
            default:
                system("cls");
                printf("Input Salah\n          ");
                printf("Pencet Tombol Apapun\n ");
                getch();
                tanyakuadrat();
            }
        }
    void kelmen1()
    {
                fflush(stdin);
                int pilih5;
                system("cls");
                printf("===================================\n");
                printf("=======Keliling Bangun Datar=======\n");
                printf("===================================\n");
                printf(" \n1. Keliling Persegi");
                printf(" \n2. Keliling Trapesium");
                printf(" \n3. Keliling Layang-Layang");
                printf(" \n4. Keliling Lingkaran");
                printf(" \n5. Kembali Ke Menu Sebelumnya");
                printf(" \nMasukan Pilihan :");
                scanf("%d",&pilih5);
                switch(pilih5)
                {
                    case 1:
                        system("cls");
                        kelper();
                        break;
                    case 2:
                        system("cls");
                        keltra();
                        break;
                    case 3:
                        system("cls");
                        kellay();
                        break;
                    case 4:
                        system("cls");
                        kelling();
                        break;
                    case 5:
                        system("cls");
                        menu3();
                        break;
                    default:
                        printf("Menu tidak ada");
                        system("pause");
                        main(0);
                }
    }
    void kelper()
    {
        fflush(stdin);
        system("cls");
        float sisi, keliling;
        printf("Masukkan panjang sisi : ");
        scanf("%f", &sisi);
        keliling = 4 * sisi;
        printf("Keliling Persegi adalah %.2f\n", keliling);
        printf("Pencet Tombol Apapun   ");
        getch();
        tanyakelper();
    }
        void tanyakelper()
        {
            fflush(stdin);
            system("cls");
            int nanyakelper;
            printf("============================================================\n");
            printf("=======================INGIN MENGULANG?=====================\n");
            printf("============================================================\n");
            printf("tekan 1 jika ingin mengulang Menghitung Keliling Persegi    \n");
            printf("tekan 2 jika ingin kembali ke menu                          \n");
            printf("============================================================\n");
            printf("Pilih Opsi : ");
            scanf("%d",&nanyakelper);
            switch(nanyakelper)
            {
            case 1:
                kelper();
                break;
            case 2:
                kelmen1();
                break;
            default:
                system("cls");
                printf("Input Salah\n          ");
                printf("Pencet Tombol Apapun\n ");
                getch();
                tanyakelper();
            }
        }
    void keltra()
    {
        fflush(stdin);
        system("cls");
        float sisi1, sisi2, sisi3, sisi4, keliling;
        printf("Masukkan panjang sisi pertama : ");
        scanf("%f", &sisi1);
        printf("Masukkan panjang sisi kedua   : ");
        scanf("%f", &sisi2);
        printf("Masukkan panjang sisi ketiga  : ");
        scanf("%f", &sisi3);
        printf("Masukkan panjang sisi keempat : ");
        scanf("%f", &sisi4);
        keliling = sisi1 + sisi2 + sisi3 + sisi4;
        printf("Keliling trapesium adalah %.2f\n", keliling);
        printf("Pencet Tombol Apapun            ");
        getch();
        tanyakeltra();
    }
        void tanyakeltra()
        {
            fflush(stdin);
            system("cls");
            int nanyakeltra;
            printf("============================================================\n");
            printf("=======================INGIN MENGULANG?=====================\n");
            printf("============================================================\n");
            printf("tekan 1 jika ingin mengulang Menghitung Keliling Trapesium  \n");
            printf("tekan 2 jika ingin kembali ke menu                          \n");
            printf("============================================================\n");
            printf("Pilih Opsi:");
            scanf("%d",&nanyakeltra);
            switch(nanyakeltra)
            {
            case 1:
                keltra();
                break;
            case 2:
                kelmen1();
                break;
            default:
                system("cls");
                printf("Input Salah\n          ");
                printf("Pencet Tombol Apapun\n ");
                getch();
                tanyakeltra();
            }
        }
    void kellay()
    {
        fflush(stdin);
        float sisi_a, sisi_b, keliling;
        printf("Masukkan panjang diagonal pertama : ");
        scanf("%f", &sisi_a);
        printf("Masukkan panjang diagonal kedua   : ");
        scanf("%f", &sisi_b);
        keliling = 2 * (sisi_a + sisi_b);
        printf("Keliling layang-layang adalah %.2f\n", keliling);
        printf("Pencet Tombol Apapun                ");
        getch();
        tanyakellay();
    }
        void tanyakellay()
        {
            fflush(stdin);
            system("cls");
            int nanyakellay;
            printf("============================================================\n");
            printf("=======================INGIN MENGULANG?=====================\n");
            printf("============================================================\n");
            printf("tekan 1 jika ingin mengulang Menghitung Keliling Layang2    \n");
            printf("tekan 2 jika ingin kembali ke menu                          \n");
            printf("============================================================\n");
            printf("Pilih Opsi:");
            scanf("%d",&nanyakellay);
            switch(nanyakellay)
            {
            case 1:
                kellay();
                break;
            case 2:
                kelmen1();
                break;
            default:
                system("cls");
                printf("Input Salah\n          ");
                printf("Pencet Tombol Apapun\n ");
                getch();
                tanyakellay();
            }
        }
    void kelling()
    {
        fflush(stdin);
        system("cls");
        float jari_jari, keliling;
        const float phi = 3.14;
        printf("Masukkan panjang jari-jari : ");
        scanf("%f", &jari_jari);
        keliling = 2 * phi * jari_jari;
        printf("Keliling lingkaran adalah %.2f\n", keliling);
        printf("Pencet Tombol Apapun         ");
        getch();
        tanyakelling();
    }
        void tanyakelling()
        {
            fflush(stdin);
            system("cls");
            int nanyakelling;
            printf("============================================================\n");
            printf("=======================INGIN MENGULANG?=====================\n");
            printf("============================================================\n");
            printf("tekan 1 jika ingin mengulang Menghitung Keliling Lingkaran  \n");
            printf("tekan 2 jika ingin kembali ke menu                          \n");
            printf("============================================================\n");
            printf("Pilih Opsi:");
            scanf("%d",&nanyakelling);
            switch(nanyakelling)
            {
            case 1:
                kelling();
                break;
            case 2:
                kelmen1();
                break;
            default:
                system("cls");
                printf("Input Salah\n          ");
                printf("Pencet Tombol Apapun\n ");
                getch();
                tanyakelling();
            }
        }
    void kelmen2()
    {
                fflush(stdin);
                int pilih6;
                system("cls");
                printf("===================================\n");
                printf("=========Luas Bangun Datar=========\n");
                printf("===================================\n");
                printf(" \n1. Luas Persegi                   ");
                printf(" \n2. Luas Trapesium                 ");
                printf(" \n3. Luas Layang-Layang             ");
                printf(" \n4. Luas Lingkaran                 ");
                printf(" \n5. Kembali Ke Menu Sebelumnya     ");
                printf(" \nMasukan Pilihan : ");
                scanf("%d",&pilih6);
                switch (pilih6)
                {
                    case 1:
                        system("cls");
                        luper();
                        break;
                    case 2:
                        system("cls");
                        lutra();
                        break;
                    case 3:
                        system("cls");
                        lulay();
                        break;
                    case 4:
                        system("cls");
                        luling();
                        break;
                    case 5:
                        system("cls");
                        menu3();
                        break;
                    default:
                        printf("Menu tidak ada");
                        system("pause");
                        main(0);
                }
    }
    void luper()
    {
        fflush(stdin);
        system("cls");
        float sisi, luas;
        printf("Masukkan panjang sisi : ");
        scanf("%f", &sisi);
        luas = sisi * sisi;
        printf("Luas persegi adalah %.2f\n", luas);
        printf("Pencet Tombol Apapun    ");
        getch();
        tanyaluper();
    }
        void tanyaluper()
        {
            fflush(stdin);
            system("cls");
            int nanyaluper;
            printf("======================================================\n");
            printf("====================INGIN MENGULANG?==================\n");
            printf("======================================================\n");
            printf("tekan 1 jika ingin mengulang Menghitung Luas Persegi  \n");
            printf("tekan 2 jika ingin kembali ke menu                    \n");
            printf("======================================================\n");
            printf("Pilih Opsi:");
            scanf("%d",&nanyaluper);
            switch(nanyaluper)
            {
            case 1:
                luper();
                break;
            case 2:
                kelmen2();
                break;
            default:
                system("cls");
                printf("Input Salah\n          ");
                printf("Pencet Tombol Apapun\n ");
                getch();
                tanyaluper();
            }
        }
    void lutra()
    {
        fflush(stdin);
        system("cls");
        float alas1, alas2, tinggi, luas;
        printf("Masukkan panjang alas bawah : ");
        scanf("%f", &alas1);
        printf("Masukkan panjang alas atas  : ");
        scanf("%f", &alas2);
        printf("Masukkan panjang tinggi     : ");
        scanf("%f", &tinggi);
        luas = 0.5 * (alas1 + alas2) * tinggi;
        printf("Luas trapesium adalah %.2f\n", luas);
        printf("Pencet Tombol Apapun          ");
        getch();
        tanyalutra();
    }
        void tanyalutra()
        {
            fflush(stdin);
            system("cls");
            int nanyalutra;
            printf("======================================================\n");
            printf("====================INGIN MENGULANG?==================\n");
            printf("======================================================\n");
            printf("tekan 1 jika ingin mengulang Menghitung Luas Trapesium\n");
            printf("tekan 2 jika ingin kembali ke menu                    \n");
            printf("======================================================\n");
            printf("Pilih Opsi:");
            scanf("%d",&nanyalutra);
            switch(nanyalutra)
            {
            case 1:
                lutra();
                break;
            case 2:
                kelmen2();
                break;
            default:
                system("cls");
                printf("Input Salah\n          ");
                printf("Pencet Tombol Apapun\n ");
                getch();
                tanyalutra();
            }
        }
    void lulay()
    {
        fflush(stdin);
        system("cls");
        float diagonal1, diagonal2, luas;
        printf("Masukkan panjang diagonal pertama: ");
        scanf("%f", &diagonal1);
        printf("Masukkan panjang diagonal kedua: ");
        scanf("%f", &diagonal2);
        luas = 0.5 * diagonal1 * diagonal2;
        printf("Luas layang-layang adalah %.2f\n", luas);
        printf("Pencet Tombol Apapun    ");
        getch();
        tanyalulay();
    }
        void tanyalulay()
        {
            fflush(stdin);
            system("cls");
            int nanyalulay;
            printf("======================================================\n");
            printf("====================INGIN MENGULANG?==================\n");
            printf("======================================================\n");
            printf("tekan 1 jika ingin mengulang Menghitung Luas Layang2  \n");
            printf("tekan 2 jika ingin kembali ke menu                    \n");
            printf("======================================================\n");
            printf("Pilih Opsi : ");
            scanf("%d",&nanyalulay);
            switch(nanyalulay)
            {
            case 1:
                lulay();
                break;
            case 2:
                kelmen2();
                break;
            default:
                system("cls");
                printf("Input Salah\n          ");
                printf("Pencet Tombol Apapun\n ");
                getch();
                tanyalulay();
            }
        }
    void luling()
    {
        fflush(stdin);
        float jari_jari, luas;
        const float phi = 3.14;
        printf("Masukkan panjang jari-jari : ");
        scanf("%f", &jari_jari);
        luas = phi * jari_jari * jari_jari;
        printf("Luas lingkaran adalah %.2f\n", luas);
        printf("Pencet Tombol Apapun         ");
        getch();
        tanyaluling();
    }
        void tanyaluling()
        {
            fflush(stdin);
            system("cls");
            int nanyaluling;
            printf("======================================================\n");
            printf("====================INGIN MENGULANG?==================\n");
            printf("======================================================\n");
            printf("tekan 1 jika ingin mengulang Menghitung Luas Lingkaran\n");
            printf("tekan 2 jika ingin kembali ke menu                    \n");
            printf("======================================================\n");
            printf("Pilih Opsi : ");
            scanf("%d",&nanyaluling);
            switch(nanyaluling)
            {
            case 1:
                luling();
                break;
            case 2:
                kelmen2();
                break;
            default:
                system("cls");
                printf("Input Salah\n          ");
                printf("Pencet Tombol Apapun\n ");
                getch();
                tanyaluling();
            }
        }
    void kelmen3()
    {
                fflush(stdin);
                int pilih7;
                system("cls");
                printf("===================================\n");
                printf("========Volume Bangun Ruang========\n");
                printf("===================================\n");
                printf(" \n1. Volume Kubus                   ");
                printf(" \n2. Volume Prisma                  ");
                printf(" \n3. Volume Limas                   ");
                printf(" \n4. Volume Bola                    ");
                printf(" \n5. Kembali Ke Menu Sebelumnya     ");
                printf(" \nMasukan Pilihan : ");
                scanf("%d",&pilih7);
                switch(pilih7)
                {
                    case 1:
                        system("cls");
                        volkub();
                        break;
                    case 2:
                        system("cls");
                        volpris();
                        break;
                    case 3:
                        system("cls");
                        vollim();
                        break;
                    case 4:
                        system("cls");
                        volbol();
                        break;
                    case 5:
                        system("cls");
                        menu3();
                        break;
                    default:
                        printf("Menu tidak ada");
                        system("pause");
                        main(0);
                }

    }
    void volkub()
    {
        fflush(stdin);
        system("cls");
        float sisi, volume;
        printf("Masukkan panjang sisi kubus : ");
        scanf("%f", &sisi);
        volume = sisi * sisi * sisi;
        printf("Volume kubus adalah %.2f\n", volume);
        printf("Pencet Tombol Apapun          ");
        getch();
        tanyavolkub();
    }
        void tanyavolkub()
        {
            fflush(stdin);
            system("cls");
            int nanyavolkub;
            printf("======================================================\n");
            printf("====================INGIN MENGULANG?==================\n");
            printf("======================================================\n");
            printf("tekan 1 jika ingin mengulang Menghitung Volume Kubus  \n");
            printf("tekan 2 jika ingin kembali ke menu                    \n");
            printf("======================================================\n");
            printf("Pilih Opsi : ");
            scanf("%d",&nanyavolkub);
            switch(nanyavolkub)
            {
            case 1:
                volkub();
                break;
            case 2:
                kelmen3();
                break;
            default:
                system("cls");
                printf("Input Salah\n          ");
                printf("Pencet Tombol Apapun\n ");
                getch();
                tanyavolkub();
            }
        }
    void volpris()
    {
        fflush(stdin);
        system("cls");
        float sisi,alas,tinggi,jari,diam,tinggii;
        printf("Masukan sisi persegi        : ");
        scanf("%f",&sisi);
        printf("Masukan Lebar Alas Segitiga : ");
        scanf("%f",alas);
        printf("Masukan Tinggi segitiga     : ");
        scanf("%f",tinggi);
        printf("Masukan jari-jari Lingkaran : ");
        scanf("%f",&jari);
        printf("Masukan Diameter Lingkaran  : ");
        scanf("%f",diam);
        printf("Masukan Tinggi Prisma       : ");
        scanf("%f",&tinggii);
        printf("Pencet Tombol Apapun          ");
        printf("Volume Prisma Persegi adalah %.2f",pow(sisi,2)*tinggi);
        printf("Volume Prisma Segitiga adalah %.2f",0.5*alas*tinggi*tinggii);
        printf("Volume Silinder bedasarkan jari-jari adalah %.2f",3.14*pow(jari,2)*tinggi);
        printf("Volume Silinder Bedasarkan Diameter adalah %.2f",3.14*(diam/2,2)*tinggi);
        getch();
        tanyavolpris();
    }
        void tanyavolpris()
        {
            fflush(stdin);
            system("cls");
            int nanyavolpris;
            printf("======================================================\n");
            printf("====================INGIN MENGULANG?==================\n");
            printf("======================================================\n");
            printf("tekan 1 jika ingin mengulang Menghitung Volume Prisma \n");
            printf("tekan 2 jika ingin kembali ke menu                    \n");
            printf("======================================================\n");
            printf("Pilih Opsi : ");
            scanf("%d",&nanyavolpris);
            switch(nanyavolpris)
            {
            case 1:
                volpris();
                break;
            case 2:
                kelmen3();
                break;
            default:
                system("cls");
                printf("Input Salah\n          ");
                printf("Pencet Tombol Apapun\n ");
                getch();
                tanyavolpris();
            }
        }
    void vollim()
    {
        fflush(stdin);
        system("cls");
        float alas, tinggi_alas, tinggi_limas, volume;
        printf("Masukkan panjang alas segitiga : ");
        scanf("%f", &alas);
        printf("Masukkan tinggi alas segitiga  : ");
        scanf("%f", &tinggi_alas);
        printf("Masukkan tinggi limas          : ");
        scanf("%f", &tinggi_limas);
        volume = 0.33 * alas * tinggi_alas * tinggi_limas;
        printf("Volume limas segitiga adalah %.2f\n", volume);
        printf("Pencet Tombol Apapun             ");
        getch();
        tanyavollim();
    }
        void tanyavollim()
        {
            fflush(stdin);
            system("cls");
            int nanyavollim;
            printf("======================================================\n");
            printf("====================INGIN MENGULANG?==================\n");
            printf("======================================================\n");
            printf("tekan 1 jika ingin mengulang Menghitung Volume Limas  \n");
            printf("tekan 2 jika ingin kembali ke menu                    \n");
            printf("======================================================\n");
            printf("Pilih Opsi : ");
            scanf("%d",&nanyavollim);
            switch(nanyavollim)
            {
            case 1:
                vollim();
                break;
            case 2:
                kelmen3();
                break;
            default:
                system("cls");
                printf("Input Salah\n          ");
                printf("Pencet Tombol Apapun\n ");
                getch();
                tanyavollim();
            }
        }
    void volbol()
    {
        fflush(stdin);
        system("cls");
        float jari_jari, volume;
        const float phi = 3.14;
        printf("Masukkan panjang jari-jari bola: ");
        scanf("%f", &jari_jari);
        volume = 4.0 / 3.0 * phi * jari_jari * jari_jari * jari_jari;
        printf("Volume bola adalah %.2f\n", volume);
        printf("Pencet Tombol Apapun             ");
        getch();
        tanyavolbol();
    }
        void tanyavolbol()
        {
            fflush(stdin);
            system("cls");
            int nanyavolbol;
            printf("======================================================\n");
            printf("====================INGIN MENGULANG?==================\n");
            printf("======================================================\n");
            printf("tekan 1 jika ingin mengulang Menghitung Volume Bola   \n");
            printf("tekan 2 jika ingin kembali ke menu                    \n");
            printf("======================================================\n");
            printf("Pilih Opsi : ");
            scanf("%d",&nanyavolbol);
            switch(nanyavolbol)
            {
            case 1:
                volbol();
                break;
            case 2:
                kelmen3();
                break;
            default:
                system("cls");
                printf("Input Salah\n          ");
                printf("Pencet Tombol Apapun\n ");
                getch();
                tanyavolbol();
            }
        }
