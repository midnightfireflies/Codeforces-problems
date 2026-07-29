#include<iostream>
#include<string>
using namespace std;
int main(){
int n;
cin>>n;
string t;
cin >> t;
string ans = "";
int ptr = 0;
int i = 1;
while(ptr < n){
    ans += t[ptr];
    ptr += i;
    i++;
}
cout << ans << endl;
return 0;
}
