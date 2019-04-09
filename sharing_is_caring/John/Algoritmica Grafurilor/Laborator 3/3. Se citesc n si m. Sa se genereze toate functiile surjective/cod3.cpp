#include <iostream>
using namespace std;

int x[20],m,n;
void afisare()
{
 for(int i=1;i<=n;i++){
   cout <<"f("<<(i)<<")="<<x[i]<<endl;
 }
 cout <<"\n";
}

int valid(int k)
{
  int sw=1,i,ap[20]={0};
  for(i=1;i<=k;i++)
    ap[x[i]]=1;
  for(i=1;i<=m;i++){
      if(ap[i]==0)
      {
        sw=0;
      }
    }
  return sw;
}

void back(int k){
  for(int i=1;i<=m;i++){
    x[k]=i;
    if(k==n){
      if(valid(k))
      {
        afisare();
      }
    }
   else{
     back(k+1);
   }
  }
}
int main()
{
 cout <<"n="; cin >>n;
 cout <<"m="; cin >>m;
 if (m>n)
 {
   cout <<"Nu exista functii surjective.";
 }
 else {
   back(1);
 }
 return 0;
}
