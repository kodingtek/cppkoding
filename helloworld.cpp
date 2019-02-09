#include <iostream>
using namespace std;
class Sum{
  int x, y;

public:
  void input(){
    cout << "Input two integers: \n" << endl;
    cin >> x >> y;
  }
  
  void add(){
    cout << "Result is: " << x + y;
  }
};

int main(){
  Sum s;
  s.input();
  s.add();
  return 0;
}
