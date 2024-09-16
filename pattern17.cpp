#include <iostream>
using namespace std;

int main(){

int r,c,n;
cin>>n;
r=1;

while(r<=n){
c=1; int j=n-r+1;
while(j){
cout<<'*';
j--;
}
r++;
cout<<endl;
}
    return 0;
    }
