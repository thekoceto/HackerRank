#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    long int arr[n], result = 0;
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        result+=arr[i];
    }
    
    
    cout << result << endl;
    
    return 0;
}
