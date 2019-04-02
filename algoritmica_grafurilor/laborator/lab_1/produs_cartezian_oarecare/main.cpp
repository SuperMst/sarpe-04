#include <iostream>
#define NMAX 100

using namespace std;

int n, c[NMAX], i, j, m[NMAX], k, a[NMAX][NMAX];

void afisare_prod_std(int c[NMAX],int n, int a[NMAX][NMAX])
{
    int i;
    for(i=1;i<=n;i++)
        cout<<a[i][c[i]]<<" ";
    cout<<endl;
}

int main()
{
    cout<<"Numarul de multimi este ";
    cin>>n;

    cout<<"Numarul de elemente al multimilor ";
    for(i=1;i<=n;i++)
    {
        cin>>m[i];
    }

    for(i=1;i<=n;i++)
    {
        cout<<"Dati elementele multimii "<<i<<" ";
        for(j=1;j<=m[i];j++)
        {
            cin>>a[i][j];
        }
    }

    for(i=1;i<=n;i++)
        c[i]=1;
    afisare_prod_std(c,n,a);

    do
    {
        k=n;
        while(m[k]==c[k] && k>0) k--;
        if(k>0)
        {
            c[k]++;
            for(i=k+1;i<=n;i++) c[i]=1;
            afisare_prod_std(c,n,a);
        }
    }
    while(k>0);
}
