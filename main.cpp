#include <iostream>
using namespace std;
int main() {
   int x;
   cin >> x;
   int y;
   cin >> y;
   if(x>y)
       cout << x << endl;
   else if(x=y)
       cout << x << " = " << y << endl;
   else
       cout << y <<endl;
    return 0;
}
