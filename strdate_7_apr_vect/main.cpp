#include <iostream>
using namespace std;
void citire(int v[], int lung)
{
    int i;
    for (i=0;i<lung; i++)
        cin>>v[i];
}

void Inserare (int v[], int lung)
{
  int i, aux, x, n;
  cout<<"Pozitia numarului inserat: "; cin>>n;
  cout<<"Numar inserat: "; cin>>x;
  for (i=n-1;i<=lung;i++)
  {
    aux=v[i];
    v[i]=x;
    x=v[i+1];
  }
}

void Afisare(int v[], int lung)
{
  int i;
  for (i=0; i<lung; i++)
    cout<<v[i];
}
void StergereElement(int v[], int lung)
{
 int i, x;
 cout<<"Pozitia elementului sters: ";cin>>x;
  for (i=x-1;i<=lung;i++)
    v[i]=v[i+1];
}
int main() {

  int v[101];
  citire(v, 5);
  Afisare(v, 5);
  Inserare(v, 5);
  Afisare(v, 5);
  StergereElement(v, 5);
  Afisare (v, 5);
  return 0;
}
