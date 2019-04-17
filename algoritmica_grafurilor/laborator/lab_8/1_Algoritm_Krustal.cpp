#include<iostream>
#include<fstream>
using namespace std;
int n,nr_muchii,k=1,S[50],CC[50],m[3][50];
int aux,cost,x,y,c,poz,z=0;
void citire()
{
    ifstream f("1_Algoritm_Krustal.txt");
    f>>n;
    while(f>>m[0][k]>>m[1][k]>>m[2][k]){
    cout<<m[0][k]<<" "<<m[1][k]<<" "<<m[2][k]<<endl;
    z = z+m[2][k];
    }
    k++;

}
void sort()
{
  for(int i=1;i<k;i++){
    S[i]=0;
  }
  for(int i=1;i<n;i++){
    CC[i]=i;
  }
  cost= 0;
  poz = 0;

  for(int l=1;l<n-1;l++){
    k=poz;
    do{
      k=k+1;
      x=m[0][k];
      y=m[1][k];
      c=m[2][k];
    }while(CC[x]=CC[y]);
    S[k]=1;
    cost=cost+c;
    poz=k;
    aux=CC[y];
    for(int i=1;i<n;i++){
      if(CC[i]==aux)
        CC[i]=CC[x];
    }
  }

}

main()
{
    citire();
    sort();

		cout<<endl<<"costul total este "<<z;
}
