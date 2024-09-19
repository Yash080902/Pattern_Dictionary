#include <iostream>
using namespace std;

int main(){

int r,c,n;
cin>>n;
r=1;
while(r<=n){
    int space = n-r;
    while(space){
cout<<" ";
space = space-1;
}
c=1;
while(c<=r){
cout<<'*';
c++;
}
r++;
cout<<endl;
}
    return 0;
    
    }
