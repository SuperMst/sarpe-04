#include <iostream>

using namespace std;

int i, c[100], k, m, n;


void afisare(int c[100],int n)
{
    for(i=1;i<=n;i++)
        cout<<c[i];
    cout<<endl;
}

void combinari(int m, int n)
{
    for(i=1;i<=n;i++) c[i]=i;
    afisare(c,n);
    do
    {
        k=n;
        while(c[k]==m-n+k && k>0) k=k-1;
        if(k>0)
        {
            c[k]++;
            for(i=k+1;i<=n;i++) c[i]=c[i-1]+1;
            afisare(c,n);
        }
    }
    while(k>0);
}

int main()
{
    cout<<"m = ";cin>>m;
    cout<<"n = ";cin>>n;
    combinari(m,n);
}
