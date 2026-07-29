#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>t(n);
for(int i=0;i<n;i++){
    cin>>t[i];
}
sort(t.begin(), t.end());
int sum = 0;
for(int i = 0; i< n; i+=2){
sum += (t[i+1]-t[i]);

}
cout << sum << endl;
return 0;
}
