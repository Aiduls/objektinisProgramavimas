#include <iostream>
#include <string>

using namespace std;

int main()
{
    string vardas;
    char galune;
    string pirmaE="", antraE="", treciaE = "", ketvirtaE="", penktaE="";
    int charSkc;

    cin>>vardas;

    galune=vardas[vardas.length()-1];
    if (galune=='a' || galune=='e' || galune=='ė') {
        treciaE="* Sveika, ";
    }
    else {
        treciaE="* Sveikas, ";
    }


    charSkc = vardas.length() + treciaE.length() + 3;

    pirmaE.insert(pirmaE.begin(), charSkc, '*');

    antraE+="*";
    antraE.insert(antraE.begin()+1, charSkc-2, ' ');
    antraE+="*";

    treciaE=treciaE+vardas+ "! *";

    ketvirtaE+="*";
    ketvirtaE.insert(ketvirtaE.begin()+1, charSkc-2, ' ');
    ketvirtaE+="*";

    penktaE.insert(penktaE.begin(), charSkc, '*');

    cout<<pirmaE<<endl<<antraE<<endl<<treciaE<<endl<<ketvirtaE<<endl<<penktaE<<endl;

    return 0;
}
