//#include <stdio.h>
//#include<stdbool.h>
//
//#define TEST // jeżeli to ustawie widoczne to bedzie robic test a nie  program
//
//void test_licz_silnie_0(int i);
//
//long licz_silnie(int podstawa) {
//    if (podstawa == 0) {
//        return 1;
//    } else {
//
//        int licznik;
//        int silnia = 1;
//        for (licznik = 1; licznik <= podstawa; ++licznik) {
//            silnia *= licznik;
//        }
//        return silnia;
//    }
//
//}
//
////bool test_licz_silnie(){                // ta częścć sprawdza czy program działa włąściwie
////    if(licz_silnie(0) == 1) {
////        printf("test_licz_silnie() przechodzi");
////        return true;
////    }else{
////        printf("test_licz_silnie nie dziala!!");
////
////        return false;
////    }
////
////}
//
//
//void test_licz_silnie_0(int licznik) {
//    if(licz_silnie(0) != 1)
//        printf("Test nr %i nie działa", licznik);
//
//    }
//void test_licz_silnie_1(int licznik) {
//    if(licz_silnie(0) != 2)
//        printf("Test nr %i nie działa", licznik);
//
//    }
//void test_licz_silnie_2(int licznik) {
//    if(licz_silnie(0) != 120)
//        printf("Test nr %i nie działa", licznik);
//
//    }
//
//void run_test_pool(){
//    int licznik =0;
//
//    test_licz_silnie_0(++licznik);
//    test_licz_silnie_1(++licznik);
//    test_licz_silnie_2(++licznik);
//}
//
//
//int main() {
//
//#ifndef TEST
//
//// test_licz_silnie(); tu musimy zadeklarowac funkcje testu w głównym programie pozostała część
//      long podstawa;
//    long wynik;
//
//    printf("Podaj wartosc calkowita od 0 do 15 dla ktorej mam obliczyc silnie, n =\n ");
//    scanf("%ld", &podstawa);
//
//if(podstawa>=0 && podstawa<=15) {
//    wynik = licz_silnie(podstawa);
//    printf("Silnia (%ld) = %ld", podstawa, wynik);
//}
//
//else{
//        printf("Podałeś wartośc z poza zakresu!!!\n");
//    }
//
//    return 0;
//
//#else
// //test_licz_silnie();
//#endif
//
//
//}
#include <stdio.h>
int main() {
#define TEST
    unsigned long licz_silnie(int podstawa) {
        unsigned long licznik;
        unsigned long silnia = 1;
        unsigned long int podstawa_silni;
        unsigned long int licznik;
        unsigned long int wynik = 1;
        for (licznik = 2; licznik <= podstawa; ++licznik) {
            silnia *= licznik;
        }
        return silnia;
    }
    printf("Podaj wartosc calkowita dla ktorej mam obliczyc silnie, n = ");
    scanf(" %ld", &podstawa_silni);
    if (podstawa_silni <= 15) {
#ifdef TEST
        for (licznik = 2; licznik <= podstawa_silni; licznik++) {
            wynik *= licznik;
        }
        void nd(int licznik) { printf("Test nr %i nie działa\n", licznik); }
        printf("\nSilnia wynosi: %ld\n", wynik);
        void test_licz_silnie_0(int licznik) {
            if (licz_silnie(0) != 1) nd(licznik);
        }
        void test_licz_silnie_1(int licznik) {
            if (licz_silnie(1) != 1) nd(licznik);
        }
        void test_licz_silnie_2(int licznik) {
            if (licz_silnie(2) != 2) nd(licznik);
        }
        void test_licz_silnie_3(int licznik) {
            if (licz_silnie(5) != 120) nd(licznik);
        }
        void run_test_pool() {
            int licznik = 0;
            test_licz_silnie_0(++licznik);
            test_licz_silnie_1(++licznik);
            test_licz_silnie_2(++licznik);
            test_licz_silnie_3(++licznik);
        }
#endif
        int main() {
#ifndef TEST
            unsigned long wynik;
    unsigned long podstawa;
    printf("Podaj podstawe silni w przedziale od 0 do 15: \n");
    scanf("%ld", &podstawa);
    if (podstawa >= 0 && podstawa <= 15) {
        wynik = licz_silnie(podstawa);
        printf("silnia(%ld) = %ld", podstawa, wynik);
    } else {
        printf("Za duza wartosc n, n <= 15");
        printf("Podałeś liczbę spoza zakresu!\n");
    }
#else
            run_test_pool();
#endif
            return 0;
        }
