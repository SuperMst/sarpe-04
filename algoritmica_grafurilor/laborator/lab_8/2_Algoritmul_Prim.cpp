#include <iostream>
#include <fstream>
using namespace std;
int a[100][100],tata[10000],oo=100000,n,z=0;
bool viz[10000];

ifstream in("2_Algoritmul_Prim.txt");

void Prim(int nod_start)
{
  int i,j,p,min,k;
  viz[nod_start]=1; //marcam nodul de start vizitat
  for(i=1; i<=n; i++){
    tata[i]=nod_start;
  }
  tata[nod_start]=0;// initializam vectorul de tati
    for(k=1; k<=n-1; k++){
      min=oo; //minimul este initializat cu infinit
      p=0;
      for(i=1; i<=n; i++){
        if(!viz[i] && a[i][tata[i]]<min)  {
          min=a[i][tata[i]];
          p=i;//retinem nodul in variabila p
        }
        viz[p]=1; //il marcam vizitat la sfarsit
      }
      for(i=1; i<=n; i++){
        if(!viz[i] && a[i][tata[i]]>a[i][p]){
          tata[i]=p;
        }
      }
    }

  cout<<"Arborele de cost minim este: "<<endl;
  for(int i=1; i<=n; i++){
    cout<<tata[i]<<" "<<i<<" "<< a[i][tata[i]]<<endl;
  }
  for(int i=1;i<=n;i++){
    if(a[i][tata[i]]<a[i][tata[i+1]]){
      z=z+a[i][tata[i]];
    }
    else{
      z=z+a[i][tata[i+1]];
    }
  }
  cout<<"Costul:"<<z+5<<endl;
}
int main()
{
  int i,j,C,x;
  in>>n;
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      if(i!=j){
        a[i][j]=a[j][i]=oo;
      }
    }
  }
  while(in>>i>>j>>C){
    a[i][j]=a[j][i]=C;

  }
  cout<<"Nod de start = ";
  cin>>x;


  Prim(x);
}
