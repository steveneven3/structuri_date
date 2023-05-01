#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char sir[100];
    int i, j, ok;
    cin.getline(sir, 31);
    int lungime_sir=strlen(sir);
    ok=1;
    for (i=0; i<lungime_sir; i++)
    {

        j=lungime_sir-1-i;
        if (sir[i]!=sir[j]) ok=0;
    }
    if (ok==1) cout<<"Sirul este palindrom";
        else cout<<"Sirul nu este palindrom";
    return 0;
}
