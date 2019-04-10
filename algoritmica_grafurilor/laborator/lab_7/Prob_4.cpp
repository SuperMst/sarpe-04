#include <iostream>
#include <fstream>
using namespace std;
int n,a[100][100],i,j,v[100],d[100][100],x;
int grad(int x)
{int s=0;
  for(j=1;j<=n;j++)
s=s+a[x][j];

return s;
}



int main()
{ ifstream f("prob4.txt");
f>>n;
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
f>>a[i][j];

for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
{if(i==j) {
  d[i][i]=grad(i);}
  else{
if(a[i][j]!=a[j][i])  {d[i][j]=a[i][j]+a[j][i];
                       d[j][i]=a[i][j]+a[j][i];}
else {d[i][j]=a[i][j];
      d[j][i]=a[i][j];}
  }


}
for(i=1;i<=n;i++)
{for(j=1;j<=n;j++)
cout<<d[i][j]<< ' ';
cout<<endl;
  }


}
