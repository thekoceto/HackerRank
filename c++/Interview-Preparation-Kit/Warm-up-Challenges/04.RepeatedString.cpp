#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    long  result = 0, count = 0;
    
    for (int i = 0; i < s.size(); i++)
        if (s[i] == 'a') count++;
    
    result = n/s.size()*count;
    
    for (int i = 0; i < n%s.size(); i++)
        if (s[i] == 'a') result++;
        
    return result;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
