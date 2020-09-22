#include <iostream>
#include <string>

using namespace std;

int main(){

int i;
if(cin >> i && 1<=i && i<=100){
string s;
int x=1;

    while(x<=i){
        cin >> s;
        if(s.size()>10){
            int no = s.size()-2;
            s.replace(1,s.size()-2,to_string(no));
        }
        cout << s << endl;
        ++x;
    }
return 0;
}
else{
    cerr << "please check the input range" << endl;
    return -1;
}

}
