#include <iostream>

#define ZadanieD

/* Zmieniając ostatnią literę w poniższej instrukcji na D (dodatkowe), lub P (podstawowe)
*  wybierasz aktywne zadanie.
*
*  UWAGA: jeśli rozwiązanie zadań wymaga podziału programu na pliki to dodaj je wszystkie do
*  projektu, ale przy każdym zadaniu "includuj" tylko te, które jego dotyczą.
*  Poniższe bloki dotyczą zadań z zajeć.
*/
 

#ifdef ZadanieD

// TU UMIEŚĆ KOD ROZWIAZANIA ZADANIA DOMOWEGO 
#include "testy.h"

using namespace std;

int main()
{
	test_is_palindrom_true();
	test_is_palindrom_false();
	test_is_palindrom_throw_nullptr();
	test_is_palindrom_throw_no_null();
	test_is_palindrom_throw_not_in_alphabet();
}
#endif

#ifdef ZadanieW

// TU UMIEŚĆ KOD ROZWIAZANIA ZADANIA WPROWADZAJĄCEGO

#endif

#ifdef ZadanieP

// TU UMIEŚĆ KOD ROZWIAZANIA ZADANIA PODSTAWOWEGO

#endif

#ifdef ZadanieA

// TU UMIEŚĆ KOD ROZWIAZANIA ZADANIA AMBITNEGO

#endif

/* 
	Poniższe bloki warunkowe dotyczą zadań kolokwialnych.
	Oddając zadania z zajęć, skasuj poniższe bloki.
	Oddając zadania z kolokwium skasuj powyższe bloki.
*/


#ifdef Blok1

// TU UMIEŚĆ KOD ROZWIAZANIA ZADANIA Z BLOKU 1

#endif

#ifdef Blok2

// TU UMIEŚĆ KOD ROZWIAZANIA ZADANIA Z BLOKU 2

#endif

#ifdef Blok3

// TU UMIEŚĆ KOD ROZWIAZANIA ZADANIA Z BLOKU 3

#endif

#ifdef Blok4

// TU UMIEŚĆ KOD ROZWIAZANIA ZADANIA Z BLOKU 4

#endif


