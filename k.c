#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// ========== DEKLARACJE GLOBALNE ==========
#define MAX_SIZE 20
int tablica[MAX_SIZE];  // (1 punkt) Tablica globalna dla 20 liczb

// ========== DEKLARACJE FUNKCJI ==========
void wypisz_tablice(int n);
void dodaj_znak(int *n);
void dodaj_liczbe(int *n);
void usun_wystapienia(int *n);
int suma_tablicy(int n);
void wypisz_trojkat(int n, int k);
void wypisz_trojkat_odwrotnie(int n, int k, int start);

// ========== G£ÓWNA FUNKCJA MAIN ==========
int main(void) {
    int n = 0;  // (1 punkt) Zmienna lokalna n - iloœæ elementów w tablicy
    char wybor;

    // (1 punkt) Nieskoñczona pêtla g³ówna
    while (1) {
        printf("\n=== MENU ===\n");
        printf("w - Wypisz tablice\n");
        printf("d - Dodaj znak (cyfre lub znak ASCII)\n");
        printf("D - Dodaj dowolna liczbe\n");
        printf("u - Usun wszystkie wystapienia liczby\n");
        printf("s - Suma wszystkich liczb\n");
        printf("r - Wypisz tablice w trojkacie\n");
        printf("R - Wypisz tablice w trojkacie (odwrotnie, rekurencyjnie)\n");
        printf("e - Wyjscie\n");
        printf("Wybierz opcje: ");
        scanf(" %c", &wybor);

        // (1 punkt) Instrukcja switch/case
        switch (wybor) {
            case 'e':
                printf("Koniec programu.\n");
                return 0;

            case 'w':
                wypisz_tablice(n);
                break;

            case 'd':
                dodaj_znak(&n);
                break;

            case 'D':
                dodaj_liczbe(&n);
                break;

            case 'u':
                usun_wystapienia(&n);
                break;

            case 's': {
                int suma = suma_tablicy(n);
                if (suma == -1) {
                    printf("Tablica jest pusta!\n");
                } else {
                    printf("Suma wszystkich liczb: %d\n", suma);
                }
                break;
            }

            case 'r': {
                if (n == 0) {
                    printf("Tablica jest pusta!\n");
                } else {
                    int k;
                    printf("Podaj k: ");
                    scanf("%d", &k);
                    wypisz_trojkat(n, k);
                }
                break;
            }

            case 'R': {
                if (n == 0) {
                    printf("Tablica jest pusta!\n");
                } else {
                    int k;
                    printf("Podaj k: ");
                    scanf("%d", &k);
                    wypisz_trojkat_odwrotnie(n, k, 0);
                }
                break;
            }

            default:
                // (1 punkt) Obs³uga b³êdnego wyboru
                printf("Bledny wybor! Sprobuj ponownie.\n");
                break;
        }
    }

    return 0;
}

// ========== DEFINICJE FUNKCJI ==========

// (3 punkty) Funkcja wypisuj¹ca tablicê
void wypisz_tablice(int n) {
    if (n == 0) {
        printf("Tablica jest pusta!\n");
        return;
    }

    printf("Zawartosc tablicy (%d elementow):\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", tablica[i]);
    }
    printf("\n");
}

// (4 punkty) Funkcja dodaj¹ca znak
void dodaj_znak(int *n) {
    if (*n >= MAX_SIZE) {
        printf("Brak miejsca w tablicy!\n");
        return;
    }

    char znak;
    printf("Podaj znak: ");
    scanf(" %c", &znak);

    if (isdigit(znak)) {
        // Jeœli znak jest cyfr¹, wstawiamy wartoœæ liczbow¹ cyfry
        tablica[*n] = znak - '0';  // Konwersja '0' -> 0, '1' -> 1, itd.
    } else {
        // Jeœli inny znak, wstawiamy kod ASCII
        tablica[*n] = (int)znak;
    }

    (*n)++;
    printf("Dodano wartosc %d do tablicy.\n", tablica[*n-1]);
}

// (3 punkty) Funkcja dodaj¹ca dowoln¹ liczbê
void dodaj_liczbe(int *n) {
    if (*n >= MAX_SIZE) {
        printf("Brak miejsca w tablicy!\n");
        return;
    }

    int liczba;
    printf("Podaj liczbe: ");
    scanf("%d", &liczba);

    tablica[*n] = liczba;
    (*n)++;
    printf("Dodano liczbe %d do tablicy.\n", liczba);
}

// (3 punkty) Funkcja usuwaj¹ca wszystkie wyst¹pienia liczby
void usun_wystapienia(int *n) {
    if (*n == 0) {
        printf("Tablica jest pusta!\n");
        return;
    }

    int liczba, nowy_rozmiar = 0;
    printf("Podaj liczbe do usuniecia: ");
    scanf("%d", &liczba);

    // Przesuwamy elementy ró¿ne od usuwanej liczby na pocz¹tek
    for (int i = 0; i < *n; i++) {
        if (tablica[i] != liczba) {
            tablica[nowy_rozmiar] = tablica[i];
            nowy_rozmiar++;
        }
    }

    int usunieto = *n - nowy_rozmiar;
    *n = nowy_rozmiar;

    if (usunieto > 0) {
        printf("Usunieto %d wystapien liczby %d.\n", usunieto, liczba);
    } else {
        printf("Liczba %d nie wystepuje w tablicy.\n", liczba);
    }
}

// (3 punkty) Funkcja zwracaj¹ca sumê tablicy
int suma_tablicy(int n) {
    if (n == 0) {
        return -1;  // Specjalna wartoœæ dla pustej tablicy
    }

    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += tablica[i];
    }
    return suma;
}

// (4 punkty) Funkcja wypisuj¹ca tablicê w trójk¹cie
void wypisz_trojkat(int n, int k) {
    int indeks = 0;
    int wiersz = 0;

    while (indeks < n) {
        // Obliczamy ile elementów w tym wierszu
        int w_tym_wierszu = k + wiersz;

        // Wypisujemy elementy tego wiersza
        for (int i = 0; i < w_tym_wierszu && indeks < n; i++) {
            printf("%d", tablica[indeks]);
            indeks++;
        }
        printf("\n");
        wiersz++;
    }
}

// (5 punktów) Funkcja rekurencyjna wypisuj¹ca trójk¹t odwrotnie
void wypisz_trojkat_odwrotnie(int n, int k, int start) {
    if (start >= n) {
        return;  // Warunek stopu rekurencji
    }

    // Najpierw rekurencyjnie obs³ugujemy resztê tablicy
    int elementow_do_konca = n - start;

    // Obliczamy ile wierszy pozosta³o
    int wiersz = 0;
    int suma_elementow = 0;

    while (suma_elementow < elementow_do_konca) {
        suma_elementow += (k + wiersz);
        wiersz++;
    }

    // Jeœli to nie jest ostatni wiersz, rekurencyjnie obs³ugujemy resztê
    if (wiersz > 1) {
        // Obliczamy ile elementów w ostatnim wierszu
        int poprzednie_wiersze = 0;
        for (int i = 0; i < wiersz-1; i++) {
            poprzednie_wiersze += (k + i);
        }

        int w_ostatnim_wierszu = elementow_do_konca - poprzednie_wiersze;

        // Rekurencyjnie obs³ugujemy pocz¹tek
        wypisz_trojkat_odwrotnie(n, k, start + w_ostatnim_wierszu);

        // Teraz wypisujemy ostatni wiersz
        for (int i = 0; i < w_ostatnim_wierszu; i++) {
            printf("%d", tablica[start + i]);
        }
        printf("\n");
    } else {
        // To jest pierwszy (jedyny) wiersz
        for (int i = start; i < n; i++) {
            printf("%d", tablica[i]);
        }
        printf("\n");
    }
}
