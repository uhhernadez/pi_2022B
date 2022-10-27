#include <iostream>
#include <vector>
using namespace std;
int main () {
  int a[] = {0, -2, 3, 5, 6};

  for(int &i : a) {
    i = 20;
  }

  for(int i : a) {
    cout << i << endl;
  }

}
  