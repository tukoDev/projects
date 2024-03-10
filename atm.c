#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
int bakiye=1000;
void flush_stdin() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}
void login(){
    int pass;
    char name[100];
    printf("TukoBank Atm'ye Hosgeldiniz\n");
    do{
        printf("Kullanici adinizi giriniz[User]:");
        scanf("%s",name);
        flush_stdin();
        printf("Sifrenizi giriniz[1234]:");
        scanf("%d",&pass);
        flush_stdin();
        printf("Lutfen bekleyiniz...\n");
        sleep(2);
        system("cls");
        if(strcmp(name,"User")!=0 || pass!=1234){
            system("cls");  
            printf("Kullanici adi veya sifre yanlis\nLUTFEN BIRKAC SANIYE SONRA TEKRAR DENEYINIZ...\n");
            sleep(3);
            system("CLS");
        }
    }
    while(strcmp(name,"User")!=0 || pass!=1234);
    printf("Giris basarili\nyonlendiriliyorsunuz lutfen bekleyiniz...");
    sleep(2);
    system("cls");
}
void page1(){
    int secim;
    int tutar;
    printf("Bakiyeniz=%dTL\n\n\n",bakiye);
    printf("***Islemler***\n\n");
    printf("1-)Para Cekme\t\t\t\t\t\t\t\t");
    printf("2-)Havale/Eft\n");
    printf("3-)Para Yatirma\t\t\t\t\t\t\t\t");
    printf("4-)Kart iade\n\n");
    printf("Seciminizi yapiniz:");
    scanf("%d",&secim);
    switch(secim)
    {
        case 1:
            sleep(1);
            system("cls");
            printf("Bakiye=%dTL\n\n\n",bakiye);
            printf("Cekmek istediginiz tutari giriniz:");
            scanf("%d",&tutar);
            if(bakiye>=tutar){
                bakiye-=tutar;
                printf("Kartinizi aliniz...\n");
                sleep(3);
                printf("Islem basarili\n");
                printf("Kalan bakiyeniz=%dTL\n",bakiye);
                printf("Cikis yapiliyor...");
                sleep(2);
                system("cls");
                break;
            }
            else{
                printf("Bakiyeniz yetersiz islem gerceklestirilemedi\nLutfen tekrar deneyiniz...\n");
                sleep(3);
                system("cls");
                page1();
            }
        case 2:
            int iban;
            sleep(1);
            system("cls");
            printf("Bakiye=%dTL\n\n\n",bakiye);
            printf("Havale/Eft gonderilecek Iban Numarasini giriniz:");
            scanf("%d",&iban);
            printf("\nGondermek istediginiz tutari giriniz:");
            scanf("%d",&tutar);
            if(bakiye>=tutar){                
            bakiye-=tutar;
            printf("Islem basarili\n");
            printf("Kalan bakiyeniz=%dTL\n",bakiye);
            printf("Cikis yapiliyor...");
            sleep(2);
            break;
            }
            else{
            printf("Bakiyeniz yetersiz islem gerceklestirilemedi\nLutfen tekrar deneyiniz...\n");
            sleep(3);
            system("cls");
            page1();
            }   
        case 3:
            sleep(1);
            system("cls");
            printf("Bakiye=%dTL\n\n\n",bakiye);
            printf("Yatirmak istediginiz tutari giriniz:\n");
            scanf("%d",&tutar);
            bakiye+=tutar;
            printf("Islem basarili\n");
            printf("Yeni bakiyeniz=%dTL\n",bakiye);
            printf("Anasayfaya yonlendiriliyorsunuz...");
            sleep(2);
            system("cls");
            page1();
        case 4:
            system("cls");
            printf("Cikis yapiliyor...\n");
            sleep(2);
            system("cls");
            printf("Kartinizi aliniz...\n");
            break;
} 
}
int main(){
    system("color 47");
    login();
    page1();
}
