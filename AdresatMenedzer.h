#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <windows.h>

#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "UzytkownikMenedzer.h"

using namespace std;

class AdresatMenedzer
{
    vector <Adresat> adresaci;
    int idOstatniegoAdresata;

    PlikZAdresatami plikZAdresatami;
    UzytkownikMenedzer uzytkownikMenedzer;

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {
        idOstatniegoAdresata = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(adresaci, uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
    };

    int dodajAdresata();
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);

};

#endif
