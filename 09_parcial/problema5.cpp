#include <iostream>
using namespace std;
int main () {
  int N = 5;

  for(int i=1; i<=N; i++) {
    for(int j=0; j < i; j++) {
      cout << i;
    }
    cout << endl;
  }
}