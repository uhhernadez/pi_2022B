#include <vector>
#include <iostream>
using namespace std;
int main () {
  int a[] = {1, 2, 3};
  int b[3] = {1, 2, 3};
  vector<int> c{1, 2, 3};

  cout << a[0] << " " << b[0] << " " << c[0] << endl;
  cout << a[1] << " " << b[1] << " " << c[1] << endl;
  cout << a[2] << " " << b[2] << " " << c[2] << endl;
}