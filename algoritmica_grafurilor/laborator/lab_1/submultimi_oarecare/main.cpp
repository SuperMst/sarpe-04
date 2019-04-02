#include <iostream>
#define NMAX 50
using namespace std;

int n, a[NMAX], i, k, c[NMAX];

void afisare_submultimi_oarecare(int c[NMAX],int a[NMAX],int n)
{
    for(int i=1;i<=n;i++)
        if(c[i]==1) cout<<a[i]<<" ";
    cout<<endl;
}

int main()
{
    cout<<"Numarul de elemente al multimii este "; cin>>n;
    cout<<"Elementele multimii sunt ";
    for(i=1;i<=n;i++) cin>>a[i];

    for(i=1;i<=n;i++) c[i]=1;
    afisare_submultimi_oarecare(c,a,n);

    do
    {
        k=n;
        while(c[k]==2 && k>0) k--;
        if(k>0)
        {
            c[k]=2;
            for(i=k+1;i<=n;i++) c[i]=1;
            afisare_submultimi_oarecare(c,a,n);
        }
    }
    while(k>0);
}
