#include <iostream>

using namespace std;

int nr_n,nr_m,a[100][100],m1[50],m2[50],grad_tot[50], grad_ies[50], grad_intr[50], i, j;

int main()
{
    cout<<"Dati nr noduri "; cin>>nr_n;
    cout<<"Dati nr muchii "; cin>>nr_m;
    cout<<"Muchiile sunt "<<endl;
    for(i=1;i<=nr_m;i++){
        cin>>m1[i];
        cin>>m2[i];
        a[m1[i]][m2[i]]++;
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
            grad_ies[i]+=a[i][j];
            grad_intr[i]+=a[j][i];
            grad_tot[i]+=a[i][j]+a[j][i];
        }
    }

    cout<<endl<<"Gradele de iesire sunt"<<endl;
    for(i=1;i<=nr_n;i++)
    {
        cout<<grad_ies[i]<<endl;
    }

    cout<<endl<<"Gradele de intrare sunt"<<endl;
    for(i=1;i<=nr_n;i++)
    {
        cout<<grad_intr[i]<<endl;
    }

    cout<<endl<<"Gradele totale sunt"<<endl;
    for(i=1;i<=nr_n;i++)
    {
        cout<<grad_tot[i]<<endl;
    }
}
