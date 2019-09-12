#include <iostream>
using namespace std;

int main() {
    
    int n, arr[102] = {0}, pairs = 0;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        arr[temp]++;
    }
    
    for(int i = 0; i < 101; i++){
        if(arr[i]!= 0) pairs+=arr[i]/2;
    }
    
    cout << pairs << endl;
    
    return 0;
}
