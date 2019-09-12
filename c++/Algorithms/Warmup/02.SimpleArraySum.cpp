#include <bits/stdc++.h>
using namespace std;

int simpleArraySum(int n, vector <int> arr) {
    int result = 0;
    for(int i = 0; i <n; i++)
        result += arr[i];

    return result;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    
    for(int i = 0; i < n; i++){
       cin >> arr[i];
    }
        
    cout << simpleArraySum(n, arr) << endl;
    return 0;
}
