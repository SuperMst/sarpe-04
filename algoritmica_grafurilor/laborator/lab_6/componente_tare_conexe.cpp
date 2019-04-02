#include <iostream>
#include <fstream>
using namespace std;

int nrc,d[100][100], ctc[100], n, i, j, a[100][100];

void comp_tar_con(){
  nrc = 0;
  for (i = 1; i <= n; i++) {
    ctc[i] = 0;
  }
}
void roy_warshall_ctc(){
  for (i = 1; i <= n; i++)
  if (ctc[i] == 0) {
    nrc++;
    ctc[i] = nrc;
    for (j = i+1; j <= n; j++) {
      if (ctc[j] == 0 && d[i][j] == 1 && d[j][i] == 1)
      ctc[j] = nrc;
    }
  }
}

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
  roy_warshall_ctc();
  cout<<"Matricea drumurilor este:\n";
  print_matrice(d);

  for (size_t i = 1; i <= n; i++) {
    cout<<"Nodul "<<i<<" face parte din componenta tare conexa "<<ctc[i]<<"\n";
  }

  return 0;
}
