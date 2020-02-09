#include <iostream>
#include <string>
#include "stdlib.h"

using namespace std;

int main()
{
    string vardas, treciaE;
    char galune;
    int charSkc, nPlotis;
    string remelis="", pasisveikinimas;

    cout<<"Iveskite savo varda: ";
    cin>>vardas;

    charSkc = vardas.length() + treciaE.length() + 3;

    bool ok = false;
    // tikrinama ar ivestas plotis ne per mazas pasisveikinimui
    do {
        cout<<"Iveskite kokio plocio remelio noretumete (minimalus galimas plotis = " << charSkc << "): ";
        cin>>nPlotis;

        if(nPlotis<charSkc){
            cout<<"\n naujai ivestas plotis turi buti ne mazesnis uz "<<charSkc<<"!\n";
        }
        else ok = true;
    } while (!ok);

    // tikrinama, kokios gimines yra ivestas vardas
    galune=vardas[vardas.length()-1];
    if (galune=='a' || galune=='e' || galune=='ė') {
        pasisveikinimas="Sveika, "+vardas+"!";
    }
    else {
        pasisveikinimas="Sveikas, "+vardas+"!";
    }

    // sukuriamas pasisveikinimas, busiantis trecioje eiluteje
    treciaE+="*";
    treciaE.insert(treciaE.begin()+1, ((nPlotis-2)/2)-pasisveikinimas.length()/2, ' ');
    treciaE+=pasisveikinimas;
    treciaE.insert(treciaE.begin()+treciaE.length(), ((nPlotis-3)/2)-pasisveikinimas.length()/2, ' ');
    treciaE+="*";

    // sukuriamas remelis su pasisveikinimu
    remelis.insert(remelis.begin(), nPlotis, '*');  /// pirma eilute
    remelis+="\n";


    remelis+="*";                                   /// antra eilute
    remelis.insert(remelis.length(), nPlotis-2, ' ');
    remelis+="*\n";

    remelis=remelis+treciaE+"\n";                   /// trecia eilute

    remelis+="*";                                   /// ketvirta eilute
    remelis.insert(remelis.length(), nPlotis-2, ' ');
    remelis+="*\n";

    remelis.insert(remelis.length(), nPlotis, '*');  /// penkta eilute
    remelis+="\n";

    // remelis spausdinamas
    cout<<remelis<<endl;

    system("pause");

    return 0;
}
