#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    vector <char> v1 = {};

    for(int i = 0 ; i!=s.size();++i){
       if(s[i]!='+'){
        v1.push_back(s[i]);
       }
        }
    sort(v1.begin(),v1.end());

    cout << v1[0];

    for(int i=1 ; i!=v1.size();++i){
        cout << "+" << v1[i];
    }

    return 0;
}

