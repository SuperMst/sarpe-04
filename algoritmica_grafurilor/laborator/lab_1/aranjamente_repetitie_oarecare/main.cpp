#include <iostream>
#define NMAX 100

using namespace std;

int n, c[NMAX], i, j, m, k, a[NMAX];

void afisare_prod_std(int c[NMAX],int n,int a[NMAX])
{
    int i;
    for(i=1;i<=n;i++)
        cout<<a[c[i]]<<" ";
    cout<<endl;
}

int main()
{
    cout<<"n= ";
    cin>>n;

    cout<<"m= ";
    cin>>m;

    cout<<"Dati elementele multimii ";
    for(i=1;i<=m;i++)
    {
            cin>>a[i];
    }


    for(i=1;i<=n;i++)
        c[i]=1;
    afisare_prod_std(c,n,a);

    do
    {
        k=n;
        while(m==c[k] && k>0) k--;
        if(k>0)
        {
            c[k]++;
            for(i=k+1;i<=n;i++) c[i]=1;
            afisare_prod_std(c,n,a);
        }
    }
    while(k>0);
}
