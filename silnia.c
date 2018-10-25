#include <stdio.h>

long licz_silnie(int podstawa) {
    if (podstawa == 0){
        return 1;
    }else{

    int licznik;
    int silnia=1;
    for (licznik=1; licznik <= podstawa; ++licznik){
        silnia *=licznik;
    }
    return silnia;
}



test_licz_silnie()





int main() {
      long podstawa;
    long wynik;

    printf("Podaj wartosc calkowita od 0 do 15 dla ktorej mam obliczyc silnie, n =\n ");
    scanf("%d", &podstawa);

if(podstawa>=0 && podstawa<=15){wynik = licz_silnie(podstawa);}
    printf("Silnia : %ld", wynik);

else{
        printf("podałeś wartośc z poza zakresu!!!\n");
    }

    return 0;
}