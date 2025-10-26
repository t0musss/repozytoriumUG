#include <stdio.h>

int main()
{
            //zad1
    //printf("Hello world!\n");
    //zad2
    int a,b;
    printf("Podaj dwie liczby\n");
    scanf("%i", &a);
    scanf("%i", &b);
    printf("Dodawanie: %d",(a+b));
    printf("\nOdejmowanie: %d", (a-b));
    printf("\nMnozenie: %d", (a*b));
    printf("\nDzielenie: %d", (a/b));
    printf("\nReszta z dzielenia: %d", (a%b));
    //zad3
    if(a>b){
    printf("\nWiększa jest liczba A = %d",a);
    }else{
    printf("\nWiększa jest liczba B = %d",b);
    }
    //zad4
    int c;
    printf("\nPodaj jeszcze jedna liczbe\n");
    scanf("%i", &c);
        if(a>b && a>c){
            printf("Najwieksza liczba to A = %d", a);
        }else if(b>a && b>c){
            printf("Najwieksza liczba to B = %d", b);
        }else if(c>a && c>b){
            printf("Najwieksza liczba to C = %d", c);
    }
    //zad5
    printf("\nPodaj mi kod ASCII, a ja ci powiem czy to litera alfabetu!");
    int kod;
    scanf("%i",&kod);
    if(kod >=97 && kod<=122){
    printf("Tak! Kod ktory podales odpowiada za litere alfabetu!");
    }else{
    printf("Nie, kod ktory podales nie odpowiada za litere alfabetu");
    }
    //zad6
    printf("\nPodaj mi rok a ja ci powiem czy jest on przestepny");
    int rok;
    scanf("%i", &rok);
    if(rok%4==0 && rok%100!=0 && rok%400==0 || rok%400==0 && rok%100==0){
    printf("Podany rok jest przestepny");
    }else{
    printf("Podany rok nie jest przestepny");
    }
    //zad7
    printf("\nPodaj mi dzien,miesiac i rok");
    int d,m,r;
    int status=0;
    scanf("%i",&d);
    scanf("%i",&m);
    scanf("%i",&r);
    if((m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)&& d>=1 && d<=31){
    status++;
    }
    else if(m==2 && (rok%4==0 && rok%100!=0 && rok%400==0 || rok%400==0 && rok%100==0)){
    if(d>=1 && d<=29){
    status++;
    }
    }

    else if(d>=1 && d<=28 && (m==2 && (rok%4==0 && rok%100!=0 && rok%400==0 || rok%400==0 && rok%100==0))){
    status++;
    }
    if((m==4 || m==6 || m==9 || m==11) && d>=1 && d<=30){
    status++;
    }
    printf("%i",status);
    if(status==1){
    printf("Podane liczby tworza poprawna date!");
    }else{
    printf("Podane liczby tworza niepoprawna date...");
    }
    //zad9
    printf("Podaj dwie pary liczb jako przeciwlegle wierzcholki prostokatata");
    int w1,w2,w3,w4;
    scanf("%i",&w1);
    scanf("%i",&w2);
    scanf("%i",&w3);
    scanf("%i",&w4);

}
