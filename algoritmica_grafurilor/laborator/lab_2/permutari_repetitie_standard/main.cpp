#include <iostream>

using namespace std;

int p[100],n,t[100],i,k,j,m;

void afisare(int p[50], int n)
{
    for(int i=1;i<=n;i++)
        cout<<p[i];
    cout<<endl;
}

void permutari_repetitie(int n, int t[100], int m)
{
    n=0;
    for(i=1;i<=m;i++) n+=t[i];
    i=0;
    for(j=1;j<=m;j++)
        for(k=1;k<=t[j];k++)
        {
            i++;
            p[i]=j;
        }
    afisare(p,n);
    do
    {
        k=n-1;
        while(p[k]>=p[k+1] && k>0) k--;
        if(k>0)
        {
            j=n;
            while(p[j]<=p[k]) j--;
            swap(p[k],p[j]);
            for(i=1;i<=((n-k)/2);i++) swap(p[k+i],p[n-i+1]);
            afisare(p,n);
        }
    }
    while(k>0);
}

int main()
{
    cin>>m;
    cin>>n;
    for(int i=1;i<=m;i++)
        cin>>t[i];
    permutari_repetitie(n,t,m);
}
