#ifndef METODYPOMOCNICZNE_H
#define METODYPOMOCNICZNE_H

#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

class MetodyPomocnicze
{
public:
    static char wczytajZnak();
    static int wczytajLiczbeCalkowita();
    static int konwersjaStringNaInt(string liczba);
    static string wczytajLinie();
    static string konwerjsaIntNaString(int liczba);
    static string pobierzLiczbe(string tekst, int pozycjaZnaku);
    static string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);


};

#endif
