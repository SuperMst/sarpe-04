#include <iostream>
#include <fstream>
using namespace std;

int cc[50], viz[50],nrc,nr_m,n,a[50][50],i,j,m1[50],m2[50],tata[50];

void viziteaza(int x){
  cc[x]=nrc;
}

void df(int x){
    viziteaza(x);
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
        }
    }
}

int main(){

  ifstream f("2_verif_arbore_quasi.txt");
  f>>n;
  f>>nr_m;

  for(i=1;i<=nr_m;i++){
      f>>m1[i];
      f>>m2[i];
      a[m1[i]][m2[i]]++;
      a[m2[i]][m1[i]]++;
  }
  comp_conexe();
if (nrc==1) {
    cout<<"Graful este quasi-tare conex";
  }
  else cout<<"Graful nu este quasi-tare conex";
}
