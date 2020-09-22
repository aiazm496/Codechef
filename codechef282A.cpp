#include <iostream>
#include <string>

using namespace std;


int main(){

    int i;
    cin >> i;
    string k;

    int x = 0;

    for(int j = 0 ; j!=i; ++j){
        cin >> k;
        if(k[0]=='+' || k[k.size()-1]=='+')
            ++x;
        if(k[0]=='-' || k[k.size()-1]=='-')
            --x;
    }
    cout << x << endl;

    return 0;
}
