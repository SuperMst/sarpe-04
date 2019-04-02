#include <iostream>
#define NMAX 100

using namespace std;

int n, c[NMAX], i, m, k;

void afisare_prod_std(int c[NMAX],int n)
{
    int i;
    for(i=1;i<=n;i++)
        cout<<c[i]<<" ";
    cout<<endl;
}

int main()
{
    cout<<"n= ";
    cin>>n;

    cout<<"m= ";
    cin>>m;

    for(i=1;i<=n;i++)
        c[i]=1;
    afisare_prod_std(c,n);

    do
    {
        k=n;
        while(m==c[k] && k>0) k--;
        if(k>0)
        {
            c[k]++;
            for(i=k+1;i<=n;i++) c[i]=1;
            afisare_prod_std(c,n);
        }
    }
    while(k>0);
}
