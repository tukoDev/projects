#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#define MAX 100

char* my_strstr(char* str1, char* str2)                                         
{
    int uzunlukstr1=0,uzunlukstr2=0,x=1,i=0,j=0;
    for(i=0;str1[i]!='\0';i++){// metinlerin uzunlugunu bulur
        uzunlukstr1++;
    }
    for(i=0;str2[i]!='\0';i++){
        uzunlukstr2++;
}
    for(i=0;str1[i]!='\0';i++)
    {
         str1[i]=str2[0];                           
         while(str2[x]!='\0' && str1[i+x]==str2[x])//str2 sonuna kadar indisler eşit mi diye karsilastirir
         {
               x++;
         }
            if(x==uzunlukstr2){
                return &str1[i];
            }
    }
            return 0;

}
int my_strlen(char* str)
{   
    int uzunlukstr=0;
    for(int j=0;str[j]!='\0';j++){//metin sonuna kadar artirarak sayar
        uzunlukstr++;
    }
    return printf("Metin uzunlugu=%d\n",uzunlukstr);
}     
char* my_strchr(char* str, char ch)//strchr ile aynı str içerisinde ch karakterinin ilk goruldugu yeri ana fonksiyona gonderir ve ekrana yazdrırır
{
    char *ptr = str;
    int i = 0;
    while (*str!=ch){           //artırarak strde ch arar buldugunda if ile ch ve sonrasını dondurur 
        ++str;
        ++i;
    }
        if (*str==ch) {
        return ptr + i;
        } else {
      return 0;
  }
    }
bool my_strcmp(char* str1, char* str2)  
{       for(int i=0;str1[i]!='\0'; i++) {   //metinleri indis indis karsilastirir
        if(str1[i]!=str2[i]) {
            printf("Metinler ayni degil.\n");
            return false;
        }
    }
    printf("Metinler ayni.\n");
    return true;
    
}

int main(){
    do {
    int secim;
    char str1[MAX];
    char str2[MAX];
    printf("Asagidaki fonksiyonlardan birini seciniz\n(1)strstr(1. metin icerisinde 2. metini arar)\n(2)strlen(metinin karakter sayisini bulur)\n(3)strchr(metin icerisinde girilen karakterin ilk goruldugu yeri yazar)\n(4)strcmp(2 metini karsilastirir)\n(5)Cikis\nSeciminiz:");
    
    scanf("%d",&secim);
    switch(secim)
    {
        case 1:
        printf("Metini giriniz:\n");
        getchar();
        gets(str1);
        printf("Aranacak metni giriniz:\n");
        gets(str2);
        char *ptr=my_strstr(str1,str2);
        if(ptr!=NULL)
        {
            printf("%s\n",ptr);
        }
        else{
            printf("NULL\n");
        }
        printf("Programi yeniden baslatmak icin bir tusa basin.\n");
        getch();
        system("cls");
        break;

        case 2:
        printf("Metin giriniz:\n");
        getchar();
        gets(str1);
        my_strlen(str1);
        printf("Programi yeniden baslatmak icin bir tusa basin.\n");
        getch();
        system("cls");
        break;

        case 3:
        printf("Metin girin:\n");
        getchar();
        gets(str1);
        char ch;
        printf("Aranicak karakteri giriniz:\n");
        scanf("%c",&ch);
        char *gtr=my_strchr(str1,ch);
        if(ptr!=NULL){
            printf("%s\n",gtr);
        }
        else{
            printf("NULL\n");
        }
        printf("Programi yeniden baslatmak icin bir tusa basin.\n");
        getch();
        system("cls");
        break;

        case 4:
        printf("1.Metni giriniz:\n");
        getchar();
        gets(str1);
        printf("2.Metini giriniz:\n");
        gets(str2);
        my_strcmp(str1,str2);
        printf("Programi yeniden baslatmak icin bir tusa basin.\n");
        getch();
        system("cls");
        break;

        case 5:
        system("cls");
        printf("Cikis yapiliyor...");
        sleep(2);
        return 0;
        break;
        
        default:
        printf("Yanlis tuslama yaptiniz.\nProgrami yeniden baslatmak icin bir tusa basin.\n");
        getch();
        system("cls");
        break;
    }
        }
    while(1);
    
    return 0;
}
