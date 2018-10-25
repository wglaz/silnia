#include <stdio.h>
#include<stdbool.h>

//#define TEST// jeżeli to ustawie widoczne to bedzie robic test a nie  program 

long licz_silnie(int podstawa) {
    if (podstawa == 0) {
        return 1;
    } else {

        int licznik;
        int silnia = 1;
        for (licznik = 1; licznik <= podstawa; ++licznik) {
            silnia *= licznik;
        }
        return silnia;
    }

}

bool test_licz_silnie(){                // ta częścć sprawdza czy program działa włąściwie
    if(licz_silnie(0) == 1) {
        printf("test_licz_silnie() przechodzi");
        return true;
    }else{
        printf("test_licz_silnie nie dziala!!");

        return false;
    }

}





int main() {

#ifndef TEST

// test_licz_silnie(); tu musimy zadeklarowac funkcje testu w głównym programie pozostała część
      long podstawa;
    long wynik;

    printf("Podaj wartosc calkowita od 0 do 15 dla ktorej mam obliczyc silnie, n =\n ");
    scanf("%ld", &podstawa);

if(podstawa>=0 && podstawa<=15) {
    wynik = licz_silnie(podstawa);
    printf("Silnia : %ld", wynik);
}

else{
        printf("podałeś wartośc z poza zakresu!!!\n");
    }

    return 0;

#else
 test_licz_silnie();
#endif


}