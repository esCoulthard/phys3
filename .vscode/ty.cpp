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
  cout << "Please give me two numbers" << "\n";
  cout << "Number one:";
  cin >> a;
  cout << "/n";
  cout << "Number one:";
  cin >> b;
  cout << "/n" << "Thank you!" << "\n" << "Now, please pick something to do with them" << "\n" << "Operation Style:";
  cin >> q;
  cout << "\n" << "Thank you!" << "\n";
  if (b == 0 && q == /) {
    cout << "I HATE YOU!!!!!!";
    return 0;
  }
  else {
    float c;
    c = a q b
    cout << c;
    return 0;
  }

  

}

int main()
{
  cout << reverseString() << endl;
  return 0;
}