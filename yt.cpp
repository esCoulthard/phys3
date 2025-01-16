#include <iostream>
#include <string>
using namespace std;

string reverseString() {

    string x = "q";
    cout << "Please GIVE ME A STRING" << "\n";
    cin >> x;
    string q;
    for (int i = x.length()-1; i >= 0; i--) {
        char z = x.at(i);
        q += z;
    }
    return q;
}

float calculator() {
  int a;
  int b;
  char q;
  float c;
  #include <iostream>
  #include <string>
  using namespace std;

  cout << "Please give me two numbers" << "\n";
  cout << "Number one:";
  cin >> a;
  cout << "Number two:";
  cin >> b;
  cout << "Thank you!" << "\n" << "Now, please pick something to do with them" << "\n" << "Operation Style:";
  cin >> q;
  cout << "Thank you!";
  if (b == 0 && q == '/') {
    cout << "I HATE YOU!!!!!!";
  }
  else if (q == '+') {
    c = a + b;

  }
  else if (q == '-') {
    c = a - b;

  }
  else if (q == '/') {
    c = a / b;

  }
  else if (q == '*') {
    c = a * b;

  }
  return c;

}

int main()
{
  cout << calculator() << endl;
  return 0;
}
