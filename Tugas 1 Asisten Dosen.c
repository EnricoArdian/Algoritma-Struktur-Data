#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,i,j,k;
   system("cls");
   printf("===========\n");
   printf("===Quiz====\n");
   printf("===========\n");
   printf("=1.Level 1=\n");
   printf("=2.Level 2=\n");
   printf("=3.Level 3=\n");
   printf("Pilih Level:\n");
   scanf("%d",&n);
   switch(n){
        case 1 :
            system("cls");
            printf("Level 1 nih\n\n");
            printf("masukan angka :");
            scanf("%d",&i);
            for(j=0;j<=i;j++){
                for(k=0;k<=j;k++){
                printf("%d ",j+k);
                }
            printf("\n");
            }
            getch();
            main();
        case 2 :
            system("cls");
            printf("Level 2 nih\n");
            printf("masukan angka :\n");
            scanf("%d",&i);
            for(j=1;j<=i;j++){
                for(k=1;k<=j;k++){
                    printf("%d ",j*k);

            }
            printf("\n");
            }


            getch();
            main();
        case 3 :
            system("cls");
            printf("Level 3 nih\n");
            printf("masukan angka (maks 9 ya):\n");
            scanf("%d",&k);
             for(i=0;i<k;i++){
                for(j=i;j<k-1;j++){
            printf(" ");
        }
                for(j=0;j<=i;j++){
            printf("%d",j+1);
        }
                for(j=i;j>0;j--){
            printf("%d",j);
        }
        printf("\n");
    }

            for(i=k-1;i>0;i--){
                for(j=i;j<=k-1;j++){
            printf(" ");
        }
                for(j=1;j<=i;j++){
            printf("%d",j);
        }
                for(j=i-1;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
        getch();
        main();
        default:
            printf("Level tidak ada");
            main();
   }
    return 0;
}

