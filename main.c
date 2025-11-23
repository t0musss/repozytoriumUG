#include <stdio.h>
#include <stdlib.h>


int main()
{
    /** zad1
    int n=0;
    int liczby=0;
    int suma=0;
    scanf("%d", &n);

    for(int i=0;i<=n;i++){
    liczby = i*i;
    suma += liczby;
    }

    printf("%d",suma);

    **/

    /**zad2

    int a=0;
    int b=0;
    int wynik =0;

    scanf("%d",&a);
    scanf("%d",&b);

    for(int i=0;i<b;i++){
    wynik = a*a;
    }

    printf("%d",wynik);

    **/

    /**zad3

    int a=0;
    int b=0;
    int c=1;
    int wynik = 1;
    scanf("%d",&a);
    scanf("%d",&b);


    if(a<b){
    for(int i=0;i<=c;i++){

    wynik*=a;

    if(wynik>b){
    printf("a jest wieksze od b gdy jest spotegowane do c, ktore jest rowne %d", c);
        return;
    }
        ++c;
    }
    }
    printf("%d",wynik);

    **/

    /**zad4


    int n=0;
    int tab[5];

    for(int i=0;i<5;i++){
    scanf("%d",&n);
    tab[i]=n*n;
    printf("%d\n",tab[i]);
    }
    printf("twoja tablica to: ");
    for(int j=0;j<5;j++){
    printf(" %d",tab[j]);
    }

    **/

    /**zad5

    int n=0;
    printf("Podaj ile liczb chcesz dodac do tablicy");
    scanf("%d",&n);
    int a=0;

    int tab[n];
    printf("Teraz podaj liczby ktore chcesz dodac do tablicy");
    for(int i=0;i<n;i++){
    scanf("%d",&a);
        tab[i]=a;
    }
    for(int j=0;j<n;j++){
        printf("%d",tab[j]);
    }

    **/

    /**zad7

    int n,sprawdz=0;
    int counter=2;
    printf("Podaj liczbe a ja sprawdze czy jest liczba pierwsza");


    for(int i=2;i<=counter;i++){
        scanf("%d",&n);
        counter++;

    if(n>1&&n%1==0&&n%n==0){
    sprawdz++;
        if(n%i==0){

        }

    }
    }

    **/

    return 0;
}
