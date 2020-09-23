#include <bits/stdc++.h>

using namespace std;


int main(){

    int stones = 0;
    string colors;

    cin >> stones;
    cin >> colors;

    int minc = 0;
    for(int i = 0; i!=colors.size();++i){
        if(colors[i+1]==colors[i]){
            minc+=1;
        }
    }
    cout << minc << "\n";


}
