#include <iostream>

using namespace std;

int main(){

int weight = 0;

if(cin >> weight && 1<= weight && weight<=100){

    if(weight%2==0 && weight!=2){
        cout << "YES" << endl;
    }
    else{
    cout << "NO" << endl;
}
return 0;
}
else{
    cerr << "please check input" << endl;
    return -1;
}
}
