#include <iostream>
using namespace std;

int a[20][20],n,m,v[20],i,x,y;

void Citire(int a[20][20], int n, int m)
{
    cout<<"Dati numarul de noduri: ";
    cin>>n;
    cout<<"Dati numarul de muchii: ";
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        cout<<"Muchia "<<i<<endl;
        cout<<"x: "; cin>>x;
        cout<<"y; "; cin>>y;
        a[x][y]=a[y][x]=1;
    }
}

int exista_nod_nevizitat(int v[20], int n){
  for(int i=1;i<=n;i++)
      if(v[i]==0)
         return i;
      return 0;
    }
int main ()
{
    Citire(a,n,m);
    if(exista_nod_nevizitat(v,n)!=0 && m==n-1)
        cout<<"Graful dat nu este arbore";
        else
        cout<<"Graful dat este arbore";
}
