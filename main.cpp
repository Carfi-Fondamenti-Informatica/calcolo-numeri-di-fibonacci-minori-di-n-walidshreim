#include <iostream>
using namespace std;

int main() {
   int n,i=0, b = 1, a = 0, c=0;
        cin >> n;
        cout << b << endl;
            for (i = 0; i<(n+1); i++) {
                if(c<=n) {
                    cout << c << endl;
                    a = b;
                    b = c;
                    c = a + b;
                }
            }
        return 0;
}
