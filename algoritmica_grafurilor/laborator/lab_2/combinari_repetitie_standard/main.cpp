#include <iostream>

using namespace std;

int i, m, n, c[100], k;

void afisare(int c[100],int n)
{
    for(i=1;i<=n;i++)
        cout<<c[i];
    cout<<endl;
}

void combinari_repetitie(int m, int n)
{
    for(i=1;i<=n;i++) c[i]=1;
    afisare(c,n);
    do
    {
        k=n;
        while(c[k]==m && k>0) k=k-1;
        if(k>0)
        {
            c[k]++;
            for(i=k+1;i<=n;i++) c[i]=c[k];
            afisare(c,n);
        }
    }
    while(k>0);
}

int main()
{
    cin>>m;
    cin>>n;
    combinari_repetitie(m,n);
}
