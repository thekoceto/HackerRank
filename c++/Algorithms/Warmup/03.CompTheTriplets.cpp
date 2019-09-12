#include <bits/stdc++.h>
using namespace std;

int simpleArraySum(int n, vector <int> arr) {
    int result = 0;
    for(int i = 0; i <n; i++)
        result += arr[i];

    return result;
}

int main() {
    int Alice[3] = {0,0,0};
    int Bob[3] = {0,0,0};
    int result[2] = {0,0};

    for(int i = 0; i < 3; i++){
       cin >> Alice[i];
    }
    
    for(int i = 0; i < 3; i++){
       cin >> Bob[i];
       if (Alice[i]>Bob[i]){
           result[0]++;
       }else if (Alice[i]<Bob[i]){
           result[1]++;
       }
    }
        
    cout << result[0] << " " <<  result[1] << endl;
    return 0;
}
