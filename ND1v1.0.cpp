#include <iostream>
#include <string>
#include "stdlib.h"

using namespace std;

struct sveikinimas {
    string krastas="", vidurys="", uzpildas="";
};

int main()
{
    string vardas;
    char galune;
    sveikinimas Remelis;
    int eilIlgis, nPlotis, vidurioEilute;

    cout<<"Iveskite savo varda: ";
    cin>>vardas;

    // tikrinama, kokios gimines yra ivestas vardas
    galune=vardas[vardas.length()-1];
    if (galune=='a' || galune=='e' || galune=='ė' || galune=='A' || galune=='E' || galune=='Ė') {
        Remelis.vidurys="* Sveika, "+vardas+"! *"; // sukuriama vidurine eilute, mot. gimine
    }
    else {
        Remelis.vidurys="* Sveikas, "+vardas+"! *"; // sukuriama vidurine eilute, vyr. gimine
    }

   // charSkc = vardas.length() + Remelis.vidurys.length() + 3;

    bool ok = false;
    // tikrinama ar ivestas plotis ne per mazas pasisveikinimui
    do {
        cout<<"Iveskite kokio aukscio remelio noretumete (minimalus galimas eiluciu kiekis - aukstis = 3):";
        cin>>nPlotis;

        if(nPlotis<3){
            cout<<"\nnaujai ivestas plotis turi buti ne mazesnis uz 3!\n";
        }
        else {
            ok = true;
        }
    } while (!ok);

    if (nPlotis%2==0){
        vidurioEilute=nPlotis/2;
    }
    else {
        vidurioEilute=nPlotis/2+1;
    }
    eilIlgis = Remelis.vidurys.length(); cout<<eilIlgis<<endl;
    Remelis.krastas.insert(Remelis.krastas.begin(), eilIlgis, '*'); // padaroma virsaus ir apacios eilute

    // padaroma kitos, nei vidurio, virsaus ar apacios eilutes
    Remelis.uzpildas+='*';
    Remelis.uzpildas.insert(Remelis.uzpildas.begin()+1, eilIlgis-2, ' ');
    Remelis.uzpildas+='*';

    for (int i=1; i<=nPlotis; i++){
        if (i==1 || i==nPlotis){
            cout<<Remelis.krastas<<endl;
        }
        else if (i==vidurioEilute){
            cout<<Remelis.vidurys<<endl;
        }
        else {
              cout<<Remelis.uzpildas<<endl;
        }
    }



    /*
    // sukuriamas pasisveikinimas, busiantis trecioje eiluteje
    treciaE+="*";
    treciaE.insert(treciaE.begin()+1, ((nPlotis-2)/2)-pasisveikinimas.length()/2, ' ');
    treciaE+=pasisveikinimas;
    treciaE.insert(treciaE.begin()+treciaE.length(), ((nPlotis-3)/2)-(pasisveikinimas.length()/2), ' ');
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
    */
    system("pause");

    return 0;
}
