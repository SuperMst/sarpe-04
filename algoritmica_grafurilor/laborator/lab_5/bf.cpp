#include <iostream>

using namespace std;

int n,nr_m,a[100][100],m1[50],m2[50],
i, j, x, z, viz[50], tata[50], varf, coada, urm[50], s[50];

void bf(int x){
    cout<<x;
    viz[x]=1;
    tata[x]=0;
    coada=1;
    varf=1;
    s[coada]=x;
    while(varf<=coada){
        i=s[varf];
        j=urm[i]+1;
        while(a[i][j]==0 && j<=n) j=j+1;
        if(j>n) varf=varf+1;
            else{
                urm[i]=j;
                if(viz[j]==0){
                    cout<<j;
                    viz[j]=1;
                    tata[j]=i;
                    coada=coada+1;
                    s[coada]=j;
                }
            }
    }
}

int main()
{
    cout<<"Dati nr noduri "; cin>>n;
    cout<<"Dati nr muchii "; cin>>nr_m;
    cout<<"Muchiile sunt "<<endl;
    for(i=1;i<=nr_m;i++){
        cin>>m1[i];
        cin>>m2[i];
        a[m1[i]][m2[i]]++;
    }

    cout<<endl;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<"BF ";
    cin>>z;
    bf(z);
}
