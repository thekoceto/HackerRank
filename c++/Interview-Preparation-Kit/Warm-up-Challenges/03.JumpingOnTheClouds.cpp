#include <iostream>
using namespace std;

int main() {
    
    int n, current = 0, hops=0;

    cin >> n;
    
    int clouds[n];
    
    for(int i = 0; i < n; i++) {
        cin >> clouds[i];
    }
    
    while(current<n-1){
        if (clouds[current+2]==0 && current<=n-2){
            current+=2;
        }else {
            current++;
        }
        hops++;
    }
    
    cout << hops << endl;
    
    return 0;
}
