#include <iostream>
using namespace std;
int main() {
  int grade;
  cin >> grade;
  if(grade >=0 && grade < 50)
      cout << "F" << endl;
  else if(grade >=50 && grade <60 )
      cout << "D " << endl;
  else if(grade >=60 && grade <70 )
      cout << "C" << endl;
  else if(grade >=70 && grade <80)
      cout << "B" << endl;
  else if(grade >=80 && grade <90 )
      cout << "A" << endl;
  else if(grade >=90 && grade <100 )
      cout << "0" << endl;
      return 0;
}
