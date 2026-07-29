#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
int n;
cin>>n;
while(n!=0){
long long a, total_work=0, current_balance=0;
for(int i=0;i<n;i++){
    cin>>a;
    current_balance+=a;
    total_work+=abs(current_balance);}

cout<<total_work<<endl;
cin>>n;
}
return 0;
}
