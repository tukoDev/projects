#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{  int i,secim1,secim2,adet1,toplam1,toplam2,ucret1,ucret2,kalan1,bos1,bos2,bos3,bos4,bos5,bos6,bos7,bos8,bos9,bos10,bos11,bos12,bos13,bos14,bos15,bos16,bos17;
   do{
     
   system("CLS");
   system("color F1");
   printf("                 \n\n\n\n\n\n\n\n\n\n\n\n\n                                 ");
   printf("%c",201);
   
   for(i=0;i<50;i++){
     printf("%c",205);
   }
   printf("%c",187);
   printf("\n\t\t\t\t %c                                                  %c",186,186);
   printf("\n\t\t\t\t %c                                                  %c",186,186);
   printf("\n\t\t\t\t %c                                                  %c",186,186);
   printf("\n\t\t\t\t %c            SANAL KAFEYE HOSGELDINIZ              %c",186,186);
   printf("\n\t\t\t\t %c                                                  %c",186,186);
   printf("\n\t\t\t\t %c      Devam etmek icin D veya d tusuna basiniz    %c\n                                 %c           CIKIS icin ESC tusuna basiniz          %c",186,186,186,186);
   printf("\n\t\t\t\t %c                                                  %c",186,186);
   printf("\n\t\t\t         %c                                                  %c",186,186);

   printf("\n                                 %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
   char x=getch();
   if (x==27)
   { 
    system("CLS");
    printf("Cikmak istediginizden emin misiniz ? E/H");
    char x=getch();
    if (x==101||x==69){ //E BASİLDİGİNDA
        printf("\n\n\n\n\nCikis yapiliyor...");
        return 0;}
    else if (x==72||x==104){ //H BASILDIGINDA
        system("CLS");
        system("color F1");
        printf("            \n \n\n\n \n\n\n \n\n                                            SANAL KAFEYE HOSGELDINIZ         \n \n\n");
        printf("                                      Devam etmek icin D veya d tusuna basiniz\n                                      CIKIS icin ESC tusuna basiniz\n\n\n\n\n\n");
      
    }
    }if (x==100||x==68){
      system("CLS");
      printf("            \n \n\n\n \n\n\n \n\n                                            KAHVE CESITLERI\n");  
      printf("                                    -------------------------------\n");
      printf("                                    1-TURK KAHVESI            40 TL\n");
      printf("                                    2-ESPRESSO                33 TL\n");
      printf("                                    3-MOCHA                   70 TL\n");
      printf("                                    4-AMERICANO               47 TL\n");
      printf("                                    5-CAPPUCINO               52 TL\n");
      printf("                                    6-CAFFE LATTE             54 TL\n");
      printf("                                    7-SICAK CIKOLATA          69 TL\n");
      printf("                                    8-SALEP                   73 TL\n\n\n\n");
      printf("                                    Seciminizi yapiniz:");
      scanf("%d",&secim1);
      switch(secim1){
      case 1:system("color E0"); system("CLS");
      printf("            \n \n\n\n \n\n\n \n\n                                            TURK KAHVESI CESITLERI\n");  
      printf("                                    -------------------------------\n");
      printf("                                    1-SULU TURK KAHVESI          49 TL\n");
      printf("                                    2-DAMLA SAKIZLI TURK KAHVESI 46 TL\n");
      printf("                                    3-CIKOLATALI TURK KAHVESI    50 TL\n");
      printf("                                    4-SADE TURK KAHVESI          40 TL\n");
      printf("                                    Bir secim yapiniz:");
      scanf("%d",&secim2);
           switch (secim2){
           case 1: system("CLS");                                                               //SULU TURK KAHVESİ İCİN 
           printf("                                    Kac adet SULU TURK KAHVESI istersiniz ?\n ");
           scanf("%d",&adet1);
           toplam1=adet1*49;
           printf("                                    Toplam odemeniz gereken tutar=%d\n",toplam1);
           printf("                                    Yatiracaginiz tutari giriniz=");
           scanf("%d",&ucret1);
           kalan1=toplam1-ucret1;
           while (kalan1>0)
           {system("CLS");
            printf("                                    ODENEN MIKTAR YETERSIZ!!!\n                                    LUTFEN ODEDIGINIZ MIKTARA ILAVE YAPINIZ\n");
            printf("                                    Toplam odemeniz gereken tutar=%d\n",toplam1);
            printf("                                    Su ana kadar odediginiz tutar=%d\n",ucret1);
            printf("                                    Ek ucreti giriniz=");
            scanf("%d",&ucret2);
            ucret1=ucret1+ucret2;
            kalan1=kalan1-ucret2;
           }
           if (kalan1<0){
            system("CLS");
                if(toplam1>ucret1){
                toplam2=toplam1-ucret1;}
                else if (toplam1<=ucret1){
                 toplam2=ucret1-toplam1;
                 }
            printf("                                    %d ADET SULU TURK KAHVESI ICIN %dTL ODEMENIZ ALINMISTIR.\n                                    GERI ODEME=%d\n                                    AFIYET OLSUN.YINE BEKLERIZ.\n\n\n\n",adet1,toplam1,toplam2);}
           else {
            system("CLS");
            printf("                                    %d ADET SULU TURK KAHVESI ICIN %dTL ODEMENIZ ALINMISTIR.\n                                    GERI ODEME=0\n                                    AFIYET OLSUN.YINE BEKLERIZ.\n\n\n\n",adet1,toplam1);
           }
           printf("Programi baslatmak icin herhangi bir tusa basiniz");
           bos1=getch();
           break;
           

           case 2:system("CLS");                                                               //DAMLA SAKIZLI TURK KAHVESİ İCİN 
           printf("                                    Kac adet DAMLA SAKIZLI TURK KAHVESI istersiniz ?\n ");
           scanf("%d",&adet1);
           toplam1=adet1*46;
           printf("                                    Toplam odemeniz gereken tutar=%d\n",toplam1);
           printf("                                    Yatiracaginiz tutari giriniz=");
           scanf("%d",&ucret1);
           kalan1=toplam1-ucret1;
           while (kalan1>0)
           {system("CLS");
            printf("                                    ODENEN MIKTAR YETERSIZ!!!\n                                    LUTFEN ODEDIGINIZ MIKTARA ILAVE YAPINIZ\n");
            printf("                                    Toplam odemeniz gereken tutar=%d\n",toplam1);
            printf("                                    Su ana kadar odediginiz tutar=%d\n",ucret1);
            printf("                                    Ek ucreti giriniz=");
            scanf("%d",&ucret2);
            ucret1=ucret1+ucret2;
            kalan1=kalan1-ucret2;
           }
           if (kalan1<0){
            system("CLS");
                if(toplam1>ucret1){
                toplam2=toplam1-ucret1;}
                else if (toplam1<=ucret1){
                 toplam2=ucret1-toplam1;
                 }
            printf("                                    %d ADET DAMLA SAKIZLI TURK KAHVESI ICIN %dTL ODEMENIZ ALINMISTIR.\n                                    GERI ODEME=%d\n                                    AFIYET OLSUN.YINE BEKLERIZ.\n\n\n\n",adet1,toplam1,toplam2);}
           else {
            system("CLS");
            printf("                                    %d ADET DAMLA SAKIZLI TURK KAHVESI ICIN %dTL ODEMENIZ ALINMISTIR.\n                                    GERI ODEME=0\n                                    AFIYET OLSUN.YINE BEKLERIZ.\n\n\n\n",adet1,toplam1);
           }
            printf("Programi baslatmak icin herhangi bir tusa basiniz");
            bos2=getch();
           break;
           
           case 3:system("CLS");                                                               //DAMLA SAKIZLI TURK KAHVESİ İCİN 
           printf("                                    Kac adet CIKOLATALI TURK KAHVESI istersiniz ?\n ");
           scanf("%d",&adet1);
           toplam1=adet1*50;
           printf("                                    Toplam odemeniz gereken tutar=%d\n",toplam1);
           printf("                                    Yatiracaginiz tutari giriniz=");
           scanf("%d",&ucret1);
           kalan1=toplam1-ucret1;
           while (kalan1>0)
           {system("CLS");
            printf("                                    ODENEN MIKTAR YETERSIZ!!!\n                                    LUTFEN ODEDIGINIZ MIKTARA ILAVE YAPINIZ\n");
            printf("                                    Toplam odemeniz gereken tutar=%d\n",toplam1);
            printf("                                    Su ana kadar odediginiz tutar=%d\n",ucret1);
            printf("                                    Ek ucreti giriniz=");
            scanf("%d",&ucret2);
            ucret1=ucret1+ucret2;
            kalan1=kalan1-ucret2;
           }
           if (kalan1<0){
            system("CLS");
                if(toplam1>ucret1){
                toplam2=toplam1-ucret1;}
                else if (toplam1<=ucret1){
                 toplam2=ucret1-toplam1;
                 }
            printf("                                    %d ADET CIKOLATALI TURK KAHVESI ICIN %dTL ODEMENIZ ALINMISTIR.\n                                    GERI ODEME=%d\n                                    AFIYET OLSUN.YINE BEKLERIZ.\n\n\n\n",adet1,toplam1,toplam2);}
           else {
            system("CLS");
            printf("                                    %d ADET CIKOLATALI TURK KAHVESI ICIN %dTL ODEMENIZ ALINMISTIR.\n                                    GERI ODEME=0\n                                    AFIYET OLSUN.YINE BEKLERIZ.\n\n\n\n",adet1,toplam1);
           }
            printf("Programi baslatmak icin herhangi bir tusa basiniz");
            bos3=getch();
           break;
           
           case 4:system("CLS");                                                               //DAMLA SAKIZLI TURK KAHVESİ İCİN 
           printf("                                    Kac adet SADE TURK KAHVESI istersiniz ?\n ");
           scanf("%d",&adet1);
           toplam1=adet1*40;
           printf("                                    Toplam odemeniz gereken tutar=%d\n",toplam1);
           printf("                                    Yatiracaginiz tutari giriniz=");
           scanf("%d",&ucret1);
           kalan1=toplam1-ucret1;
           while (kalan1>0)
           {system("CLS");
            printf("                                    ODENEN MIKTAR YETERSIZ!!!\n                                    LUTFEN ODEDIGINIZ MIKTARA ILAVE YAPINIZ\n");
            printf("                                    Toplam odemeniz gereken tutar=%d\n",toplam1);
            printf("                                    Su ana kadar odediginiz tutar=%d\n",ucret1);
            printf("                                    Ek ucreti giriniz=");
            scanf("%d",&ucret2);
            ucret1=ucret1+ucret2;
            kalan1=kalan1-ucret2;
           }
           if (kalan1<0){
            system("CLS");
                if(toplam1>ucret1){
                toplam2=toplam1-ucret1;}
                else if (toplam1<=ucret1){
                 toplam2=ucret1-toplam1;
                 }
            printf("                                    %d ADET SADE TURK KAHVESI ICIN %dTL ODEMENIZ ALINMISTIR.\n                                    GERI ODEME=%d\n                                    AFIYET OLSUN.YINE BEKLERIZ.\n\n\n\n",adet1,toplam1,toplam2);}
           else {
            system("CLS");
            printf("                                    %d ADET SADE TURK KAHVESI ICIN %dTL ODEMENIZ ALINMISTIR.\n                                    GERI ODEME=0\n                                    AFIYET OLSUN.YINE BEKLERIZ.\n\n\n\n",adet1,toplam1);
           }
            printf("Programi baslatmak icin herhangi bir tusa basiniz");
            bos4=getch();
           break;
    } break;

     case 2:system("color E0"); system("CLS");
      printf("            \n \n\n\n \n\n\n \n\n                                            ESPRESSO CESITLERI\n");  
      printf("                                    -------------------------------\n");
      printf("                                    1-DOUBLE ESPRESSO           43 TL\n");
      printf("                                    2-ESPRESSO MACCHIATO        40 TL\n");
      printf("                                    3-DOUBLE ESPRESSO MACCHIATO 46 TL\n");
      printf("                                    4-ESPRESSO                  33 TL\n");
      printf("                                    Bir secim yapiniz:");
      scanf("%d",&secim2);
      switch (secim2){
           case 1: system("CLS");                                                               //DOUBLE ESPRESSO KAHVESİ İCİN 
           printf("                                    Kac adet DOUBLE ESPRESSO istersiniz ?\n ");
           scanf("%d",&adet1);
           toplam1=adet1*43;
           printf("                                    Toplam odemeniz gereken tutar=%d\n",toplam1);
           printf("                                    Yatiracaginiz tutari giriniz=");
           scanf("%d",&ucret1);
           kalan1=toplam1-ucret1;
           while (kalan1>0)
           {system("CLS");
            printf("                                    ODENEN MIKTAR YETERSIZ!!!\n                                    LUTFEN ODEDIGINIZ MIKTARA ILAVE YAPINIZ\n");
            printf("                                    Toplam odemeniz gereken tutar=%d\n",toplam1);
            printf("                                    Su ana kadar odediginiz tutar=%d\n",ucret1);
            printf("                                    Ek ucreti giriniz=");
            scanf("%d",&ucret2);
            ucret1=ucret1+ucret2;
            kalan1=kalan1-ucret2;
           }
           if (kalan1<0){
            system("CLS");
                if(toplam1>ucret1){
                toplam2=toplam1-ucret1;}
                else if (toplam1<=ucret1){
                 toplam2=ucret1-toplam1;
                 }
            printf("                                    %d ADET DOUBLE ESPRESSO ICIN %dTL ODEMENIZ ALINMISTIR.\n                                    GERI ODEME=%d\n                                    AFIYET OLSUN.YINE BEKLERIZ.\n\n\n\n",adet1,toplam1,toplam2);}
           else {
            system("CLS");
            printf("                                    %d ADET DOUBLE ESPRESSO ICIN %dTL ODEMENIZ ALINMISTIR.\n                                    GERI ODEME=0\n                                    AFIYET OLSUN.YINE BEKLERIZ.\n\n\n\n",adet1,toplam1);
           }
           printf("Programi baslatmak icin herhangi bir tusa basiniz");
            bos5=getch();
           break;

           case 2: system("CLS");                                                               //DOUBLE ESPRESSO KAHVESİ İCİN 
           printf("                                    Kac adet ESPRESSO MACCHIATO istersiniz ?\n ");
           scanf("%d",&adet1);
           toplam1=adet1*40;
           printf("                                    Toplam odemeniz gereken tutar=%d\n",toplam1);
           printf("                                    Yatiracaginiz tutari giriniz=");
           scanf("%d",&ucret1);
           kalan1=toplam1-ucret1;
           while (kalan1>0)
           {system("CLS");
            printf("                                    ODENEN MIKTAR YETERSIZ!!!\n                                    LUTFEN ODEDIGINIZ MIKTARA ILAVE YAPINIZ\n");
            printf("                                    Toplam odemeniz gereken tutar=%d\n",toplam1);
            printf("                                    Su ana kadar odediginiz tutar=%d\n",ucret1);
            printf("                                    Ek ucreti giriniz=");
            scanf("%d",&ucret2);
            ucret1=ucret1+ucret2;
            kalan1=kalan1-ucret2;
           }
           if (kalan1<0){
            system("CLS");
                if(toplam1>ucret1){
                toplam2=toplam1-ucret1;}
                else if (toplam1<=ucret1){
                 toplam2=ucret1-toplam1;
                 }
            printf("                                    %d ADET ESPRESSO MACCHIATO ICIN %dTL ODEMENIZ ALINMISTIR.\n                                    GERI ODEME=%d\n                                    AFIYET OLSUN.YINE BEKLERIZ.\n\n\n\n",adet1,toplam1,toplam2);}
           else {
            system("CLS");
            printf("                                    %d ADET ESPRESSO MACCHIATO ICIN %dTL ODEMENIZ ALINMISTIR.\n                                    GERI ODEME=0\n                                    AFIYET OLSUN.YINE BEKLERIZ.\n\n\n\n",adet1,toplam1);
           }
           printf("Programi baslatmak icin herhangi bir tusa basiniz");
            bos6=getch();
           break;

           case 3: system("CLS");                                                               //DOUBLE ESPRESSO KAHVESİ İCİN 
           printf("                                    Kac adet DOUBLE ESPRESSO MACCHIATO istersiniz ?\n ");
           scanf("%d",&adet1);
           toplam1=adet1*46;
           printf("                                    Toplam odemeniz gereken tutar=%d\n",toplam1);
           printf("                                    Yatiracaginiz tutari giriniz=");
           scanf("%d",&ucret1);
           kalan1=toplam1-ucret1;
           while (kalan1>0)
           {system("CLS");
            printf("                                    ODENEN MIKTAR YETERSIZ!!!\n                                    LUTFEN ODEDIGINIZ MIKTARA ILAVE YAPINIZ\n");
            printf("                                    Toplam odemeniz gereken tutar=%d\n",toplam1);
            printf("                                    Su ana kadar odediginiz tutar=%d\n",ucret1);
            printf("                                    Ek ucreti giriniz=");
            scanf("%d",&ucret2);
            ucret1=ucret1+ucret2;
            kalan1=kalan1-ucret2;
           }
           if (kalan1<0){
            system("CLS");
                if(toplam1>ucret1){
                toplam2=toplam1-ucret1;}
                else if (toplam1<=ucret1){
                 toplam2=ucret1-toplam1;
                 }
            printf("                                    %d ADET DOUBLE ESPRESSO MACCHIATO ICIN %dTL ODEMENIZ ALINMISTIR.\n                                    GERI ODEME=%d\n                                    AFIYET OLSUN.YINE BEKLERIZ.\n\n\n\n",adet1,toplam1,toplam2);}
           else {
            system("CLS");
            printf("                                    %d ADET DOUBLE ESPRESSO MACCHIATO ICIN %dTL ODEMENIZ ALINMISTIR.\n                                    GERI ODEME=0\n                                    AFIYET OLSUN.YINE BEKLERIZ.\n\n\n\n",adet1,toplam1);
           }
           printf("Programi baslatmak icin herhangi bir tusa basiniz");
            bos7=getch();
           break; 

           case 4: system("CLS");                                                               //DOUBLE ESPRESSO KAHVESİ İCİN 
           printf("                                    Kac adet ESPRESSO istersiniz ?\n ");
           scanf("%d",&adet1);
           toplam1=adet1*33;
           printf("                                    Toplam odemeniz gereken tutar=%d\n",toplam1);
           printf("                                    Yatiracaginiz tutari giriniz=");
           scanf("%d",&ucret1);
           kalan1=toplam1-ucret1;
           while (kalan1>0)
           {system("CLS");
            printf("                                    ODENEN MIKTAR YETERSIZ!!!\n                                    LUTFEN ODEDIGINIZ MIKTARA ILAVE YAPINIZ\n");
            printf("                                    Toplam odemeniz gereken tutar=%d\n",toplam1);
            printf("                                    Su ana kadar odediginiz tutar=%d\n",ucret1);
            printf("                                    Ek ucreti giriniz=");
            scanf("%d",&ucret2);
            ucret1=ucret1+ucret2;
            kalan1=kalan1-ucret2;
           }
           if (kalan1<0){
            system("CLS");
                if(toplam1>ucret1){
                toplam2=toplam1-ucret1;}
                else if (toplam1<=ucret1){
                 toplam2=ucret1-toplam1;
                 }
            printf("                                    %d ADET ESPRESSO ICIN %dTL ODEMENIZ ALINMISTIR.\n                                    GERI ODEME=%d\n                                    AFIYET OLSUN.YINE BEKLERIZ.\n\n\n\n",adet1,toplam1,toplam2);}
           else {
            system("CLS");
            printf("                                    %d ADET ESPRESSO ICIN %dTL ODEMENIZ ALINMISTIR.\n                                    GERI ODEME=0\n                                    AFIYET OLSUN.YINE BEKLERIZ.\n\n\n\n",adet1,toplam1);
           }
           printf("Programi baslatmak icin herhangi bir tusa basiniz");
            bos8=getch();
           break;  
}break;
     case 3:system("color E0"); system("CLS");
      printf("            \n \n\n\n \n\n\n \n\n                                            MOCHA CESITLERI\n");  
      printf("                                    -------------------------------\n");
      printf("                                    1-SADE MOCHA       70 TL\n");
      printf("                                    2-CIKOLATALI MOCHA 75 TL\n");
      printf("                                    Bir secim yapiniz:");
      scanf("%d",&secim2);
           switch (secim2){
           case 1: system("CLS");                                                               //SULU TURK KAHVESİ İCİN 
           printf("                                    Kac adet SADE MOCHA istersiniz ?\n ");
           scanf("%d",&adet1);
           toplam1=adet1*70;
           printf("                                    Toplam odemeniz gereken tutar=%d\n",toplam1);
           printf("                                    Yatiracaginiz tutari giriniz=");
           scanf("%d",&ucret1);
           kalan1=toplam1-ucret1;
           while (kalan1>0)
           {system("CLS");
            printf("                                    ODENEN MIKTAR YETERSIZ!!!\n                                    LUTFEN ODEDIGINIZ MIKTARA ILAVE YAPINIZ\n");
            printf("                                    Toplam odemeniz gereken tutar=%d\n",toplam1);
            printf("                                    Su ana kadar odediginiz tutar=%d\n",ucret1);
            printf("                                    Ek ucreti giriniz=");
            scanf("%d",&ucret2);
            ucret1=ucret1+ucret2;
            kalan1=kalan1-ucret2;
           }
           if (kalan1<0){
            system("CLS");
                if(toplam1>ucret1){
                toplam2=toplam1-ucret1;}
                else if (toplam1<=ucret1){
                 toplam2=ucret1-toplam1;
                 }
            printf("                                    %d ADET SADE MOCHA ICIN %dTL ODEMENIZ ALINMISTIR.\n                                    GERI ODEME=%d\n                                    AFIYET OLSUN.YINE BEKLERIZ.\n\n\n\n",adet1,toplam1,toplam2);}
           else {
            system("CLS");
            printf("                                    %d ADET SADE MOCHA ICIN %dTL ODEMENIZ ALINMISTIR.\n                                    GERI ODEME=0\n                                    AFIYET OLSUN.YINE BEKLERIZ.\n\n\n\n",adet1,toplam1);
           }
           printf("Programi baslatmak icin herhangi bir tusa basiniz");
            bos9=getch();
           break;

           case 2: system("CLS");                                                               //DOUBLE ESPRESSO KAHVESİ İCİN 
           printf("                                    Kac adet CIKOLATALI MOCHA istersiniz ?\n ");
           scanf("%d",&adet1);
           toplam1=adet1*75;
           printf("                                    Toplam odemeniz gereken tutar=%d\n",toplam1);
           printf("                                    Yatiracaginiz tutari giriniz=");
           scanf("%d",&ucret1);
           kalan1=toplam1-ucret1;
           while (kalan1>0)
           {system("CLS");
            printf("                                    ODENEN MIKTAR YETERSIZ!!!\n                                    LUTFEN ODEDIGINIZ MIKTARA ILAVE YAPINIZ\n");
            printf("                                    Toplam odemeniz gereken tutar=%d\n",toplam1);
            printf("                                    Su ana kadar odediginiz tutar=%d\n",ucret1);
            printf("                                    Ek ucreti giriniz=");
            scanf("%d",&ucret2);
            ucret1=ucret1+ucret2;
            kalan1=kalan1-ucret2;
           }
           if (kalan1<0){
            system("CLS");
                if(toplam1>ucret1){
                toplam2=toplam1-ucret1;}
                else if (toplam1<=ucret1){
                 toplam2=ucret1-toplam1;
                 }
            printf("                                    %d ADET CIKOLATALI MOCHA ICIN %dTL ODEMENIZ ALINMISTIR.\n                                    GERI ODEME=%d\n                                    AFIYET OLSUN.YINE BEKLERIZ.\n\n\n\n",adet1,toplam1,toplam2);}
           else {
            system("CLS");
            printf("                                    %d ADET CIKOLATALI MOCHA ICIN %dTL ODEMENIZ ALINMISTIR.\n                                    GERI ODEME=0\n                                    AFIYET OLSUN.YINE BEKLERIZ.\n\n\n\n",adet1,toplam1);
           }
           printf("Programi baslatmak icin herhangi bir tusa basiniz");
           bos10=getch();
           break;
}break;
        case 4:system("color E0"); system("CLS");
        printf("            \n \n\n\n \n\n\n \n\n                                            Kac adet AMERICANO istersiniz ?\n                                    = ");
           scanf("%d",&adet1);
           toplam1=adet1*47;
           printf("                                    Toplam odemeniz gereken tutar=%d\n",toplam1);
           printf("                                    Yatiracaginiz tutari giriniz=");
           scanf("%d",&ucret1);
           kalan1=toplam1-ucret1;
           while (kalan1>0)
           {system("CLS");
            printf("                                    ODENEN MIKTAR YETERSIZ!!!\n                                    LUTFEN ODEDIGINIZ MIKTARA ILAVE YAPINIZ\n");
            printf("                                    Toplam odemeniz gereken tutar=%d\n",toplam1);
            printf("                                    Su ana kadar odediginiz tutar=%d\n",ucret1);
            printf("                                    Ek ucreti giriniz=");
            scanf("%d",&ucret2);
            ucret1=ucret1+ucret2;
            kalan1=kalan1-ucret2;
           }
           if (kalan1<0){
            system("CLS");
                if(toplam1>ucret1){
                toplam2=toplam1-ucret1;}
                else if (toplam1<=ucret1){
                 toplam2=ucret1-toplam1;
                 }
            printf("                                    %d ADET AMERICANO ICIN %dTL ODEMENIZ ALINMISTIR.\n                                    GERI ODEME=%d\n                                    AFIYET OLSUN.YINE BEKLERIZ.\n\n\n\n",adet1,toplam1,toplam2);}
           else {
            system("CLS");
            printf("                                    %d ADET AMERICANO ICIN %dTL ODEMENIZ ALINMISTIR.\n                                    GERI ODEME=0\n                                    AFIYET OLSUN.YINE BEKLERIZ.\n\n\n\n",adet1,toplam1);
           }
           printf("Programi baslatmak icin herhangi bir tusa basiniz");
            bos11=getch();
           break;

           case 5:system("color E0"); system("CLS");
        printf("            \n \n\n\n \n\n\n \n\n                                            Kac adet CAPPUCINO istersiniz ?\n                                    = ");
           scanf("%d",&adet1);
           toplam1=adet1*52;
           printf("                                    Toplam odemeniz gereken tutar=%d\n",toplam1);
           printf("                                    Yatiracaginiz tutari giriniz=");
           scanf("%d",&ucret1);
           kalan1=toplam1-ucret1;
           while (kalan1>0)
           {system("CLS");
            printf("                                    ODENEN MIKTAR YETERSIZ!!!\n                                    LUTFEN ODEDIGINIZ MIKTARA ILAVE YAPINIZ\n");
            printf("                                    Toplam odemeniz gereken tutar=%d\n",toplam1);
            printf("                                    Su ana kadar odediginiz tutar=%d\n",ucret1);
            printf("                                    Ek ucreti giriniz=");
            scanf("%d",&ucret2);
            ucret1=ucret1+ucret2;
            kalan1=kalan1-ucret2;
           }
           if (kalan1<0){
            system("CLS");
                if(toplam1>ucret1){
                toplam2=toplam1-ucret1;}
                else if (toplam1<=ucret1){
                 toplam2=ucret1-toplam1;
                 }
            printf("                                    %d ADET CAPPUCINO ICIN %dTL ODEMENIZ ALINMISTIR.\n                                    GERI ODEME=%d\n                                    AFIYET OLSUN.YINE BEKLERIZ.\n\n\n\n",adet1,toplam1,toplam2);}
           else {
            system("CLS");
            printf("                                    %d ADET CAPPUCINO ICIN %dTL ODEMENIZ ALINMISTIR.\n                                    GERI ODEME=0\n                                    AFIYET OLSUN.YINE BEKLERIZ.\n\n\n\n",adet1,toplam1);
           }
           printf("Programi baslatmak icin herhangi bir tusa basiniz");
            bos12=getch();
           break;

           case 6:system("color E0"); system("CLS");
        printf("            \n \n\n\n \n\n\n \n\n                                            Kac adet CAFFE LATTE istersiniz ?\n                                    = ");
           scanf("%d",&adet1);
           toplam1=adet1*54;
           printf("                                    Toplam odemeniz gereken tutar=%d\n",toplam1);
           printf("                                    Yatiracaginiz tutari giriniz=");
           scanf("%d",&ucret1);
           kalan1=toplam1-ucret1;
           while (kalan1>0)
           {system("CLS");
            printf("                                    ODENEN MIKTAR YETERSIZ!!!\n                                    LUTFEN ODEDIGINIZ MIKTARA ILAVE YAPINIZ\n");
            printf("                                    Toplam odemeniz gereken tutar=%d\n",toplam1);
            printf("                                    Su ana kadar odediginiz tutar=%d\n",ucret1);
            printf("                                    Ek ucreti giriniz=");
            scanf("%d",&ucret2);
            ucret1=ucret1+ucret2;
            kalan1=kalan1-ucret2;
           }
           if (kalan1<0){
            system("CLS");
                if(toplam1>ucret1){
                toplam2=toplam1-ucret1;}
                else if (toplam1<=ucret1){
                 toplam2=ucret1-toplam1;
                 }
            printf("                                    %d ADET CAFFE LATTE ICIN %dTL ODEMENIZ ALINMISTIR.\n                                    GERI ODEME=%d\n                                    AFIYET OLSUN.YINE BEKLERIZ.\n\n\n\n",adet1,toplam1,toplam2);}
           else {
            system("CLS");
            printf("                                    %d ADET CAFFE LATTE ICIN %dTL ODEMENIZ ALINMISTIR.\n                                    GERI ODEME=0\n                                    AFIYET OLSUN.YINE BEKLERIZ.\n\n\n\n",adet1,toplam1);
           }
           printf("Programi baslatmak icin herhangi bir tusa basiniz");
            bos13=getch();
           break;

           case 7:system("color E0"); system("CLS");
      printf("            \n \n\n\n \n\n\n \n\n                                            SICAK CIKOLATA CESITLERI\n");  
      printf("                                    -------------------------------\n");
      printf("                                    1-KAHVELI SICAK CIKOLATA 69 TL\n");
      printf("                                    2-BEYAZ SICAK CIKOLATA   73 TL\n");
      printf("                                    Bir secim yapiniz:");
      scanf("%d",&secim2);
           switch (secim2){
           case 1: system("CLS");                                                               //SULU TURK KAHVESİ İCİN 
           printf("                                    Kac adet KAHVELI SICAK CIKOLATA istersiniz ?\n ");
           scanf("%d",&adet1);
           toplam1=adet1*69;
           printf("                                    Toplam odemeniz gereken tutar=%d\n",toplam1);
           printf("                                    Yatiracaginiz tutari giriniz=");
           scanf("%d",&ucret1);
           kalan1=toplam1-ucret1;
           while (kalan1>0)
           {system("CLS");
            printf("                                    ODENEN MIKTAR YETERSIZ!!!\n                                    LUTFEN ODEDIGINIZ MIKTARA ILAVE YAPINIZ\n");
            printf("                                    Toplam odemeniz gereken tutar=%d\n",toplam1);
            printf("                                    Su ana kadar odediginiz tutar=%d\n",ucret1);
            printf("                                    Ek ucreti giriniz=");
            scanf("%d",&ucret2);
            ucret1=ucret1+ucret2;
            kalan1=kalan1-ucret2;
           }
           if (kalan1<0){
            system("CLS");
                if(toplam1>ucret1){
                toplam2=toplam1-ucret1;}
                else if (toplam1<=ucret1){
                 toplam2=ucret1-toplam1;
                 }
            printf("                                    %d ADET KAHVELI SICAK CIKOLATA ICIN %dTL ODEMENIZ ALINMISTIR.\n                                    GERI ODEME=%d\n                                    AFIYET OLSUN.YINE BEKLERIZ.\n\n\n\n",adet1,toplam1,toplam2);}
           else {
            system("CLS");
            printf("                                    %d ADET KAHVELI SICAK CIKOLATA ICIN %dTL ODEMENIZ ALINMISTIR.\n                                    GERI ODEME=0\n                                    AFIYET OLSUN.YINE BEKLERIZ.\n\n\n\n",adet1,toplam1);
           }
           printf("Programi baslatmak icin herhangi bir tusa basiniz");
            bos14=getch();
           break;

           case 2: system("CLS");                                                               //DOUBLE ESPRESSO KAHVESİ İCİN 
           printf("                                    Kac adet BEYAZ SICAK CIKOLATA istersiniz ?\n ");
           scanf("%d",&adet1);
           toplam1=adet1*73;
           printf("                                    Toplam odemeniz gereken tutar=%d\n",toplam1);
           printf("                                    Yatiracaginiz tutari giriniz=");
           scanf("%d",&ucret1);
           kalan1=toplam1-ucret1;
           while (kalan1>0)
           {system("CLS");
            printf("                                    ODENEN MIKTAR YETERSIZ!!!\n                                    LUTFEN ODEDIGINIZ MIKTARA ILAVE YAPINIZ\n");
            printf("                                    Toplam odemeniz gereken tutar=%d\n",toplam1);
            printf("                                    Su ana kadar odediginiz tutar=%d\n",ucret1);
            printf("                                    Ek ucreti giriniz=");
            scanf("%d",&ucret2);
            ucret1=ucret1+ucret2;
            kalan1=kalan1-ucret2;
           }
           if (kalan1<0){
            system("CLS");
                if(toplam1>ucret1){
                toplam2=toplam1-ucret1;}
                else if (toplam1<=ucret1){
                 toplam2=ucret1-toplam1;
                 }
            printf("                                    %d ADET BEYAZ SICAK CIKOLATA ICIN %dTL ODEMENIZ ALINMISTIR.\n                                    GERI ODEME=%d\n                                    AFIYET OLSUN.YINE BEKLERIZ.\n\n\n\n",adet1,toplam1,toplam2);}
           else {
            system("CLS");
            printf("                                    %d ADET BEYAZ SICAK CIKOLATA ICIN %dTL ODEMENIZ ALINMISTIR.\n                                    GERI ODEME=0\n                                    AFIYET OLSUN.YINE BEKLERIZ.\n\n\n\n",adet1,toplam1);
           }
           printf("Programi baslatmak icin herhangi bir tusa basiniz");
            bos15=getch();
           break;

      


        
   
}break;
      case 8:system("color E0"); system("CLS");
      printf("            \n \n\n\n \n\n\n \n\n                                            SALEP CESITLERI\n");  
      printf("                                    -------------------------------\n");
      printf("                                    1-SEKERLI (Seker ucretsiz)\n");
      printf("                                    2-SEKERSIZ\n");
      printf("Bir secim yapiniz:");
      scanf("%d",&secim2);
           switch (secim2){
           case 1: system("CLS");                                                               //SULU TURK KAHVESİ İCİN 
           printf("                                    Kac adet SEKERLI SALEP istersiniz ?\n ");
           scanf("%d",&adet1);
           toplam1=adet1*73;
           printf("                                    Toplam odemeniz gereken tutar=%d\n",toplam1);
           printf("                                    Yatiracaginiz tutari giriniz=");
           scanf("%d",&ucret1);
           kalan1=toplam1-ucret1;
           while (kalan1>0)
           {system("CLS");
            printf("                                    ODENEN MIKTAR YETERSIZ!!!\nLUTFEN ODEDIGINIZ                                     MIKTARA ILAVE YAPINIZ\n");
            printf("                                    Toplam odemeniz gereken tutar=%d\n",toplam1);
            printf("                                    Su ana kadar odediginiz tutar=%d\n",ucret1);
            printf("                                    Ek ucreti giriniz=");
            scanf("%d",&ucret2);
            ucret1=ucret1+ucret2;
            kalan1=kalan1-ucret2;
           }
           if (kalan1<0){
            system("CLS");
                if(toplam1>ucret1){
                toplam2=toplam1-ucret1;}
                else if (toplam1<=ucret1){
                 toplam2=ucret1-toplam1;
                 }
            printf("                                    %d ADET SEKERLI SALEP ICIN %dTL ODEMENIZ ALINMISTIR.\n                                    GERI ODEME=%d\n                                    AFIYET OLSUN.YINE BEKLERIZ.\n\n\n\n",adet1,toplam1,toplam2);}
           else {
            system("CLS");
            printf("                                    %d ADET SEKERLI SALEP ICIN %dTL ODEMENIZ ALINMISTIR.\n                                    GERI ODEME=0\n                                    AFIYET OLSUN.YINE BEKLERIZ.\n\n\n\n",adet1,toplam1);
           }
           printf("Programi baslatmak icin herhangi bir tusa basiniz");
            bos16=getch();
           break;

           case 2: system("CLS");                                                               //DOUBLE ESPRESSO KAHVESİ İCİN 
           printf("                                    Kac adet SEKERSIZ SALEP istersiniz ?\n ");
           scanf("%d",&adet1);
           toplam1=adet1*73;
           printf("                                    Toplam odemeniz gereken tutar=%d\n",toplam1);
           printf("                                    Yatiracaginiz tutari giriniz=");
           scanf("%d",&ucret1);
           kalan1=toplam1-ucret1;
           while (kalan1>0)
           {system("CLS");
            printf("                                    ODENEN MIKTAR YETERSIZ!!!\n                                    LUTFEN ODEDIGINIZ MIKTARA ILAVE YAPINIZ\n");
            printf("                                    Toplam odemeniz gereken tutar=%d\n",toplam1);
            printf("                                    Su ana kadar odediginiz tutar=%d\n",ucret1);
            printf("                                    Ek ucreti giriniz=");
            scanf("%d",&ucret2);
            ucret1=ucret1+ucret2;
            kalan1=kalan1-ucret2;
           }
           if (kalan1<0){
            system("CLS");
                if(toplam1>ucret1){
                toplam2=toplam1-ucret1;}
                else if (toplam1<=ucret1){
                 toplam2=ucret1-toplam1;
                 }
            printf("                                    %d ADET SEKERSIZ SALEP ICIN %dTL ODEMENIZ ALINMISTIR.\n                                    GERI ODEME=%d\n                                    AFIYET OLSUN.YINE BEKLERIZ.\n\n\n\n",adet1,toplam1,toplam2);}
           else {
            system("CLS");
            printf("                                    %d ADET SEKERSIZ SALEP ICIN %dTL ODEMENIZ ALINMISTIR.\n                                    GERI ODEME=0\n                                    AFIYET OLSUN.YINE BEKLERIZ.\n\n\n\n",adet1,toplam1);
           }
           printf("Programi baslatmak icin herhangi bir tusa basiniz");
            bos17=getch();
           break;
}break;
}}}while(1);
   return 0;
   }