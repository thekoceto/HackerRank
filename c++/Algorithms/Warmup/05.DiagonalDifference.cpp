#include <iostream>
using namespace std;

int main() {
    int n ;
    cin >> n;
    
    int arr[n][n], result = 0, step = n-1;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
        result += arr[i][i];
        result -= arr[i][step];
        step--;
        
    }
    result = result>0 ? result : -1*result;
    
    cout << result;
    
    return 0;
}
