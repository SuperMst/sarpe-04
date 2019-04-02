#include <iostream>

using namespace std;

int nrc, viz[50], n, a[50][50], tata[50], i, cc[50],
nr_m, m1[50], m2[50], j;

void df(int x){
    cout<<x; cc[i]=nrc;
    viz[x]=1;
    for(int y=1;y<=n;y++){
        if(a[x][y]>=1 && viz[y]==0){
            tata[y]=x;
            df(y);
        }
    }
}

void comp_conexe(){
    nrc=0;
    for(i=1;i<=n;i++) cc[i]=0;
    for(i=1;i<=n;i++){
        if(cc[i]==0){
            nrc=nrc+1;
            df(i);
            cout<<endl;
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
        a[m2[i]][m1[i]]++;
    }

    cout<<endl;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    comp_conexe();
}
