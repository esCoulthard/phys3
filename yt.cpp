#include <iostream>
#include <string>
#include <typeinfo>
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
  float a;
  float b;
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
  if (typeid(a) != typeid(float) or typeid(b) != typeid(float) ){
    cout << "Please pick numbers :)";
  }
  else {
    cout << "Thank you!" << "\n" << "Now, please pick something to do with them" << "\n" << "Operation Style:" << "\n";
  }
  cin >> q;

  if (q != '/' and q != '*' and q != '+' and q != '-'){
    cout << "please pick /, *, + or -";
  }
  else if (b == 0 && q == '/') {
    cout << "I HATE YOU!!!!!!";
    c = 0;
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
  int oo;
  while(oo <= 1000){
    oo += 1;
    cout << oo << "\n";
  }
  return 0;
}
