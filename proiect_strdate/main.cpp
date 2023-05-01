#include <iostream>
#include <cstring>

using namespace std;
int n1, balance;
struct joc
{
    char nume[32];
    float pret;
    char developer[32];
    char publisher[32];
    char genre[32];
    int isMultyplayer;
    struct releasedat
    {
        int zi;
        int luna;
        int an;
    }releasedate;
    int searched=0;
    int bought=0;

}v[100];
void citire()
{
    int n, i;
    cout<<"Number of games: ";
    cin>>n;
    n1=n;
    for (i=1;i<=n;i++)
    {
        cout<<"Video Game "<<i<<endl;
        cout<<"Name: ";
        cin>>v[i].nume;
        cout<<endl<<"Price: ";
        cin>>v[i].pret;
        cout<<endl<<"Developer: ";
        cin>>v[i].developer;
        cout<<endl<<"Publisher: ";
        cin>>v[i].publisher;
        cout<<endl<<"Genre: ";
        cin>>v[i].genre;
        cout<<endl<<"Does it have Multiplayer? (0 => no, anything else = yes): ";
        cin>>v[i].isMultyplayer;
        cout<<endl<<"Release date: "<<endl;
        cout<<"Day: ";cin>>v[i].releasedate.zi; cout<<"Month: ";cin>>v[i].releasedate.luna; cout<<"Year: ";cin>>v[i].releasedate.an;
    }

}
    void gsearch()
    {
        int n[7], i;
        int sn=0, sp=0, sd=0, spu=0, sg=0, sm=0, sr=0;
        cout<<"Enter the specified number for each search criteria. The last entered number will always be 0. Press enter after each number"<<endl<<"(1) -> Name"<<endl<<"(2) -> Price"<<endl<<"(3) -> Developer"<<endl<<"(4) -> Publisher"<<endl<<"(5) -> Genre"<<endl<<"(6) -> Has Multiplayer"<<endl<<"(7) -> Release date";
        cout<<endl;
        for(i=0;i<7;i++)
        {
            cin>>n[i];
            if (n[i]==0) break;
        }
        for(i=0;i<7;i++)
        {
            if (n[i]==1) sn=1;
            if (n[i]==2) sp=1;
            if (n[i]==3) sd=1;
            if (n[i]==4) spu=1;
            if (n[i]==5) sg=1;
            if (n[i]==6) sm=1;
            if (n[i]==7) sr=1;
            if (n[i]==0) break;
        }
        joc aux;
        if (sn==1)
        {
                cout<<"Name: ";
                cin>>aux.nume;
                cout<<endl;
                for (int i=1; i<=n1; i++)
                {
                    if (v[i].nume==aux.nume) v[i].searched=1;
                        else v[i].searched=0;
                }
        }
        if (sp==1)
        {
                cout<<"Price: ";
                cin>>aux.pret;
                cout<<endl;
                for (int i=1; i<=n1; i++)
                {
                    if (v[i].pret==aux.pret) v[i].searched=1;
                        else v[i].searched=0;
                }
        }
        if (sd==1)
        {
                cout<<"Developer: ";
                cin>>aux.developer;
                cout<<endl;
                for (int i=1; i<=n1; i++)
                {
                    if (v[i].developer==aux.developer) v[i].searched=1;
                        else v[i].searched=0;
                }
        }
        if (spu==1)
        {
                cout<<"Publisher: ";
                cin>>aux.publisher;
                cout<<endl;
                for (int i=1; i<=n1; i++)
                {
                    if (v[i].publisher==aux.publisher) v[i].searched=1;
                        else v[i].searched=0;
                }
        }
        if (sg==1)
        {
                cout<<"Genre: ";
                cin>>aux.genre;
                cout<<endl;
                for (int i=1; i<=n1; i++)
                {
                    if (v[i].genre==aux.genre) v[i].searched=1;
                        else v[i].searched=0;
                }
        }
        if (sm==1)
        {
                cout<<"Multiplayer: ";
                cin>>aux.isMultyplayer;
                cout<<endl;
                for (int i=1; i<=n1; i++)
                {
                    if (v[i].isMultyplayer==aux.isMultyplayer) v[i].searched=1;
                        else v[i].searched=0;
                }
        }
        if (sr==1)
        {
                cout<<"Nume: ";
                cout<<"Day: ";cin>>aux.releasedate.zi; cout<<"Month: ";cin>>aux.releasedate.luna; cout<<"Year: ";cin>>aux.releasedate.an;
                cout<<endl;
                for (int i=1; i<=n1; i++)
                {
                    if (v[i].releasedate.zi==aux.releasedate.zi && v[i].releasedate.luna==aux.releasedate.luna && v[i].releasedate.an==aux.releasedate.an) v[i].searched=1;
                        else v[i].searched=0;
                }
        }
        for (int i=1; i<=n1; i++) if (v[i].searched==1) cout<<v[i].nume<<" - Game number"<<" "<<i<<endl;
    }

void change()
{
    int r, i;
    chg:
    cout<<endl<<"Which game would you like to change?"<<endl;
    cin>>i;
    cout<<"What would you like to change?"<<endl<<"(1) -> Name"<<endl<<"(2) -> Price"<<endl<<"(3) -> Developer"<<endl<<"(4) -> Publisher"<<endl<<"(5) -> Genre"<<endl<<"(6) -> Has Multiplayer"<<endl<<"(7) -> Release date"<<endl;
    cin>>r;
    switch (r)
    {
        case 1: cin>>v[i].nume; break;
        case 2: cin>>v[i].pret; break;
        case 3: cin>>v[i].developer ; break;
        case 4: cin>>v[i].publisher; break;
        case 5: cin>>v[i].genre; break;
        case 6: cin>>v[i].isMultyplayer; break;
        case 7: {cout<<"Day:"; cin>>v[i].releasedate.zi; cout<<endl<<"Month: "; cin>>v[i].releasedate.luna; cout<<endl<<"Year: "; cin>>v[i].releasedate.an;} break;
        default: {cout<<"Invalid input. Try again"<<endl; goto chg;}
    }
    cout<<"Succes!"<<endl;
}

void afisare()
{
    cout<<"Which game would you like to display?"<<endl;
    int i;
    cin>>i;

        cout<<"Video Game "<<i<<endl;
        cout<<"Name: ";
        cout<<v[i].nume;
        cout<<endl<<"Price: ";
        cout<<v[i].pret;
        cout<<endl<<"Developer: ";
        cout<<v[i].developer;
        cout<<endl<<"Publisher: ";
        cout<<v[i].publisher;
        cout<<endl<<"Genre: ";
        cout<<v[i].genre;
        cout<<endl<<"Does it have Multiplayer? (0 => no, anything else = yes): ";
        cout<<v[i].isMultyplayer;
        cout<<endl<<"Release date: "<<endl;
        cout<<"Day: ";cout<<v[i].releasedate.zi; cout<<endl<<"Month: ";cout<<v[i].releasedate.luna; cout<<endl<<"Year: ";cout<<v[i].releasedate.an<<endl;

}

void buy()
{
    int i;
    cout<<"What game would you like to purchase?"<<endl;
    pr:
    cin>>i;
    if (v[i].bought==0)
    {
    if (i<=n1 && i>=1)
    {
        if (balance>=v[i].pret)
        {
        balance=balance-v[i].pret;
        v[i].bought=1;
        cout<<"Game number "<<i<<" - " <<v[i].nume<<" has been purchased. Remaining Balance: "<<balance<<endl;
        }
        else { cout<<"Insufficient Funds!"<<endl; goto pr;}
    }
    else
    {
        cout<<"There's no game on that position. Try again."<<endl;
        goto pr;
    }
    }
    else {cout<<"You already own this game."<<endl; goto pr;}
}

void yell()
{
    int i;
    cout<<"Which game's title would to like to change to uppercase?"<<endl;
    cin>>i;
    int k;
    for (k=0; k<32;k++)
    v[i].nume[k]=toupper(v[i].nume[k]);

}

void sortire()
{
    int z, i, j;
    cout<<"What would you like to sort by?"<<endl<<"(1)- Price"<<endl<<"(2) - Release date"<<endl;
    yes:
    cin>>z;
    switch (z){
    case 1:
        {
        if (n1>1)
        {
        for (i=1; i<=n1-1; i++)
            for (j=i+1; j<=n1; j++)
            if (v[i].pret>v[j].pret)
                swap (v[i], v[j]);
        }
        else cout<<"There's only 1 game, nothing to sort"<<endl;
        break;
        }
    case 2:{
        if (n1>1)
        {
          for (i=1; i<=n1-1; i++)
            for (j=i+1; j<=n1; j++)
            if (v[i].releasedate.an>v[j].releasedate.an)
                swap (v[i], v[j]);
            else if (v[i].releasedate.luna>v[j].releasedate.luna)
                swap (v[i], v[j]);
            else if (v[i].releasedate.zi>v[j].releasedate.zi)
                swap (v[i], v[j]);
        }
        else cout<<"There's only 1 game, nothing to sort"<<endl;
        break;
    }
    default: {cout<<"Please select a valid option"<<endl; goto yes;}
    }
    cout<<"Result: "<<endl;
    for (i=1; i<=n1; i++)
        cout<<v[i].nume<<" - Game number "<<i<<". Price: "<<v[i].pret<<". Release date: "<<v[i].releasedate.zi<<" "<<v[i].releasedate.luna<<" "<<v[i].releasedate.an<<endl;
    }

int main()
{
    int k;
    citire();
    cout<<"What is your account balance?"<<endl;
    cin>>balance;
    start:
    cout<<"What would you like to do?"<<endl<<"(0) - Exit"<<endl<<"(1) - Search for a game"<<endl<<"(2) - Edit a game's info"<<endl<<"(3) - Display a game's info"<<endl<<"(4) - Buy a game"<<endl<<"(5) - Change a game's title to uppercase leters"<<endl<<"(6) - Ascending sort by price or release date"<<endl;
    cin>>k;
    switch (k)
    {
        case 0: goto zero; break;
        case 1: gsearch(); break;
        case 2: change(); break;
        case 3: afisare(); break;
        case 4: buy(); break;
        case 5: yell(); break;
        case 6: sortire(); break;
        default: {cout<<"Unknown input. Try again."<<endl; goto start;}
    }
    goto start;
    zero:
    return 0;
}
