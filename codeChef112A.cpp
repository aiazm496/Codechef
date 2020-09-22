#include <iostream>
#include <string>

using namespace std;

int main(){

 string s1,s2;
 cin >> s1 >> s2;

 for( auto &i : s1)
    i = toupper(i);
 for( auto &i : s2)
    i = toupper(i);

if(s1>s2){
    cout << 1 << endl;
}
else if (s1==s2)
    cout << 0 << endl;
else
    cout << -1 << endl;



 return 0;
}
