#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    int i;
    int cnp[15];
    for (i=0;i<13;i++)
        cin>>cnp[i];
    switch (cnp[0])
    {
        case 1: cout<<"Sex: Masculin"<<endl<<"Data nasterii: "<<cnp[5]<<cnp[6]<<" "<<cnp[3]<<cnp[4]<<" 19"<<cnp[1]<<cnp[2]<<endl<<"Varsta :"<<2023-(1900+10*cnp[1]+cnp[2]); break;
        case 2: cout<<"Sex: Feminin"<<endl<<"Data nasterii: "<<cnp[5]<<cnp[6]<<" "<<cnp[3]<<cnp[4]<<" 19"<<cnp[1]<<cnp[2]<<endl<<"Varsta :"<<2023-(1900+10*cnp[1]+cnp[2]);break;
        case 3: cout<<"Sex: Masculin"<<endl<<"Data nasterii: "<<cnp[5]<<cnp[6]<<" "<<cnp[3]<<cnp[4]<<" 18"<<cnp[1]<<cnp[2]<<endl<<"Varsta :"<<2023-(1800+10*cnp[1]+cnp[2]);break;
        case 4: cout<<"Sex: Feminin"<<endl<<"Data nasterii: "<<cnp[5]<<cnp[6]<<" "<<cnp[3]<<cnp[4]<<" 18"<<cnp[1]<<cnp[2]<<endl<<"Varsta :"<<2023-(1900+10*cnp[1]+cnp[2]);break;
        case 5: cout<<"Sex: Masculin"<<endl<<"Data nasterii: "<<cnp[5]<<cnp[6]<<" "<<cnp[3]<<cnp[4]<<" 20"<<cnp[1]<<cnp[2]<<endl<<"Varsta :"<<2023-(2000+10*cnp[1]+cnp[2]);break;
        case 6: cout<<"Sex: Feminin"<<endl<<"Data nasterii: "<<cnp[5]<<cnp[6]<<" "<<cnp[3]<<cnp[4]<<" 20"<<cnp[1]<<cnp[2]<<endl<<"Varsta :"<<2023-(2000+10*cnp[1]+cnp[2]);break;
    }

    return 0;
}
