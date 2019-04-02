#include <iostream>

using namespace std;

int nr_n,nr_m,a[100][100],m1[50],m2[50],grad[50], i, j;

int main()
{
    cout<<"Dati nr noduri "; cin>>nr_n;
    cout<<"Dati nr muchii "; cin>>nr_m;
    cout<<"Muchiile sunt "<<endl;
    for(i=1;i<=nr_m;i++){
        cin>>m1[i];
        cin>>m2[i];
        a[m1[i]][m2[i]]++;
        a[m2[i]][m1[i]]++;
    }

    cout<<endl;
    for(i=1;i<=nr_n;i++){
        for(j=1;j<=nr_n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    for(i=1;i<=nr_n;i++)
    {
        for(j=1;j<=nr_n;j++)
        {
            grad[i]+=a[i][j];
        }
    }

    cout<<endl;
    for(i=1;i<=nr_n;i++)
    {
        cout<<grad[i]<<endl;
    }
}
