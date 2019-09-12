#include <iostream>
using namespace std;

int main() {
    
    int n, level = 0, count = 0;
    bool flag = true;
    
    cin >> n;
    
    do{    
        char ch;
        cin >> ch;
        if (ch=='U') level++;
        else if (ch=='D') level--;
        if (level>=0 && !flag){
            count++;
            flag=true;
        }else if (level<0){
            flag=false;
        }
        n--;
    }while(n>0);
    
    cout << count << endl;
    
    return 0;
}
