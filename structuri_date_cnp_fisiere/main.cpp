#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("date.in");
    ofstream fout("date.out");
    int n, i;
    fin >> n;
    fin.get();
    char cnp[14];
    for (i=0;i<n;i++)
    {
        fin.getline(cnp, 14);
        switch (cnp[0])
    {
        case '1': fout<<"Sex: Masculin"<<endl<<"Data nasterii: "<<cnp[5]<<cnp[6]<<" "<<cnp[3]<<cnp[4]<<" 19"<<cnp[1]<<cnp[2]<<endl<<"Varsta :"<<2023-(1900+10*(cnp[1]-48)+(cnp[2]-48))<<endl; break;
        case '2': fout<<"Sex: Feminin"<<endl<<"Data nasterii: "<<cnp[5]<<cnp[6]<<" "<<cnp[3]<<cnp[4]<<" 19"<<cnp[1]<<cnp[2]<<endl<<"Varsta :"<<2023-(1900+10*(cnp[1]-48)+(cnp[2]-48))<<endl;break;
        case '3': fout<<"Sex: Masculin"<<endl<<"Data nasterii: "<<cnp[5]<<cnp[6]<<" "<<cnp[3]<<cnp[4]<<" 18"<<cnp[1]<<cnp[2]<<endl<<"Varsta :"<<2023-(1800+10*(cnp[1]-48)+(cnp[2]-48))<<endl;break;
        case '4': fout<<"Sex: Feminin"<<endl<<"Data nasterii: "<<cnp[5]<<cnp[6]<<" "<<cnp[3]<<cnp[4]<<" 18"<<cnp[1]<<cnp[2]<<endl<<"Varsta :"<<2023-(1800+10*(cnp[1]-48)+(cnp[2]-48))<<endl;break;
        case '5': fout<<"Sex: Masculin"<<endl<<"Data nasterii: "<<cnp[5]<<cnp[6]<<" "<<cnp[3]<<cnp[4]<<" 20"<<cnp[1]<<cnp[2]<<endl<<"Varsta :"<<2023-(2000+10*(cnp[1]-48)+(cnp[2]-48))<<endl;break;
        case '6': fout<<"Sex: Feminin"<<endl<<"Data nasterii: "<<cnp[5]<<cnp[6]<<" "<<cnp[3]<<cnp[4]<<" 20"<<cnp[1]<<cnp[2]<<endl<<"Varsta :"<<2023-(2000+10*(cnp[1]-48)+(cnp[2]-48))<<endl;break;
    }

    }
    fin.close();
    fout.close();
    return 0;
}
