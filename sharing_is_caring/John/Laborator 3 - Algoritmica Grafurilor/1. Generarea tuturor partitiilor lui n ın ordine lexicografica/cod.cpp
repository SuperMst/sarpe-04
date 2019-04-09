#include <iostream>
using namespace std;

int n,x[50],s;
void afisare_sol(int nr){
  int i;
  cout<<n<<"=";
  for(i=1;i<=nr-1;i++)
    cout<<x[i]<<"+";
  cout<<x[nr]<<endl;
}
void partener(int k){
  int i;
  if(s==n)
  afisare_sol(k-1);
  else{
    for(i=x[k-1]; i<=n-s; i++){
      x[k]=i;s=s+x[k];
      partener(k+1);
      s=s-x[k];
    }
  }
}
int main(){
  cout<<"n=";
  cin>>n;
  x[0]=1;
  partener(1);
}
