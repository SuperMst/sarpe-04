#include <iostream>
using namespace std;


int x3[20], n3, nrsol3=0, max[20], maxim;

int DeterminareMaxim(int k)
{
  int maxim=0,i;
    for(i=1;i<=k;i++)
        if (x3[i]>maxim) maxim=x3[i];
    return maxim;
}

void Afisare3()
{ int i,j;
  maxim=DeterminareMaxim(n3);
  for(j=1;j<=maxim;j++)
   {   cout<<"{";
       for(i=1;i<=n3;i++)
           if (x3[i]==j)
           cout<<i<<' ';
         cout<<"}";
   }
  cout<<endl;
  nrsol3++;
}

void BackRec3(int k)
{  int i;
   for(i=1;i<=DeterminareMaxim(k-1)+1;i++)
      { x3[k]=i;
    if (k==n3) Afisare3();
    else BackRec3(k+1);
     }
}

int main()
{
  cout<<"Dati valoarea lui n: ";
  cin>>n3;
  cout<<endl;
  BackRec3(1);
  cout<<"Numar solutii: "<<nrsol3;
  return 0;
}
