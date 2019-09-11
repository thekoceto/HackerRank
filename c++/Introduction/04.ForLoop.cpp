#include <iostream>
#include <cstdio>
using namespace std;

int main() {
        int a, b;
    cin >> a >> b;
    
    string array[2][9] = {{"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"},
                          {"even", "odd"}} ;
    for(int i = a; i <= b; i++) {
        if(i>=1 && i<=9){
            cout << array[0][i-1] << endl;
        }else if (i>9){
            cout << array[1][i%2] << endl;
        }
    }
    return 0;
}
