#include <iostream>

using namespace std;

int main(){

    int i;
    int x=1;
    cin>>i;
    int out = 0;
    while(x<=i){
        int i,j,k;
        cin >> i >> j >> k;
        if((i+j+k)>=2)
            out+=1;
        ++x;
    }
    cout << out << endl;
    return 0;
}
