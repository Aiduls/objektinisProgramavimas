#include <iostream>
#include <string>

using namespace std;

int main()
{
    string vardas;
    int charSkc;

    cin>>vardas;

    string pirmaE="", antraE="", treciaE = "* Sveikas, ", ketvirtaE="", penktaE="";
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
