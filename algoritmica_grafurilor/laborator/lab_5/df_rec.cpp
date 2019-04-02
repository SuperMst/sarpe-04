#include <iostream>

using namespace std;

int n,nr_m,a[100][100],m1[50],m2[50], i, j, x, z, viz[50], tata[50];

void df_rec(int x){
    cout<<x;
    viz[x]=1;
    for(int y=1;y<=n;y++){
        if(a[x][y]>=1 && viz[y]==0){
            tata[y]=x;
            df_rec(y);
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

    cout<<endl<<"DF ";
    cin>>z;
    df_rec(z);
}
