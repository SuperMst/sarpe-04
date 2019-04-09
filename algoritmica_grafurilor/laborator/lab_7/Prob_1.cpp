#include <iostream>
#include <fstream>
using namespace std;
int n,a[100][100],i,j,viz[30],x,m;

void Drum(int x)
{ int i;
  viz[x]=1;
  for(i=1;i<=n;i++)
    if (a[x][i]==1 && viz[i]==0) Drum(i);
}
int Conex()
{ int i;
  Drum(1);
  for(i=1;i<=n;i++)
      if (viz[i]==0) return 0;
  return 1;
}

int  main() {
ifstream f("Matrice_adiacenta1.txt");
f>>n;
f>>m;
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
{f>>a[i][j];}

if(Conex()==1 && n-1==m) cout <<"DA";
else cout<<"NU";







  return 0;




}
