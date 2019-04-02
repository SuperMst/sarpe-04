#include <iostream>

using namespace std;

int i,c[100],p[100],n,m,k,j;

void afisare(int c[100],int p[100],int n)
{
    for(i=1;i<=n;i++)
        cout<<c[p[i]];
    cout<<endl;
}

void permutari(int n)
{
    for(i=1;i<=n;i++) p[i]=i;
    afisare(c,p,n);
    do
    {
        k=n-1;
        while(p[k]>=p[k+1] && k>0) k=k-1;
        if(k>0)
        {
            j=n;
            while(p[j]<=p[k]) j--;
            swap(p[j],p[k]);
            for(i=1;i<=((n-k)/2);i++)
            {
                swap(p[k+i],p[n-i+1]);
            }
            afisare(c,p,n);
        }
    }
    while(k>0);
}

void aranjamente(int m, int n)
{
    for(i=1;i<=n;i++) c[i]=i;
    permutari(n);
    do
    {
        k=n;
        while(c[k]==m-n+k && k>0) k--;
        if(k>0)
        {
            c[k]++;
            for(i=k+1;i<=n;i++) c[i]=c[i-1]+1;
            permutari(n);
        }
    }
    while(k>0);
}

int main()
{
    cin>>m;
    cin>>n;
    aranjamente(m,n);
}
