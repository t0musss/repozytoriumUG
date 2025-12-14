#include <stdio.h>
#include <stdlib.h>
/** zad1
int rekurencja(int i,int licznik,int wynik){
    if(licznik<=i&&licznik>0){
    printf("%d\n",wynik);
    licznik++;
    wynik*=licznik;

    rekurencja(i,licznik,wynik);
    }else printf("%d",0);

}
**/
/** zad2
int euklides(int a,int b,int r){
if(a>=b){
if(b!=0){
r = a%b;
a = b;
b = r;
euklides(a,b,r);
if(b==0){
printf("twoj wynik to: %d",a);
}
}
}

}
**/
/**zad3
int calkowite(int a,int b){
if(b<a){
++b;

if(b==(int)b){
printf("%d,",b);
calkowite(a,b);
}
}

}
**/
/**zad4
int fibonacci(int a,int b,int c,int koniec){
    if(a>=0&&b>=0&&c<koniec){
       printf("%d ",c);
        c = a+b;
        a=b;
        b=c;


    fibonacci(a,b,c,koniec);
    }


}
**/
int binarne(int a,int b){

}
int main()
{
    /** zad1

    int licznik=1;
    int wynik=1;
    int n=1;

    scanf("%d",&n);
    rekurencja(n,licznik,wynik);

    **/
    /** zad2
    int a,b,r=1;
    scanf("%d %d",&a,&b);
    printf("%d %d",a,b);

    euklides(a,b,r);

    **/
    /**zad3
    int a,b=0;
    scanf("%d",&a);
    calkowite(a,b);
    **/
    /**zad4
    int a,b,c;
    a=0;
    b=1;
    c=0;
    int koniec=0;
    printf("Podaj do jak duzej liczby chcesz ciag fibonacciego ");
    scanf("%d",&koniec);
    fibonacci(a,b,c,koniec);
    **/
    return 0;
}
