#include <iostream>
#include <string>
using namespace std;

int main()
{
      int angka [] = {1,3,5,7,9}; 
      cout << "Angka= " << angka [2] << endl;
      
      char huruf [] = {'A', 'I', 'U', 'E', 'O'};
      cout << "Huruf= " << huruf[4] << endl;
      
      string nama [] = {"Algis", "Osep", "Amel"};
      cout << "Nama= " << nama[0] << endl;
      
  int nilai [3][4] = {
      {80, 85},
      {90, 92, 94, 95},
      {75, 78, 79}
      };
      cout << "Nilai= " << nilai [0][1] << endl;
}
