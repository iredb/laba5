/************************************
 * Струк Степан Андреевич           *
 * Использование процедур и функций *
 * 18.10.2023                       *
 * www.onlinegdb.com/edit/mk40SQ7LN *
 ************************************/

#include <iostream>
#include <math.h>

using namespace std;

double positiveaverage(double curarray[], int arraylen) {
  double product = 0;
  double amount = 0;
  
  for (int numberindex = 0; numberindex < arraylen; ++numberindex){
    if (curarray[numberindex] < 0){
      continue;
    } else if (amount == 0) {
      product = curarray[numberindex];
      amount = 1;
    } else {
      product *= curarray[numberindex];
      amount += 1;
    }
  }
  
  return pow(product, 1/amount);
}

int main() {
  int n, m, k;
  
  cout << "Введите число n: ";
  cin >> n;
  cout << endl << "Введите число m: ";
  cin >> m;
  cout << endl << "Введите число k: ";
  cin >> k;
  
  double E[n], S[m], C[k];
  
  for (int numberindex = 0; numberindex < n; ++numberindex){
    cout << endl << "Введите " << numberindex+1 << " число массива E:";
    cin >> E[numberindex];
  }
  
  for (int numberindex = 0; numberindex < m; ++numberindex){
    cout << endl << "Введите " << numberindex+1 << " число массива S:";
    cin >> S[numberindex];
  }
  
  for (int numberindex = 0; numberindex < k; ++numberindex){
    cout << endl << "Введите " << numberindex+1 << " число массива C:";
    cin >> C[numberindex];
  }
  
  double Epositiveaverage, Spositiveaverage, Cpositiveaverage;
  
  Epositiveaverage = positiveaverage(E, n);
  Spositiveaverage = positiveaverage(S, m);
  Cpositiveaverage = positiveaverage(C, k);
  
  cout << endl << Epositiveaverage << " " << Spositiveaverage << " " << Cpositiveaverage;
  
  return 0;
}
