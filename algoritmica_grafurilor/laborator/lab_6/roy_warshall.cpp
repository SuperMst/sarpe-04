//Algortimul Roy Warshall P1;

#include <iostream>
using namespace std;

int n,d[100][100],a[100][100];

void roy_warshall(){
  for (int i = 1; i <= n; i++) {
    for (int j = 1; i <= n; j++) {
      d[i][j] = a[i][j];
    }
  }
  for (int k = 1; k <= n; k++) {
    for (int i = 1; i <= n; i++){
      for (int j = 1; j <= n; j++) {
        if (d[i][k] + d[k][j] < d[i][j])
          d[i][j] = d[i][k] + d[k][j];
      }
    }
  }
}

int main()
{ifstream f("matrice.txt");
f>>n;

  return 0;
}
