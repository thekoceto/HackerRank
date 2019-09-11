#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    string num2text [10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string greater = "Greater than 9";
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (n>=0 && n<=9){
        cout << num2text[n] << endl;
    }
    else if (n>9){
        cout << greater << endl;
    }

    return 0;
}
