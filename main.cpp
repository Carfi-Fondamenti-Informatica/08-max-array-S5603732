#include <iostream>
#include "lib.h"

using namespace std;

int main(){
  int a=0;
    float b, d=0;
    cin >>a;
    float c[a];
    for (int i=0; i<a; i++) {
        cin >> b;
        c[a]=b;
        if (b>d) d=b;
    }
    cout << array(d);
  return 0;
}
