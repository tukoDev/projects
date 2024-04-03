#include <stdlib.h>
#include <stdio.h>
void binarydonusum(int);
int asalbul(int,int);
int ikisayicarp(int,int);
int ortakbolen(int,int);
int ekok(int,int);

int operatorsecim()
{

    char secim;
    int say1,say2;
    printf("-----------------------------------------------\nBir operator seciniz..\n");
    getchar();
    scanf(" %c", &secim);
    switch(secim)
    {
        case 'a':
        printf("Bir sayi giriniz:");
        scanf("%d",&say1);
        asalbul(say1,say1/2);
        return operatorsecim();
        


        case 'b':
        printf("Bir sayi giriniz:");
        scanf("%d",&say1);
        binarydonusum(say1);
        printf("\n");
        return operatorsecim();


        case 'c':
        printf("Iki sayi giriniz:");
        scanf("%d%d",&say1,&say2);
        printf("%d\n",ikisayicarp(say1,say2));
        return operatorsecim();
        

        case 'd':
        printf("Iki sayi giriniz:");
        scanf("%d%d",&say1,&say2);
        printf("%d\n",ortakbolen(say1,say2));
        return operatorsecim();
        

        case 'e':
        printf("Iki sayi giriniz:");
        scanf("%d%d",&say1,&say2);
        printf("%d\n",ekok(say1,say2));
        return operatorsecim();

        case 'x':
        printf("Programdan cikiliyor...");
        exit(0);


        default:
        printf("Gecersiz secim. Tekrar deneyin.\n");
        operatorsecim();
    }
}

int asalbul(int say1,int say2)
{
    if(say1<2)
    {
        printf("Asal degildir\n");
        return operatorsecim();
    }
    else if(say2==1)
    {
        printf("Asaldir\n");
        return operatorsecim();
    }
    //kendisinin yarisina kadar olan sayilarla bolumunden kalanın 0 olmasinin kontrolu
    else if(say1%say2==0)
    {
        printf("Asal degildir\n");
        return operatorsecim();
    }
     return asalbul(say1,say2-1);
        
}
void binarydonusum(int say1){
    if(say1==0)
    {
        return;
    }
    //0 olana kadar 2 ye boler ve kalanlari yazdirir
    binarydonusum(say1/2);
    printf("%d ",say1%2);
}
int ikisayicarp(int say1,int say2)
{
    if(say2==0)
    {
        return 0;
    }
    //birinci sayiyi diger sayi kadar toplar
    return say1+ikisayicarp(say1,say2-1);
}

int ortakbolen(int say1, int say2) {
    if (say2 == 0)
        return say1;
    else
    //ikinci sayi 0 olana kadar ikinci sayiyi birinci sayiya boler ve kalanini alir
        return ortakbolen(say2, say1%say2);
}
int ekok(int say1, int say2) {
    //ekok bulmak icin iki sayinin carpimini ortak bolenlerine boler
    return (say1 * say2) / ortakbolen(say1, say2);
}
int main(){
    int say1,say2;
    char secim;
    printf("Bir Operator Seciniz..\nasal sayi(a)\nbinary donusum(b)\ngirilen iki sayiyi carp(c)\ngirilen iki sayinin ortak bolenlerinin en buyugunu bul(d)\n");
    printf("girilen iki sayinin en kucuk ortak katini bul(e)\ncikis(x)\n");
    scanf(" %c",&secim);
    switch(secim)
    {
        case 'a':
        printf("Bir sayi giriniz:");
        scanf("%d",&say1);
        asalbul(say1,say1/2);
        break;

        case 'b':
        printf("Bir sayi giriniz:");
        scanf("%d",&say1);
        binarydonusum(say1);
        printf("\n");
        return operatorsecim();
        break;


        case 'c':
        printf("Iki sayi giriniz:");
        scanf("%d%d",&say1,&say2);
        printf("%d\n",ikisayicarp(say1,say2));
        return operatorsecim();
        break;

        case 'd':
        printf("Iki sayi giriniz:");
        scanf("%d%d",&say1,&say2);
        printf("%d\n",ortakbolen(say1,say2));
        return operatorsecim();
        break;

        case 'e':
        printf("Iki sayi giriniz:");
        scanf("%d%d",&say1,&say2);
        printf("%d\n",ekok(say1,say2));
        return operatorsecim();
        break;

        case 'x':
        printf("Programdan cikiliyor...");  
        break;

        default:
        printf("Gecersiz secim. Tekrar deneyin.\n");
        return operatorsecim();
    }
    
}