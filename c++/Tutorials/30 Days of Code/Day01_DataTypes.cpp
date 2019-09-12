#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int i2;
    double d2;
    string s2 = "";
    
    cin >> i2 >> d2;
    
    cin.ignore();
    getline(cin,s2);

    cout << i+i2 << endl;
    cout << fixed;
    cout << setprecision(1);
    cout << d+d2 << endl;
    cout << s + s2 << endl;

    return 0;
}
