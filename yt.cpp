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

int main()
{
  cout << reverseString() << endl;
  return 0;
}
