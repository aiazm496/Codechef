#include <bits/stdc++.h>

using namespace std;

int main(){

    string name;
    cin >> name;

    int same= 0;
    for(int i = 0 ; i!=(name.size()-1);++i){
            for (int j = i+1; j!=name.size();++j){
                if(name[j]==name[i])
                    ++same;

            }
    }

    string result = ((name.size()-same)%2==0)?"CHAT WITH HER!":"IGNORE HIM!";
    cout << result << "\n";




}
