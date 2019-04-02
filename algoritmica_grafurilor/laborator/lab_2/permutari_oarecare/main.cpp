#include <iostream>

using namespace std;

int i, n, c[100], k, p[100], j, a[100];

void afisare(int p[100],int n)
{
    for(i=1;i<=n;i++)
        cout<<a[p[i]];
    cout<<endl;
}

void permutari(int n)
{
    for(i=1;i<=n;i++) p[i]=i;
    afisare(p,n);
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
            afisare(p,n);
        }
    }
    while(k>0);
}

int main()
{
    cin>>n;
    for(i=1;i<=n;i++) cin>>a[i];
    permutari(n);
}
