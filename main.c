#include <stdio.h>
#include <stdlib.h>
int n=0;
    char input;
    int znak;
    int liczba;
    int suma1=0;
    int znaczek;

int main()
{


    int tab[20];

    while(1){

    printf("Wybierz opcje\n");
    printf("e - koniec programu\n");
    printf("w - wypisanie tablicy\n");
    printf("d - dodanie elementu\n");
    printf("D - dodanie elementu v2\n");
    printf("u - usuwanie elementu\n");
    printf("s - sumowanie elementow\n");
    printf("r - wyswietlanie listy\n");
    printf("R - wyswietlanie listy od tylu\n");

    scanf("%c",&input);

    switch(input){

    case 'e':
        printf("Koncze dzialanie!\n");
        return;
        break;

    case 'w':
        if(n==0){
        printf("Tablica jest pusta!\n");
        }else{
        wypisz(tab);
        }
        break;

    case 'd':
    sprawdzidodaj(tab);
        break;

    case 'D':
    sprawdzidodaj(tab);
        break;

    case 'u':
    if(n==0){
    printf("Tablica jest pusta!\n");
    }else{
    usun(tab);
    }
    break;

    case 's':
    if(n==0){
    printf("Tablica jest pusta!");
    }else{suma(tab);}
    break;

    case 'r':
    wywolaj(tab);
    break;

    case 'R':
    wyw(tab);
    break;

    default:
    printf("Bledny wybor!");
    break;
    }

    }

}
void wypisz(char tab[20]){
for(int i=0;i<n;i++){
printf("%d ",tab[i]);
}
}

void sprawdzidodaj(char tab[20]){
if(n>=100){
printf("Brak miejsca w tablicy!\n");
}else{
printf("Podaj znak");
scanf("%d",&znak);
tab[n]=znak;
n++;
}
}

void usun(char tab[20]){
printf("Podaj liczbe");
scanf("%d",&liczba);
for(int i=0;i<n;i++){
if(tab[i]==liczba){
    tab[n]=tab[n-1];
    n--;
}
}
}
int suma(char tab[20]){
for(int i=0;i<n;i++){
suma1 += tab[i];

}
printf("Suma wynosi: %d\n",suma1);
}
void wywolaj(char tab[20]){
printf("Podaj znak k");
scanf("%d",&znaczek);
        for(int i=0;i<n;i++){
            printf("%d\n",tab[i]);
        }
    }
void wyw(char tab[20]){
printf("Podaj znak k");
scanf("%d",&znaczek);
for(int i=n-1;i>=0;i--){
            printf("%d\n",tab[i]);
        }
}

