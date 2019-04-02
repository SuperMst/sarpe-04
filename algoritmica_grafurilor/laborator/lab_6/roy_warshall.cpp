//Algortimul Roy Warshall P1;

#include <iostream>
#include <fstream>
using namespace std;

int n,a[100][100],d[100][100];

void print_matrice(int x[100][100]){
  int i, j;
  for (i = 1; i <= n; i++) {
      for (j = 1; j <= n; j++) {
        cout<<x[i][j]<<" ";
      }
    cout<<"\n";
  }
  cout<<"\n";
}

void roy_warshall()
{
  int i, j, k;
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= n; j++) {
      d[i][j] = a[i][j];
    }
  }
  for (k = 1; k <= n; k++) {
    for (i = 1; i <= n; i++){
      for (j = 1; j <= n; j++) {
        if(d[i][k]*d[k][j] > 0)
          d[i][j]=d[i][k]*d[k][j];
      }
    }
  }
}

int main()
{
  int i, j;
  ifstream f("matrice.txt");
  f>>n;
  for(i = 1 ; i <= n ; i++)
    for(j = 1 ; j <= n ; j++)
      f>>a[i][j];

  roy_warshall();
  print_matrice(d);

  return 0;
}
