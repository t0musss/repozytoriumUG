#include <stdio.h>
#include <stdlib.h>

int main()
{
    /** zad1

    printf("INSTRUKCJA: \n Podaj jakie chcesz wykonac dzialanie\n1-dodawanie\n2-odejmowanie\n3-mnozenie\n4-dzielenie\n");

    int dodawanie(a,b){
    printf("%i",a+b);
    }
    int odejmowanie(a,b){
    printf("%i",a-b);
    }
    int mnozenie(a,b){
    printf("%i",a*b);
    }
    int dzielenie(a,b){
    printf("%i",a/b);
    }
    char znak;
    scanf("%i",&znak);
    printf("Teraz podaj 2 liczby A oraz B aby wykonac dzialanie");
    int a=0,b=0;
    scanf("%i %i",&a,&b);

    switch(znak){
        case 1:
    dodawanie(a,b);
    break;
        case 2:
    odejmowanie(a,b);
    break;
        case 3:
    mnozenie(a,b);
    break;
        case 4:
    dzielenie(a,b);
    break;
    }

    **/
    /** zad2
    int funkcja(a,b){
    if(a==b){
    printf("1");
    }else{
    printf("0");
    }
    }

    char a,b;
    printf("Podaj 2 znaki a ja sprawdze czy sa takie same!\n");
    scanf("%c %c",&a,&b);
    funkcja(a,b);

    **/
    /** zad3
    char ktora(char s[50],int i){
        printf("%c",s[i-1]);
    }
    printf("Podaj napis oraz ktora litere z niego ci wywolac");
    char napis[50];
    int ity=0;
    scanf("%s %i",&napis,&ity);

    ktora(napis,ity);
    **/



    return 0;
}
