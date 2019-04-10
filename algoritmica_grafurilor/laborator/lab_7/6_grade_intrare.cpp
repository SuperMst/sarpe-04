#include <iostream>
#include <fstream>
using namespace std;

int nr_n,nr_m,a[100][100],m1[50],m2[50],grad_intr[50], i, j;

int main()
{
    ifstream f("6_grade_intr.txt");
    //cout<<"Dati nr noduri ";
    f>>nr_n;
    //cout<<"Dati nr muchii ";
    f>>nr_m;
    //cout<<"Muchiile sunt "<<endl;
    for(i=1;i<=nr_m;i++){
        f>>m1[i];
        f>>m2[i];
        a[m1[i]][m2[i]]++;
    }

    for(i=1;i<=nr_n;i++)
    {
        for(j=1;j<=nr_n;j++)
        {
            grad_intr[j]+=a[i][j];
        }
    }

    cout<<endl;
    for(i=1;i<=nr_n;i++)
    {
        cout<<"Gradul de intrare a nodului "<<i<<" este "<<grad_intr[i]<<endl;
    }
}
