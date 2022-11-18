#include <iostream>
using namespace std;

int main() {
  int x = 5;
  int y = 3;
  // 5 Comparison Operaters
  cout << (x == y) << endl; // Equal To
  cout << (x != y) << endl; // Not Equal
  cout << (x > y) << endl;  // Greater than 
  cout << (x < y) << endl;  // Less Than
  cout << (x >= y) << endl; // Greater Or Equal To
  cout << (x <= y) << endl; // Less than Or Wqual To
  // All above result will be 1(True) When Above conditions are True
  
  // LOGICAL OPERATOERS
  cout << (x == 5 && y == 3) << endl;  // Logical AND
  cout << (x <= 5 || y >= 3) << endl;  // Logical OR
  cout << !(x == 4) << endl;           // Logical NOT
  // If above Conditions Are True or Flase It Give Result In 1 or 0
  return 0;
}
